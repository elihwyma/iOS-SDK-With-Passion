/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INIntent.h>

@class INSpeakableString, NSString;

@interface INSearchForAccountsIntent : INIntent

@property (copy, nonatomic, readonly) INSpeakableString *accountNickname;
@property (nonatomic, readonly) long long accountType;
@property (copy, nonatomic, readonly) INSpeakableString *organizationName;
@property (nonatomic, readonly) long long requestedBalanceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)domain;
- (id)_metadata;
- (id)verb;
- (void)setDomain:(id)arg1;
- (id)_dictionaryRepresentation;
- (void)setAccountType:(long long)arg1;
- (void)_setMetadata:(id)arg1;
- (void)setOrganizationName:(id)arg1;
- (id)_typedBackingStore;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
- (void)setVerb:(id)arg1;
- (id)parametersByName;
- (void)setParametersByName:(id)arg1;
- (void)setAccountNickname:(id)arg1;
- (void)setRequestedBalanceType:(long long)arg1;
- (id)initWithAccountNickname:(id)arg1 accountType:(long long)arg2 organizationName:(id)arg3 requestedBalanceType:(long long)arg4;

@end
