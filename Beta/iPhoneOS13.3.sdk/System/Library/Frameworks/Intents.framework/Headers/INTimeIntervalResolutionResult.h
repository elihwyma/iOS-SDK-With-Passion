/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTimeIntervalResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTimeInterval:(double)arg1;
+ (id)confirmationRequiredWithTimeIntervalToConfirm:(double)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
