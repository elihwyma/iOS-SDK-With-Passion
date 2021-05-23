/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSString, _KSTextReplacementCKStore, _KSTextReplacementLegacyStore;

@protocol OS_dispatch_queue, _KSMigrationDelegate, _KSTextReplacementSyncProtocol;

@interface _KSTextReplacementManager : NSObject

{
    NSObject<OS_dispatch_queue> *_migrationQueue;
    _Bool _didMigrateForCurrentAccount;
    _Bool _pendingMigration;
    _Bool _deviceDidMigrateOnCloud;
    _Bool _didCheckMigrationOnCloud;
    _KSTextReplacementCKStore *_ckStore;
    _KSTextReplacementLegacyStore *_legacyStore;
    NSObject<_KSTextReplacementSyncProtocol> *_textReplacementStore;
    NSString *_directoryPath;
    id <_KSMigrationDelegate> _delegate;
}

@property (retain, nonatomic) _KSTextReplacementCKStore *ckStore;
@property (retain, nonatomic) _KSTextReplacementLegacyStore *legacyStore;
@property (retain, nonatomic) NSObject<_KSTextReplacementSyncProtocol> *textReplacementStore;
@property (copy, nonatomic) NSString *directoryPath;
@property (nonatomic) _Bool didMigrateForCurrentAccount;
@property (nonatomic) _Bool pendingMigration;
@property (nonatomic) _Bool deviceDidMigrateOnCloud;
@property (nonatomic) _Bool didCheckMigrationOnCloud;
@property (weak, nonatomic) id <_KSMigrationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)textReplacementStoreWithTestDirectory:(id)arg1 withDelegate:(id)arg2 forceMigration:(_Bool)arg3 forceCloudKitSync:(_Bool)arg4;

- (void)dealloc;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)accountDidChange:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1;
- (id)initWithDirectoryPath:(id)arg1 ignoreMigrationBatchCheck:(_Bool)arg2 syncMode:(int)arg3;
- (_Bool)deviceDidMigrate;
- (void)pushAllLocalRecordsOnceIfNeeded;
- (void)notifyTextReplacementDidChange;
- (void)checkForMigration;
- (void)resetMigrationState;
- (void)requestSync:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)migrateLocallyCheckCompatibility:(_Bool)arg1;
- (void)_migrateDevice;
- (void)_migrateEntriesSinceDate:(id)arg1 repeatCount:(unsigned long long)arg2;
- (void)respondToMigrationCompletion;
- (double)minimumUptimeRemaining;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)recordSyncStatus;
- (void)respondToMigrationCompatibilityChange:(id)arg1;
- (void)pullMigrationSettings;
- (void)migrateLegacyStore;

@end
