#include "../../include/location/PriestSuccess.hpp"
#include "../../include/location/DrinkingWithPriest.hpp"
#include "../../include/location/AskingAboutChapel.hpp"

PriestSuccess::PriestSuccess(std::shared_ptr<Player> player, std::shared_ptr<GameState> game_state, const std::string& description, const std::string& choice_1, const std::string& choice_2, const std::string& choice_3)
    : InteractionWithNPC(player, game_state, description, choice_1, choice_2, choice_3) {

    npc = game_state->getNPC("priest");

    game_state->addLocation("drinking_with_priest", std::make_shared<DrinkingWithPriest>(game_state->getPlayer(), game_state));
    game_state->addLocation("asking_about_chapel", std::make_shared<AskingAboutChapel>(game_state->getPlayer(), game_state));

    related_locations.push_back("drinking_with_priest");
    related_locations.push_back("asking_about_chapel");
    related_locations.push_back("tavern");

        sentences.push_back("- He is a wise man who invented beer");
        sentences.push_back("- Milk is for babies. When you grow up you have to drink beer");
        sentences.push_back("- Life is too short to drink cheap beer");
        sentences.push_back("- What care I how time advances, I'm drinking all today");
        sentences.push_back("- Good people drink good beer");
        sentences.push_back("- I work until beer o’clock");
        sentences.push_back("- Beer makes you feel the way you ought to feel without beer");
        sentences.push_back("- I am not addicted to beer… It’s addicted to me");
        sentences.push_back("- Everybody needs to believe in something. I believe I’ll have another beer");
        sentences.push_back("- Beer… now there’s a temporary solution!");
        sentences.push_back("- Beer. The best damn drink in the world!");
        sentences.push_back("- Beer is proof that God loves us and wants us to be happy");
        sentences.push_back("- The mouth of a perfectly happy man is filled with beer");
        sentences.push_back("- Fermentation may have been a greater discovery than fire");
        sentences.push_back("- He who drinks beer sleeps well. he who sleeps well cannot sin. He who does not sin goes to heaven. Amen");
        sentences.push_back("- Let no man thirst for good beer");
        sentences.push_back("- On victory, you deserve beer, in defeat, you need it");
}