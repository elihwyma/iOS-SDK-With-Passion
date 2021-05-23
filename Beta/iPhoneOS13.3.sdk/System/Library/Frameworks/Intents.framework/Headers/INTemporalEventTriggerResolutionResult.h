/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTemporalEventTriggerResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTemporalEventTrigger:(id)arg1;
+ (id)disambiguationWithTemporalEventTriggersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithTemporalEventTriggerToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
