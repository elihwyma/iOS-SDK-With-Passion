/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@class NSString, STCoreUser;

@interface STCoreOrganizationSettings

@property (retain, nonatomic) STCoreUser *user;
@property (copy, nonatomic) NSString *passcode;
@property (nonatomic) _Bool allLimitsEnabled;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) _Bool needsToSetPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id *)arg3;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1;

- (id)redactedDescription;
- (id)dictionaryRepresentation;
- (_Bool)updateWithDictionaryRepresentation:(id)arg1;
- (void)_changeAppLimitsFromAskToWarn:(id)arg1;

@end
