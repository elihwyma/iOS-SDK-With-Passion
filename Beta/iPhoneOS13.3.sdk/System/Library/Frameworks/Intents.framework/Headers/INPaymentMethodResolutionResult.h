/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INPaymentMethodResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedPaymentMethod:(id)arg1;
+ (id)disambiguationWithPaymentMethodsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithPaymentMethodToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
