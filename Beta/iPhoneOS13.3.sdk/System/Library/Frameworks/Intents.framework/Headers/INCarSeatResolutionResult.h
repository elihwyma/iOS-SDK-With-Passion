/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INCarSeatResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedValue:(long long)arg1;
+ (id)confirmationRequiredWithValueToConfirm:(long long)arg1;
+ (id)successWithResolvedCarSeat:(long long)arg1;
+ (id)confirmationRequiredWithCarSeatToConfirm:(long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;
- (void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
