/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class NSArray, NSString;

@interface INStartCallIntent : INIntent

@property (nonatomic, readonly) long long audioRoute;
@property (nonatomic, readonly) long long destinationType;
@property (copy, nonatomic, readonly) NSArray *contacts;
@property (nonatomic, readonly) long long recordTypeForRedialing;
@property (nonatomic, readonly) long long callCapability;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long preferredCallProvider;
@property (nonatomic, setter=setTTYType:) long long ttyType;

+ (id)_ignoredParameters;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)_setMetadata:(id)arg1;
- (void)setDestinationType:(long long)arg1;
- (void)setContacts:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setAudioRoute:(long long)arg1;
- (id)_spotlightContentType;
- (id)_titleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)_subtitleForLanguage:(id)arg1 fromBundleURL:(id)arg2;
- (id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 callCapability:(long long)arg3;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 callCapability:(long long)arg4;
- (void)setRecordTypeForRedialing:(long long)arg1;
- (id)_validParameterCombinationsWithSchema:(id)arg1;
- (_Bool)_supportsBackgroundExecution;
- (id)_emptyCopy;
- (void)setCallCapability:(long long)arg1;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 contacts:(id)arg3 recordTypeForRedialing:(long long)arg4 callCapability:(long long)arg5;
- (id)initWithAudioRoute:(long long)arg1 destinationType:(long long)arg2 preferredCallProvider:(long long)arg3 contacts:(id)arg4 recordTypeForRedialing:(long long)arg5 ttyType:(long long)arg6 callCapability:(long long)arg7;

@end
