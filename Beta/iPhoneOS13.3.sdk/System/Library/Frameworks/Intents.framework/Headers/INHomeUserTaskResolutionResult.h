/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INHomeUserTaskResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedHomeUserTask:(id)arg1;
+ (id)disambiguationWithHomeUserTasksToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithHomeUserTaskToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
