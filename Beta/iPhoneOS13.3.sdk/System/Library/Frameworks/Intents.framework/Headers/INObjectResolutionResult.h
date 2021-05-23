/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INObjectResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedObject:(id)arg1;
+ (id)disambiguationWithObjectsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithObjectToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
