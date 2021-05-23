/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTaskResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTask:(id)arg1;
+ (id)disambiguationWithTasksToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithTaskToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
