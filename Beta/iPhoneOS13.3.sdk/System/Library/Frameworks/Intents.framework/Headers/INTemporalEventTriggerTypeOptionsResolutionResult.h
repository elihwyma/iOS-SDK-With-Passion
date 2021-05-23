/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTemporalEventTriggerTypeOptionsResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTemporalEventTriggerTypeOptions:(unsigned long long)arg1;
+ (id)confirmationRequiredWithTemporalEventTriggerTypeOptionsToConfirm:(unsigned long long)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
