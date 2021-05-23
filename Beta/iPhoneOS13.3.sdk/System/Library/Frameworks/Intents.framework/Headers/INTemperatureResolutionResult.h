/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntentResolutionResult.h>

@class NSString;

@interface INTemperatureResolutionResult : INIntentResolutionResult

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)successWithResolvedTemperature:(id)arg1;
+ (id)disambiguationWithTemperaturesToDisambiguate:(id)arg1;
+ (id)confirmationRequiredWithTemperatureToConfirm:(id)arg1;

- (id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2;
- (id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2;

@end
