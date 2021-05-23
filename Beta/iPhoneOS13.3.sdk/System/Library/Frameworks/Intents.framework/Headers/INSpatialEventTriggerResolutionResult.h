/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INSpatialEventTriggerResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedSpatialEventTrigger:(id)arg1;
+ (id)disambiguationWithSpatialEventTriggersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithSpatialEventTriggerToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
