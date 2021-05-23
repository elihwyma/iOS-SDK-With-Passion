/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentAccountResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedPaymentAccount:(id)arg1;
+ (id)disambiguationWithPaymentAccountsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithPaymentAccountToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
