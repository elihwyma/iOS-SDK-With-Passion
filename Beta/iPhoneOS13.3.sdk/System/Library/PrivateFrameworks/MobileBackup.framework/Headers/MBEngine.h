/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class MBAppManager, MBDebugContext, MBDomainManager, MBProperties, MBSettingsContext, MBWatchdog, NSMutableDictionary, NSString;

@interface MBEngine : NSObject

{
    MBSettingsContext *_settingsContext;
    MBDebugContext *_debugContext;
    MBProperties *_properties;
    MBProperties *_preflightProperties;
    MBDomainManager *_domainManager;
    MBAppManager *_appManager;
    _Bool _deviceTransferEngine;
    _Bool _encrypted;
    MBWatchdog *_watchdog;
    NSMutableDictionary *_domainRestoreBehaviors;
}

@property (retain, nonatomic) NSMutableDictionary *domainRestoreBehaviors;
@property (nonatomic, readonly) int engineType;
@property (nonatomic, readonly) NSString *engineTypeString;
@property (nonatomic, readonly, getter=isDriveEngine) _Bool driveEngine;
@property (nonatomic, readonly, getter=isServiceEngine) _Bool serviceEngine;
@property (nonatomic, readonly, getter=isCloudKitEngine) _Bool cloudKitEngine;
@property (nonatomic, readonly, getter=isDeviceTransferEngine) _Bool deviceTransferEngine;
@property (nonatomic, readonly) int engineMode;
@property (nonatomic, readonly) NSString *engineModeString;
@property (nonatomic, readonly, getter=isBackupEngine) _Bool backupEngine;
@property (nonatomic, readonly, getter=isRestoreEngine) _Bool restoreEngine;
@property (nonatomic, readonly) int restoreType;
@property (nonatomic, readonly) NSString *restoreTypeString;
@property (nonatomic, readonly, getter=isForegroundRestore) _Bool foregroundRestore;
@property (nonatomic, readonly, getter=isBackgroundRestore) _Bool backgroundRestore;
@property (nonatomic, readonly) MBSettingsContext *settingsContext;
@property (nonatomic, readonly) MBDebugContext *debugContext;
@property (nonatomic, readonly) MBProperties *properties;
@property (nonatomic, readonly) MBProperties *preflightProperties;
@property (nonatomic) _Bool encrypted;
@property (nonatomic, readonly, getter=isMigrate) _Bool migrate;
@property (nonatomic, readonly) MBDomainManager *domainManager;
@property (nonatomic, readonly) MBAppManager *appManager;
@property (nonatomic, readonly, getter=shouldCommitIfPossible) _Bool commitIfPossible;
@property (nonatomic, readonly) _Bool isInternetReachableViaWiFi;
@property (retain, nonatomic) MBWatchdog *watchdog;

+ (id)stringForEngineType:(int)arg1;
+ (id)stringForEngineMode:(int)arg1;
+ (id)stringForRestoreType:(int)arg1;
+ (id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 restoreType:(int)arg3;
+ (id)aggregateDictionaryKey:(id)arg1 forEngineType:(int)arg2 engineMode:(int)arg3;
+ (id)aggregateDictionaryForFullRestoreWithKey:(id)arg1 engineType:(int)arg2;

- (void)dealloc;
- (_Bool)shouldAlwaysRestoreSystemSharedContainerDomain:(id)arg1;
- (id)localRootPathForDomain:(id)arg1;
- (long long)restoreBehaviorForFile:(id)arg1 withValidation:(_Bool)arg2 error:(id *)arg3;
- (long long)restoreBehaviorForDomain:(id)arg1 error:(id *)arg2;
- (id)aggregateDictionaryKey:(id)arg1;
- (id)initWithSettingsContext:(id)arg1 debugContext:(id)arg2 domainManager:(id)arg3;
- (id)validateFile:(id)arg1;
- (id)validateRestoreDomain:(id)arg1 relativePath:(id)arg2;
- (long long)restoreBehaviorForFile:(id)arg1 error:(id *)arg2;
- (void)pushAggregateDictionaryTotalFileCount:(long long)arg1 totalFileSize:(long long)arg2 duration:(double)arg3;
- (id)restoringBundleID;
- (_Bool)fetchHSA2Enabled:(_Bool *)arg1 error:(id *)arg2;

@end
