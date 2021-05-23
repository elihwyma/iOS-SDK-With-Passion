/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INURLResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedURL:(id)arg1;
+ (id)disambiguationWithURLsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithURLToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
