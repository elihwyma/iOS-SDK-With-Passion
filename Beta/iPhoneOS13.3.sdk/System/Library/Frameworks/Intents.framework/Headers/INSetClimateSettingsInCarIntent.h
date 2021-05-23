/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSMeasurement, NSNumber, NSString;

@interface INSetClimateSettingsInCarIntent : INIntent

@property (copy, nonatomic, readonly) NSNumber *enableFan;
@property (copy, nonatomic, readonly) NSNumber *enableAirConditioner;
@property (copy, nonatomic, readonly) NSNumber *enableClimateControl;
@property (copy, nonatomic, readonly) NSNumber *enableAutoMode;
@property (nonatomic, readonly) long long airCirculationMode;
@property (copy, nonatomic, readonly) NSNumber *fanSpeedIndex;
@property (copy, nonatomic, readonly) NSNumber *fanSpeedPercentage;
@property (nonatomic, readonly) long long relativeFanSpeedSetting;
@property (copy, nonatomic, readonly) NSMeasurement *temperature;
@property (nonatomic, readonly) long long relativeTemperatureSetting;
@property (nonatomic, readonly) long long climateZone;
@property (copy, nonatomic, readonly) INSpeakableString *carName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setTemperature:(id)arg1;
- (void)setCarName:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11;
- (void)setAirCirculationMode:(long long)arg1;
- (void)setClimateZone:(long long)arg1;
- (void)setEnableAirConditioner:(id)arg1;
- (void)setEnableAutoMode:(id)arg1;
- (void)setEnableClimateControl:(id)arg1;
- (void)setEnableFan:(id)arg1;
- (void)setFanSpeedIndex:(id)arg1;
- (void)setFanSpeedPercentage:(id)arg1;
- (void)setRelativeFanSpeedSetting:(long long)arg1;
- (void)setRelativeTemperatureSetting:(long long)arg1;
- (id)initWithEnableFan:(id)arg1 enableAirConditioner:(id)arg2 enableClimateControl:(id)arg3 enableAutoMode:(id)arg4 airCirculationMode:(long long)arg5 fanSpeedIndex:(id)arg6 fanSpeedPercentage:(id)arg7 relativeFanSpeedSetting:(long long)arg8 temperature:(id)arg9 relativeTemperatureSetting:(long long)arg10 climateZone:(long long)arg11 carName:(id)arg12;

@end
