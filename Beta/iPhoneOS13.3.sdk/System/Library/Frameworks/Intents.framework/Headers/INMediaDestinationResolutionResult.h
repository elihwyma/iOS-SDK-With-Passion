/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INMediaDestinationResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedMediaDestination:(id)arg1;
+ (id)disambiguationWithMediaDestinationsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithMediaDestinationToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
