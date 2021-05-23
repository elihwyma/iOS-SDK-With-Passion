/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSNumber, NSString;

@interface INSetDefrosterSettingsInCarIntent : INIntent

@property (copy, nonatomic, readonly) NSNumber *enable;
@property (nonatomic, readonly) long long defroster;
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
- (void)setCarName:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2;
- (void)setDefroster:(long long)arg1;
- (void)setEnable:(id)arg1;
- (id)initWithEnable:(id)arg1 defroster:(long long)arg2 carName:(id)arg3;

@end
