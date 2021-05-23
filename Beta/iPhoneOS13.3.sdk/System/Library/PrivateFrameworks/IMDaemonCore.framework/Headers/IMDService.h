/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSDictionary, NSString;

@interface IMDService : NSObject

{
    NSBundle *_bundle;
    Class _sessionClass;
    NSString *_internalName;
    NSDictionary *_accountDefaults;
    NSDictionary *_serviceDefaults;
    NSDictionary *_serviceProperties;
    NSDictionary *_cachedServiceDefaults;
    NSDictionary *_cachedSetupServiceDefaults;
    _Bool _blockPrefWriting;
}

@property (retain, nonatomic) NSDictionary *serviceProperties;
@property (nonatomic, readonly) Class sessionClass;
@property (nonatomic, readonly) Class accountClass;
@property (retain, nonatomic, readonly) NSBundle *bundle;
@property (retain, nonatomic, readonly) NSString *internalName;
@property (retain, nonatomic, readonly) NSString *serviceDomain;
@property (nonatomic, readonly) _Bool isIDSBased;
@property (nonatomic, readonly) _Bool isLegacy;
@property (nonatomic, readonly, getter=isDiscontinued) _Bool discontinued;
@property (retain, nonatomic, readonly) NSDictionary *serviceDefaults;
@property (retain, nonatomic, readonly) NSDictionary *serviceDefaultsForSetup;
@property (retain, nonatomic, readonly) NSDictionary *defaultAccountSettings;
@property (nonatomic, readonly) _Bool serviceRequiresSingleAccount;
@property (nonatomic, readonly) _Bool shouldCreateActiveAccounts;
@property (nonatomic, readonly) _Bool serviceWantsNullHostReachability;
@property (nonatomic, readonly) _Bool serviceIgnoresNetworkConnectivity;
@property (nonatomic, readonly) _Bool shouldForceAccountsActive;
@property (nonatomic, readonly) _Bool shouldForceAccountsConnected;
@property (nonatomic, readonly) _Bool serviceNeedsLogin;
@property (nonatomic, readonly) _Bool serviceNeedsPassword;
@property (nonatomic, readonly) _Bool serviceShouldBeAlwaysLoggedIn;
@property (nonatomic, readonly) _Bool serviceRequiresHost;
@property (nonatomic, readonly) _Bool serviceSupportsRegistration;
@property (nonatomic, readonly) _Bool serviceSupportsAuthorization;
@property (nonatomic, readonly) _Bool serviceChatsIgnoreLoginStatus;
@property (nonatomic, readonly) _Bool serviceSupportsPresence;
@property (nonatomic, readonly) _Bool serviceSupportsOneSessionForAllAccounts;
@property (nonatomic, readonly) _Bool supportsDatabase;
@property (nonatomic, readonly) _Bool disallowDeactivation;
@property (nonatomic, readonly) long long serviceProtocolVersion;

- (void)dealloc;
- (id)description;
- (id)initWithBundle:(id)arg1;
- (void)systemDidEnterMemoryPressure;
- (void)systemDidStartBackup;
- (void)enableAccount:(id)arg1;
- (void)disableAccount:(id)arg1;
- (void)accountAdded:(id)arg1;
- (void)accountRemoved:(id)arg1;
- (void)delayedSaveSettings;
- (id)mainService;
- (id)createDiscontinuedAccount;
- (void)saveSettings;
- (id)_copyServicePropertiesFromIMServiceBundle:(id)arg1;
- (void)synchronizeServiceDefaults;
- (void)unloadServiceBundle;
- (void)_reallyUnloadServiceBundle;
- (id)_serviceDomain;
- (id)oldInternalName;
- (void)loadServiceBundle;
- (id)_defaultDefaults;
- (id)_serviceDefaultsForDomain:(id)arg1;
- (id)_oldServiceDomain;
- (void)purgeMemoryCaches;
- (_Bool)clearOneTimeImportAccounts;
- (id)newAccountWithAccountDefaults:(id)arg1 accountID:(id)arg2;

@end
