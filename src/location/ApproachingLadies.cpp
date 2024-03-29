#include "../../include/location/ApproachingLadies.hpp"
#include "../../include/location/GoUpstairs.hpp"
#include "../../include/location/Flirting.hpp"

ApproachingLadies::ApproachingLadies(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    std::shared_ptr<NPC> ladies = std::make_shared<NPC>();
    game_state->addNPC("ladies", ladies);
    npc = game_state->getNPC("ladies");

    game_state->addLocation("go_upstairs", std::make_shared<GoUpstairs>(game_state->getPlayer(), game_state));
    game_state->addLocation("flirting", std::make_shared<Flirting>(game_state->getPlayer(), game_state));

    related_locations.push_back("go_upstairs");
    related_locations.push_back("flirting");
    related_locations.push_back("tavern");

    sentences.push_back("- Guess what We are not wearing right now?");
    sentences.push_back("- Olive juice. Say it fast");
    sentences.push_back("- Hey, stranger! Wait, why are we still strangers? Let's fix that...");
    sentences.push_back("- We have a secret to tell you, but we want to tell you in person");
    sentences.push_back("- We hate everyone. But not you");
    sentences.push_back("- We are addicted to you, and we need another hit");
    sentences.push_back("- Want to make a beautiful memory together?");
    sentences.push_back("- You were in our dreams last night. Wanna hear?");
    sentences.push_back("- You're already thinking about us - we can feel it");
    sentences.push_back("- We can't focus today. We are too distracted thinking about you");
    sentences.push_back("- Our love language is physical touch. Want a present?");
    sentences.push_back("- You are our dream man, baby");
    sentences.push_back("- We need you right now");
}