/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INHomeFilterResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedHomeFilter:(id)arg1;
+ (id)disambiguationWithHomeFiltersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithHomeFilterToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
