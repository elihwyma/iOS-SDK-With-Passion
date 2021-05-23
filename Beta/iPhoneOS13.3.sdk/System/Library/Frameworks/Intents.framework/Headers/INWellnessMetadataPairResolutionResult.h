/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INWellnessMetadataPairResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedWellnessMetadataPair:(id)arg1;
+ (id)disambiguationWithWellnessMetadataPairsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithWellnessMetadataPairToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
