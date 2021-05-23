/*
 Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

#import <Accounts/ACAccount.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSURL;

@interface ACAccount (CalUserManagement)

@property (nonatomic, readonly) NSString *cal_personaIdentifier;
@property (readonly) NSArray *calCalDAVChildAccounts;
@property (retain) NSString *calHostname;
@property (readonly) _Bool calIsAutoRefreshed;
@property (readonly) _Bool calIsCalDAVAccount;
@property (readonly) _Bool calIsGenericCalDAVAccount;
@property (readonly) _Bool calIsEnabled;
@property _Bool calIsEnabledForCalendar;
@property _Bool calIsEnabledForReminders;
@property (readonly) _Bool calIsExchangeAccount;
@property (readonly) _Bool calIsMissingParentAccount;
@property (readonly) _Bool calIsRestrictedForCalendar;
@property (copy) NSString *calMainPrincipalUID;
@property (readonly) NSString *calAccountFullName;
@property (copy) NSNumber *calPort;
@property (copy, readonly) NSDictionary *calPrincipals;
@property _Bool calPushDisabled;
@property long long calRefreshInterval;
@property (copy) NSURL *calServerURL;
@property _Bool calUseSSL;
@property (readonly) _Bool calSupportsPush;
@property (retain) NSString *calCollectionSetName;
@property _Bool calLocalDataMigrationHasTakenPlace;
@property _Bool calServerSyncHasTakenPlace;
@property _Bool calAttachmentDownloadHasTakenPlace;
@property _Bool calSkipCredentialVerification;
@property _Bool calUseKerberos;
@property (copy) NSString *calWebServicesRecordGUID;
@property (readonly) NSURL *calExchangeWebServicesURL;
@property (readonly) NSURL *calExternalExchangeWebServicesURL;
@property (copy) NSURL *calExternalURL;
@property (copy) NSString *calIdentityEmailAddress;
@property (readonly) _Bool calIsDirty;
@property (copy) NSString *calRootFolderID;
@property _Bool calUseExternalURL;

- (void)removeAccountPropertyForKey:(id)arg1;
- (id)valueForAccountPropertyKey:(id)arg1;
- (_Bool)_dataclassIsEnabled:(id)arg1;
- (id)valueForKey:(id)arg1 forPrincipalWithUID:(id)arg2;
- (id)_schemeStringForUseSSL:(_Bool)arg1;
- (_Bool)_useSSLForSchemeString:(id)arg1;
- (void)_setCalInternalValue:(id)arg1 forAccountPropertyKey:(id)arg2;
- (id)_updateURL:(id)arg1 withHost:(id)arg2 port:(id)arg3 useSSL:(id)arg4;
- (void)_setIsEnabled:(_Bool)arg1 forDataclass:(id)arg2;
- (void)createDictionaryForPrincipalWithUID:(id)arg1;
- (id)_createExchangeWebServicesURLFromURL:(id)arg1;
- (void)setCalPrincipals:(id)arg1;
- (id)calPrincipalURLForPrincipalWithUID:(id)arg1;
- (void)addPrincipal:(id)arg1 withUID:(id)arg2;
- (id)_diffWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (id)_calDAVDataclassProperties;
- (id)_diffAccountPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (id)_diffPropertiesWithAccount:(id)arg1 firstPropertyOnly:(_Bool)arg2;
- (id)_accountPropertiesKeys;
- (id)calPrincipalURLForMainPrincipal;
- (id)diffWithAccount:(id)arg1;
- (id)firstDifferentPropertyWithAccount:(id)arg1;
- (_Bool)removePrincipalWithUID:(id)arg1;
- (_Bool)setValue:(id)arg1 forKey:(id)arg2 forPrincipalWithUID:(id)arg3;

@end
