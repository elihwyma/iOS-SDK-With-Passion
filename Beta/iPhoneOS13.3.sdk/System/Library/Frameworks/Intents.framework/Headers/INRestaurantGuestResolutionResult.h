/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INRestaurantGuestResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedRestaurantGuest:(id)arg1;
+ (id)disambiguationWithRestaurantGuestsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithRestaurantGuestToConfirm:(id)arg1;

@end
