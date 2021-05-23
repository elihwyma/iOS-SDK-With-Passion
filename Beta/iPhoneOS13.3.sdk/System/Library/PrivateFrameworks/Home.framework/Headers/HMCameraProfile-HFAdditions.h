/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <HomeKit/HMCameraProfile.h>

@class HFCameraManager, HFUserNotificationServiceSettings, NSString, NSUUID;

@interface HMCameraProfile (HFAdditions)

@property (nonatomic, readonly) HFCameraManager *hf_cameraManager;
@property (nonatomic, readonly) _Bool hf_cameraSupportsBidirectionalAudio;
@property (nonatomic, readonly) _Bool hf_cameraIsNotSetToRecord;
@property (nonatomic, readonly) _Bool hf_cameraSupportsRecording;
@property (nonatomic, readonly) _Bool hf_shouldDisableLiveStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) HFUserNotificationServiceSettings *hf_userNotificationSettings;

+ (unsigned long long)notificationEventTriggersForPredicate:(id)arg1;
+ (unsigned long long)hf_cameraAccessModeSelectedOptionForCameraProfiles:(id)arg1 presenceType:(unsigned long long)arg2;
+ (unsigned long long)hf_cameraMotionDetectionSettingsForCameraProfiles:(id)arg1;
+ (unsigned long long)hf_cameraNotificationMotionDetectionSettingsForCameraProfiles:(id)arg1;

- (id)hf_updateUserNotificationSettings:(id)arg1;
- (id)_hf_legacyMotionSensorBulletinNotification;
- (id)_hf_smartDetectionBulletinNotification;
- (id)_hf_doorbellBulletinNotification;
- (id)hf_bulletinNotifications;

@end
