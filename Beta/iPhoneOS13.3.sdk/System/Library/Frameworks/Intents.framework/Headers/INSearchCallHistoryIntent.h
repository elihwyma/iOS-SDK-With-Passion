/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INSearchCallHistoryIntent : INIntent

@property (nonatomic, readonly) long long callType;
@property (copy, nonatomic, readonly) INDateComponentsRange *dateCreated;
@property (copy, nonatomic, readonly) INPerson *recipient;
@property (nonatomic, readonly) unsigned long long callCapabilities;
@property (nonatomic, readonly) unsigned long long callTypes;
@property (copy, nonatomic, readonly) NSNumber *unseen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) long long preferredCallProvider;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setRecipient:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)setDateCreated:(id)arg1;
- (id)_typedBackingStore;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4;
- (void)setUnseen:(id)arg1;
- (void)setCallCapabilities:(unsigned long long)arg1;
- (void)setCallTypes:(unsigned long long)arg1;
- (id)initWithDateCreated:(id)arg1 recipient:(id)arg2 callCapabilities:(unsigned long long)arg3 callTypes:(unsigned long long)arg4 unseen:(id)arg5;

@end
