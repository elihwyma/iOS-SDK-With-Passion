/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@class NSString;

@interface INPlacemarkResolutionResult : INIntentResolutionResult

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)unsupportedWithReason:(unsigned long long)arg1 alternativePlacemarks:(id)arg2;
+ (id)successWithResolvedPlacemark:(id)arg1;
+ (id)disambiguationWithPlacemarksToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithPlacemarkToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
