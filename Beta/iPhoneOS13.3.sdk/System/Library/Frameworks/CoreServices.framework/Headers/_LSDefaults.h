/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSArray, NSData, NSMutableDictionary, NSURL;

@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject

{
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSURL *_userContainerURL;
    NSData *_hmacSecret;
    NSMutableDictionary *_darwinNotificationNames;
    unsigned int _darwinNotificationNamesUID;
    struct os_unfair_lock_s _darwinNotificationNamesLock;
    _Bool _inSyncBubble;
    _Bool _inXCTestRigInsecure;
    _Bool _appleInternal;
    _Bool _isServer;
    _Bool _hasServer;
    _Bool _inEducationMode;
    _Bool _hasPersistentPreferences;
    long long _currentDisplayGamut;
}

@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *userContainerURL;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePeferencesFileURL;
@property (readonly) NSURL *dbSentinelFileURL;
@property (readonly) NSURL *installJournalDirectoryURL;
@property (readonly) NSURL *dbRecoveryFileURL;
@property (getter=isServer) _Bool server;
@property _Bool hasServer;
@property (readonly, getter=isInEducationMode) _Bool inEducationMode;
@property (readonly) _Bool hasPersistentPreferences;
@property (readonly, getter=isInSyncBubble) _Bool inSyncBubble;
@property (nonatomic, readonly, getter=isInXCTestRigInsecure) _Bool inXCTestRigInsecure;
@property (nonatomic, readonly, getter=isAppleInternal) _Bool appleInternal;
@property (nonatomic, readonly) _Bool allowsAlternateIcons;
@property (nonatomic, readonly) _Bool abortIfMayNotMapDatabase;
@property (nonatomic, readonly) _Bool issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) _Bool markLocalizationsStoredInDatabase;
@property (readonly) _Bool alwaysUseDebugOpenWithMenus;
@property (readonly, getter=isRegionChina) _Bool regionChina;
@property (readonly) NSData *HMACSecret;

+ (id)sharedInstance;
+ (_Bool)appleInternal;
+ (_Bool)inSyncBubble;
+ (_Bool)inXCTestRigInsecure;
+ (_Bool)hasServer;
+ (_Bool)hasPersistentPreferences;
+ (id)systemContainerURL;
+ (id)userContainerURL;
+ (id)systemGroupContainerURL;

- (id)init;
- (id)debugDescription;
- (id)serviceNameForConnectionType:(unsigned short)arg1;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (id)databaseStoreFileURLWithUID:(unsigned int)arg1;
- (unsigned int)proxyUIDForUID:(unsigned int)arg1;
- (id)darwinNotificationNameForCurrentUser:(id)arg1;
- (id)userPreferencesURL;
- (id)simulatorRootURL;
- (id)simulatorRuntimeVersion;
- (id)simulatorRuntimeBuildVersion;
- (id)classesWithNameForXCTests:(const char *)arg1;
- (id)preferencesUpdateNotificationName;
- (id)preferencesFileChangeNotificationName;
- (id)databaseUpdateNotificationName;

@end
