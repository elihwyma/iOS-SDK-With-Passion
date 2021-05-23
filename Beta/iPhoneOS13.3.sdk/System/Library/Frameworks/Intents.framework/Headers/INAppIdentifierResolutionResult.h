/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@interface INAppIdentifierResolutionResult : INIntentResolutionResult

+ (id)successWithResolvedAppIdentifier:(id)arg1;
+ (id)disambiguationWithAppIdentifiersToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithAppIdentifierToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
