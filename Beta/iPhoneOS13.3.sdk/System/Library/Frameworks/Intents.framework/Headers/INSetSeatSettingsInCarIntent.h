/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSNumber, NSString;

@interface INSetSeatSettingsInCarIntent : INIntent

@property (copy, nonatomic, readonly) NSNumber *enableHeating;
@property (copy, nonatomic, readonly) NSNumber *enableCooling;
@property (copy, nonatomic, readonly) NSNumber *enableMassage;
@property (nonatomic, readonly) long long seat;
@property (copy, nonatomic, readonly) NSNumber *level;
@property (nonatomic, readonly) long long relativeLevelSetting;
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
- (void)setLevel:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)setCarName:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6;
- (void)setEnableHeating:(id)arg1;
- (void)setEnableCooling:(id)arg1;
- (void)setEnableMassage:(id)arg1;
- (void)setSeat:(long long)arg1;
- (void)setRelativeLevelSetting:(long long)arg1;
- (id)initWithEnableHeating:(id)arg1 enableCooling:(id)arg2 enableMassage:(id)arg3 seat:(long long)arg4 level:(id)arg5 relativeLevelSetting:(long long)arg6 carName:(id)arg7;

@end
