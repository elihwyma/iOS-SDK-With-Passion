/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary;

@interface HDDemoDataFoodDatabase : NSObject

{
    NSDictionary *_dietaryNutrientDailyValues;
    NSDictionary *_canonicalDietaryUnits;
    NSArray *_beverages;
    NSArray *_breakfastFoods;
    NSArray *_lunchFoods;
    NSArray *_snackFoods;
    NSArray *_dinnerFoods;
}

@property (copy, nonatomic) NSDictionary *dietaryNutrientDailyValues;
@property (copy, nonatomic) NSDictionary *canonicalDietaryUnits;
@property (copy, nonatomic) NSArray *beverages;
@property (copy, nonatomic) NSArray *breakfastFoods;
@property (copy, nonatomic) NSArray *lunchFoods;
@property (copy, nonatomic) NSArray *snackFoods;
@property (copy, nonatomic) NSArray *dinnerFoods;

- (id)init;
- (id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)arg1;
- (id)randomFoodForType:(long long)arg1;
- (id)coffee;
- (id)oceanSprayCranberryJuice;
- (id)tropicanaOrangeJuice;
- (id)odwallaCMonster;
- (id)milk;
- (id)quakerInstantOatmealRegularWithMilk;
- (id)quakerInstantOatmealAppleCinnamonWithMilk;
- (id)quakerInstantOatmealMapleWithMilk;
- (id)lifeCerealWithMilk;
- (id)totalCerealWithMilk;
- (id)jimmyDeanBreakfastCroissant;
- (id)traderJoesBreakfastBurrito;
- (id)mcDonaldsBigMac;
- (id)mcDonaldsMcDouble;
- (id)mcDonaldsMcChickenSandwich;
- (id)mcDonaldsCaesarSaladWithGrilledChicken;
- (id)mcDonaldsGreekSaladWithCrispyChicken;
- (id)traderJoesButterChickenWithBasmataRice;
- (id)traderJoesChickenAndGreenChileTomales;
- (id)subwayFootLongBlackForestHamSandwich;
- (id)subwayFootLongVeggieDelightSandwich;
- (id)subwayVeggieDelightSalad;
- (id)bumbleBarWithAlmond;
- (id)hersheyBarWithAlmonds;
- (id)clifBarChocoFudgeAndAlmond;
- (id)apple;
- (id)crackersGlutenFreeMultigrain;
- (id)crackersTriscuits;
- (id)keeblerAnimalCrackers;
- (id)oikosYogurt;
- (id)redLobsterTilapiaWithRoastedVegetables;
- (id)livemainLobsterWithCornAndPotatoes;
- (id)oliveGardenGarlicRosemaryChicken;
- (id)oliveGardenBakedTilapiaWithShrimp;
- (id)oliveGardenCitrusChickenSorrento;
- (id)oliveGardenHerbGrilledSalmon;
- (id)oliveGardenChickenScampi;
- (id)oliveGardenChickenAndShrimpCarbonara;
- (id)randomFoodObjectFromArray:(id)arg1;
- (double)dailyValueForDietaryNutrientIdentifier:(id)arg1;
- (id)oliveGardenRosemaryChicken;

@end
