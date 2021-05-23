/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INMassResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedMass:(id)arg1;
+ (id)disambiguationWithMassToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithMassToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
