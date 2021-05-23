/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INDateComponentsResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedDateComponents:(id)arg1;
+ (id)disambiguationWithDateComponentsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithDateComponentsToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
