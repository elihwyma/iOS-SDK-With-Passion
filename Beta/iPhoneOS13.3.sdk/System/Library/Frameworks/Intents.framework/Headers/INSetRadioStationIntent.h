/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent

@property (nonatomic, readonly) long long radioType;
@property (copy, nonatomic, readonly) NSNumber *frequency;
@property (copy, nonatomic, readonly) NSString *stationName;
@property (copy, nonatomic, readonly) NSString *channel;
@property (copy, nonatomic, readonly) NSNumber *presetNumber;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setFrequency:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)setChannel:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setRadioType:(long long)arg1;
- (void)setStationName:(id)arg1;
- (void)setPresetNumber:(id)arg1;
- (id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5;

@end
