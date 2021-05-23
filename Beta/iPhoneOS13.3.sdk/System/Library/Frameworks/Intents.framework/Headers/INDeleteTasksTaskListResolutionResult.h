/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INTaskListResolutionResult.h>

@interface INDeleteTasksTaskListResolutionResult : INTaskListResolutionResult

+ (id)unsupportedForReason:(long long)arg1;

- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)initWithTaskListResolutionResult:(id)arg1;

@end
