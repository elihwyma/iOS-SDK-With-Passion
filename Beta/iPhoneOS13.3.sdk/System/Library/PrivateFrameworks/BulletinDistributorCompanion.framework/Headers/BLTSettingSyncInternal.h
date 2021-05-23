/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBObserver, BBSettingsGateway, BLTMuteSync, BLTSectionConfiguration, BLTSettingSyncServer, BLTSpokenSettingSync, BLTWristStateObserver, NSString;

@interface BLTSettingSyncInternal : NSObject

{
    BLTWristStateObserver *_wristStateObserver;
    BBSettingsGateway *_settingsGateway;
    BLTMuteSync *_muteSync;
    BLTSettingSyncServer *_connection;
    BLTSectionConfiguration *_sectionConfiguration;
    BLTSpokenSettingSync *_spokenSettingSync;
    BBObserver *_observer;
}

@property (retain, nonatomic) BBSettingsGateway *settingsGateway;
@property (retain, nonatomic) BLTMuteSync *muteSync;
@property (retain, nonatomic) BLTSettingSyncServer *connection;
@property (nonatomic, readonly) _Bool isWristDetectDisabled;
@property (nonatomic, readonly) BLTSectionConfiguration *sectionConfiguration;
@property (retain, nonatomic) BLTSpokenSettingSync *spokenSettingSync;
@property (retain, nonatomic) BBObserver *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)connect;
- (void)observer:(id)arg1 updateGlobalSettings:(id)arg2;
- (void)disableStandaloneTestMode;
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;
- (void)removeSectionWithSectionID:(id)arg1;
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(_Bool)arg1 date:(id)arg2;
- (id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3 fromRemote:(_Bool)arg4;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4;
- (id)_overriddenSectionInfoForSectionID:(id)arg1;
- (void)setSectionInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3;
- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3;
- (void)setNotificationsGrouping:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsSoundEnabled:(int)arg1 sectionID:(id)arg2;
- (void)setNotificationsCriticalAlertEnabled:(int)arg1 sectionID:(id)arg2;
- (void)enableNotifications:(_Bool)arg1 sectionID:(id)arg2 mirror:(_Bool)arg3;
- (unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3;

@end
