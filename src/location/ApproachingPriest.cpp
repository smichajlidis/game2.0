#include "../../include/location/ApproachingPriest.hpp"
#include "../../include/location/PriestSuccess.hpp"
#include "../../include/location/PriestFail.hpp"
#include "../../include/Item.hpp"

ApproachingPriest::ApproachingPriest(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state)
    :InteractionWithNPC(player, game_state) {

    std::shared_ptr<NPC> priest = std::make_shared<NPC>();
    Item chapel_key {"chapel_key"};
    priest->addItem(chapel_key);
    game_state->addNPC("priest", priest);
    npc = game_state->getNPC("priest");

    game_state->addLocation("priest_success", std::make_shared<PriestSuccess>(game_state->getPlayer(), game_state));
    game_state->addLocation("priest_fail", std::make_shared<PriestFail>(game_state->getPlayer(), game_state));

    related_locations.push_back("priest_success");
    related_locations.push_back("priest_fail");

}

std::string ApproachingPriest::getNextLocationName(std::uint32_t val) {
    return (player->getBeingDrunk() ? related_locations.at(0) : related_locations.at(1));
}