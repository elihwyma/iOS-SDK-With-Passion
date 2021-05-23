/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INTaskListResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedTaskList:(id)arg1;
+ (id)disambiguationWithTaskListsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithTaskListToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
