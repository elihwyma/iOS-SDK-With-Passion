/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INNoteResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedNote:(id)arg1;
+ (id)disambiguationWithNotesToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithNoteToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
