/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentAmountResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedPaymentAmount:(id)arg1;
+ (id)disambiguationWithPaymentAmountsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithPaymentAmountToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
