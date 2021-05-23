/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INTaskResolutionResult.h>

@interface INDeleteTasksTaskResolutionResult : INTaskResolutionResult

+ (id)unsupportedForReason:(long long)arg1;

- (id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2;
- (id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1;
- (id)initWithTaskResolutionResult:(id)arg1;

@end
