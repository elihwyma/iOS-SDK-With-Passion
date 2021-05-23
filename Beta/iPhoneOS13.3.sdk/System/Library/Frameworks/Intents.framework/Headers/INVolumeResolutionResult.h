/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INVolumeResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedVolume:(id)arg1;
+ (id)disambiguationWithVolumeToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithVolumeToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
