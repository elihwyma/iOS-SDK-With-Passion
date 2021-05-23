/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INIntentExecutionResultResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedIntentExecutionResult:(id)arg1;
+ (id)disambiguationWithIntentExecutionResultsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithIntentExecutionResultToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
