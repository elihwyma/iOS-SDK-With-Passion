/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INMediaItemResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedMediaItem:(id)arg1;
+ (id)successesWithResolvedMediaItems:(id)arg1;
+ (id)disambiguationWithMediaItemsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithMediaItemToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
