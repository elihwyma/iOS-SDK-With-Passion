/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INNumberResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedNumber:(id)arg1;
+ (id)disambiguationWithNumbersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithNumberToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
