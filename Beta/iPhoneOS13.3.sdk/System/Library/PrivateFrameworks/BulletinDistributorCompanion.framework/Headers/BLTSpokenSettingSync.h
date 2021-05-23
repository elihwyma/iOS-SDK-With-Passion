/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBSettingsGateway, BLTSettingSyncServer, NSDate, NSURL;

@protocol OS_dispatch_queue;

@interface BLTSpokenSettingSync : NSObject

{
    _Bool _localGlobalSpokenSettingEnabled;
    _Bool _remoteGlobalSpokenSettingEnabled;
    NSDate *_localGlobalSpokenSettingDate;
    NSDate *_remoteGlobalSpokenSettingDate;
    unsigned long long _updatingLocalStateFromRemoteCount;
    NSObject<OS_dispatch_queue> *_queue;
    BBSettingsGateway *_settingsGateway;
    BLTSettingSyncServer *_syncServer;
    NSURL *_remoteSettingStoreURL;
}

@property (nonatomic) _Bool localGlobalSpokenSettingEnabled;
@property (nonatomic) _Bool remoteGlobalSpokenSettingEnabled;
@property (retain, nonatomic) NSDate *localGlobalSpokenSettingDate;
@property (retain, nonatomic) NSDate *remoteGlobalSpokenSettingDate;
@property (nonatomic) unsigned long long updatingLocalStateFromRemoteCount;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (retain, nonatomic) BLTSettingSyncServer *syncServer;
@property (retain, nonatomic) NSURL *remoteSettingStoreURL;

- (void)_queue_readSettings;
- (_Bool)_queue_updateLocalSetting;
- (void)_queue_resolveState;
- (id)_remoteSettingStoreURL;
- (_Bool)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(_Bool)arg1;
- (_Bool)_queue_isUpdatingLocalStateFromRemote;
- (void)_queue_synchronizeSettingsWithLocalEnabled:(_Bool)arg1;
- (void)_queue_writeLocalSetting;
- (void)_queue_writeRemoteSetting;
- (void)_queue_setNewLocalStateFromRemote:(_Bool)arg1;
- (void)_queue_setUpdatingLocalStateFromRemote;
- (id)initWithSettingsGateway:(id)arg1 syncServer:(id)arg2;
- (void)bbUpdateLocalGlobalSpokenSettingEnabled:(long long)arg1;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(id)arg2;

@end
