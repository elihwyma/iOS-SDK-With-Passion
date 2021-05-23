/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTimerStateResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTimerState:(long long)arg1;
+ (id)confirmationRequiredWithTimerStateToConfirm:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
