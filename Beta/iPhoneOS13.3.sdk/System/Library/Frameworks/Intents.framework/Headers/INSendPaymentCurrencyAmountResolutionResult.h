/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCurrencyAmountResolutionResult.h>

@interface INSendPaymentCurrencyAmountResolutionResult : INCurrencyAmountResolutionResult

+ (id)unsupportedForReason:(long long)arg1;

- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)initWithCurrencyAmountResolutionResult:(id)arg1;

@end
