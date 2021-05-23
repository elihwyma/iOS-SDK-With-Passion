/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <NanoRegistry/NRDevice.h>

@interface NRDevice (VersionFactories)

+ (_Bool)activePairedDeviceSupportsNotSendingTemporarySequenceNumbers;
+ (_Bool)activePairedDeviceSupportsFileBulletinAdd;
+ (_Bool)activePairedDeviceSupportsNSNullPListExtenion;
+ (id)versionForString:(id)arg1;
+ (_Bool)activePairedDeviceSupportIsGreaterEqualVersion:(unsigned long long)arg1;
+ (_Bool)activePairedDeviceSupportsFileSettingSync;
+ (_Bool)activePairedDeviceSupportsAttachmentFiles;
+ (_Bool)activePairedDeviceSupportsMultiplteAttachments;
+ (_Bool)activePairedDeviceSupportsAddBulletinReplyToken;
+ (_Bool)activePairedDeviceSupportsSendingOnlyCategoryID;
+ (_Bool)activePairedDeviceSupportsCriticalAndGroupingSettings;
+ (_Bool)activePairedDeviceSupportsSiriActionAppList;
+ (_Bool)activePairedDeviceSupportsDisplayingSubtitle;
+ (_Bool)activePairedDeviceSupportsAuthorizationStatusLockScreenAndNCSettings;
+ (_Bool)activePairedDeviceSupportsUserNotificationListDestination;
+ (_Bool)activePairedDeviceSupportsSpokenNotificationSettings;
+ (_Bool)activePairedDeviceSupportsEmergencyAlerts;
+ (_Bool)activePairedDeviceSupportsNoLocalRemoteNotificationInBulletinContext;
+ (_Bool)activePairedDeviceSupportsIconsPerNotification;

- (unsigned long long)watchOSVersion;
- (unsigned long long)bltVersion;

@end
