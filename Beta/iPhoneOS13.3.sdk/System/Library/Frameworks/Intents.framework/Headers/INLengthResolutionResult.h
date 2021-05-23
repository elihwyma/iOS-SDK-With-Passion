/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INLengthResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedLength:(id)arg1;
+ (id)disambiguationWithLengthsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithLengthToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
