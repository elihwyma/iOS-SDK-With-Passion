/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INContactEventTriggerResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedContactEventTrigger:(id)arg1;
+ (id)disambiguationWithContactEventTriggersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithContactEventTriggerToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
