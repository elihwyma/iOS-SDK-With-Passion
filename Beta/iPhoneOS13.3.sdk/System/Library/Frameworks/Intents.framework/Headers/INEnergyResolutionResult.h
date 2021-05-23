/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INEnergyResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedEnergy:(id)arg1;
+ (id)disambiguationWithEnergyToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithEnergyToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
