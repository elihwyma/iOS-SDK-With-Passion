/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INHealthUnitResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedHealthUnit:(id)arg1;
+ (id)disambiguationWithHealthUnitsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithHealthUnitToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
