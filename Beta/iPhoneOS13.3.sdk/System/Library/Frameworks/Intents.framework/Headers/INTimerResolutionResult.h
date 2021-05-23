/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTimerResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTimer:(id)arg1;
+ (id)disambiguationWithTimersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithTimerToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
