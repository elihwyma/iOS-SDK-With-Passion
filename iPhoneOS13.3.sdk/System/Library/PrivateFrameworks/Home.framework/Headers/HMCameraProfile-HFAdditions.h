//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKit/HMCameraProfile.h>

#import <Home/HFUserNotificationServiceSettingsProviding-Protocol.h>

@class HFCameraManager, HFUserNotificationServiceSettings;

@interface HMCameraProfile (HFAdditions) <HFUserNotificationServiceSettingsProviding>
+ (NSUInteger)notificationEventTriggersForPredicate:(id)arg1;
+ (NSUInteger)hf_cameraNotificationMotionDetectionSettingsForCameraProfiles:(id)arg1;
+ (NSUInteger)hf_cameraMotionDetectionSettingsForCameraProfiles:(id)arg1;
+ (NSUInteger)hf_cameraAccessModeSelectedOptionForCameraProfiles:(id)arg1 presenceType:(NSUInteger)arg2;
@property(readonly, nonatomic) BOOL hf_cameraIsNotSetToRecord;
@property(readonly, nonatomic) BOOL hf_shouldDisableLiveStream;
@property(readonly, nonatomic) BOOL hf_cameraSupportsRecording;
@property(readonly, nonatomic) BOOL hf_cameraSupportsBidirectionalAudio;
@property(readonly, nonatomic) HFCameraManager *hf_cameraManager;
- (id)hf_updateUserNotificationSettings:(id)arg1;
@property(readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
- (id)hf_bulletinNotifications;
- (id)_hf_smartDetectionBulletinNotification;
- (id)_hf_legacyMotionSensorBulletinNotification;
- (id)_hf_doorbellBulletinNotification;
@end

