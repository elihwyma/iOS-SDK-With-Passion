/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarRecordImageGenerator, AVTCoreEnvironment, AVTStickerChangeObserver, NSXPCStoreServer;

@protocol AVTAvatarRecordChangeTracker, AVTAvatarsDaemonServer, AVTBlockScheduler, AVTCoreDataCloudKitMirroringHandler, AVTCoreDataPersistentStoreLocalConfiguration, AVTCoreDataRemoteChangesObserver, AVTCoreDataStoreMaintenance, AVTPushNotificationsSupport, AVTStoreBackend, AVTSyncSchedulingAuthority, AVTUILogger, OS_dispatch_queue;

@interface AVTCoreDataStoreServer : NSObject

{
    _Bool _setupCompleted;
    id <AVTStoreBackend> _backend;
    AVTCoreEnvironment *_environment;
    id <AVTUILogger> _logger;
    id <AVTBlockScheduler> _blockScheduler;
    id <AVTCoreDataPersistentStoreLocalConfiguration> _configuration;
    CDUnknownBlockType _migratorProvider;
    NSXPCStoreServer *_server;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    id <AVTPushNotificationsSupport> _pushNotificationsSupport;
    id <AVTCoreDataCloudKitMirroringHandler> _mirroringHandler;
    id <AVTSyncSchedulingAuthority> _schedulingAuthority;
    id <AVTCoreDataRemoteChangesObserver> _remoteChangesObserver;
    AVTAvatarRecordImageGenerator *_imageGenerator;
    AVTStickerChangeObserver *_stickerChangeObserver;
    id <AVTAvatarRecordChangeTracker> _changeTracker;
    id <AVTAvatarsDaemonServer> _daemonServer;
    id <AVTCoreDataStoreMaintenance> _storeMaintenance;
    CDUnknownBlockType _migrationActivityCompletion;
    CDUnknownBlockType _userRequestedBackupActivityCompletion;
}

@property (nonatomic, readonly) id <AVTStoreBackend> backend;
@property (nonatomic, readonly) AVTCoreEnvironment *environment;
@property (nonatomic, readonly) id <AVTUILogger> logger;
@property (nonatomic, readonly) id <AVTBlockScheduler> blockScheduler;
@property (nonatomic, readonly) id <AVTCoreDataPersistentStoreLocalConfiguration> configuration;
@property (copy, nonatomic, readonly) CDUnknownBlockType migratorProvider;
@property (retain, nonatomic) NSXPCStoreServer *server;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (nonatomic, readonly) id <AVTPushNotificationsSupport> pushNotificationsSupport;
@property (nonatomic, readonly) id <AVTCoreDataCloudKitMirroringHandler> mirroringHandler;
@property (nonatomic, readonly) id <AVTSyncSchedulingAuthority> schedulingAuthority;
@property (nonatomic, readonly) id <AVTCoreDataRemoteChangesObserver> remoteChangesObserver;
@property (nonatomic, readonly) AVTAvatarRecordImageGenerator *imageGenerator;
@property (nonatomic, readonly) AVTStickerChangeObserver *stickerChangeObserver;
@property (nonatomic, readonly) id <AVTAvatarRecordChangeTracker> changeTracker;
@property (nonatomic, readonly) id <AVTAvatarsDaemonServer> daemonServer;
@property (nonatomic, readonly) id <AVTCoreDataStoreMaintenance> storeMaintenance;
@property (nonatomic) _Bool setupCompleted;
@property (copy, nonatomic) CDUnknownBlockType migrationActivityCompletion;
@property (copy, nonatomic) CDUnknownBlockType userRequestedBackupActivityCompletion;

+ (id)imageGeneratorForEnvironment:(id)arg1;
+ (_Bool)resetSyncShouldPreserveContentForReason:(unsigned long long)arg1;

- (id)initWithEnvironment:(id)arg1;
- (void)startListening;
- (void)migrate;
- (void)clientDidCheckInForServer:(id)arg1;
- (void)mirroringHandler:(id)arg1 willResetSyncWithReason:(unsigned long long)arg2;
- (void)mirroringHandler:(id)arg1 didResetSyncWithReason:(unsigned long long)arg2;
- (void)didReceivePushNotification:(id)arg1;
- (id)initWithLocalBackend:(id)arg1 configuration:(id)arg2 migratorProvider:(CDUnknownBlockType)arg3 pushSupport:(id)arg4 mirroringHandler:(id)arg5 schedulingAuthority:(id)arg6 remoteChangesObserver:(id)arg7 imageGenerator:(id)arg8 stickerChangeObserver:(id)arg9 changeTracker:(id)arg10 daemonServer:(id)arg11 storeMaintenance:(id)arg12 backgroundQueue:(id)arg13 environment:(id)arg14;
- (_Bool)processInternalSettingsChanges:(CDUnknownBlockType)arg1;
- (void)scheduleExportWithManagedObjectContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleUpdateThumbnails;
- (void)deleteStickerRecents;
- (void)completeMigrationActivityIfNeeded;
- (void)completeUserRequestedBackupActivityIfNeeded;
- (void)scheduleImportExportIfRequiredWithPostImportHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scheduleSetupThen:(CDUnknownBlockType)arg1;
- (void)setupThen:(CDUnknownBlockType)arg1;
- (void)updateThumbnails;
- (void)scheduleMigrationThen:(CDUnknownBlockType)arg1;
- (void)scheduleImportThen:(CDUnknownBlockType)arg1;

@end
