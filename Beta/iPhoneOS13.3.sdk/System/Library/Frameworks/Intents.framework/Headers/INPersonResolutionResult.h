/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@class NSString;

@interface INPersonResolutionResult : INIntentResolutionResult

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2;
+ (id)successWithResolvedPerson:(id)arg1;
+ (id)disambiguationWithPeopleToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithPersonToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
