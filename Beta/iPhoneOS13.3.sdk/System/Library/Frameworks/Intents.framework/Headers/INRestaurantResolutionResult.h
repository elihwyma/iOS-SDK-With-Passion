/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INRestaurantResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedRestaurant:(id)arg1;
+ (id)disambiguationWithRestaurantsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithRestaurantToConfirm:(id)arg1;

@end
