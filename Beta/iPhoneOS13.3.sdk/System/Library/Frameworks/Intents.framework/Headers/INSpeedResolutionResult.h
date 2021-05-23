/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INSpeedResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedSpeed:(id)arg1;
+ (id)disambiguationWithSpeedToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithSpeedToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
