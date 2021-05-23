/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@class NSString;

@interface INSpeakableStringResolutionResult : INIntentResolutionResult

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)successWithResolvedString:(id)arg1;
+ (id)disambiguationWithStringsToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithStringToConfirm:(id)arg1;
+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
