/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSNumber, NSString;

@interface INSetProfileInCarIntent : INIntent

@property (copy, nonatomic, readonly) NSString *profileLabel;
@property (copy, nonatomic, readonly) NSNumber *profileNumber;
@property (copy, nonatomic, readonly) NSString *profileName;
@property (copy, nonatomic, readonly) NSNumber *defaultProfile;
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
- (void)setProfileNumber:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setDefaultProfile:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3 carName:(id)arg4;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithProfileNumber:(id)arg1 profileName:(id)arg2 defaultProfile:(id)arg3;
- (id)initWithProfileNumber:(id)arg1 profileLabel:(id)arg2 defaultProfile:(id)arg3;

@end
