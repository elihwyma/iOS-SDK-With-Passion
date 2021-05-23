/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INCurrencyAmountResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedCurrencyAmount:(id)arg1;
+ (id)disambiguationWithCurrencyAmountsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithCurrencyAmountToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
