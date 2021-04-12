//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoRegistry/NRDevice.h>

@interface NRDevice (VersionFactories)
+ (id)versionForString:(id)arg1;
+ (BOOL)activePairedDeviceSupportsIconsPerNotification;
+ (BOOL)activePairedDeviceSupportsNotSendingTemporarySequenceNumbers;
+ (BOOL)activePairedDeviceSupportsNoLocalRemoteNotificationInBulletinContext;
+ (BOOL)activePairedDeviceSupportsEmergencyAlerts;
+ (BOOL)activePairedDeviceSupportsSpokenNotificationSettings;
+ (BOOL)activePairedDeviceSupportsUserNotificationListDestination;
+ (BOOL)activePairedDeviceSupportsAuthorizationStatusLockScreenAndNCSettings;
+ (BOOL)activePairedDeviceSupportsDisplayingSubtitle;
+ (BOOL)activePairedDeviceSupportsSiriActionAppList;
+ (BOOL)activePairedDeviceSupportsCriticalAndGroupingSettings;
+ (BOOL)activePairedDeviceSupportsSendingOnlyCategoryID;
+ (BOOL)activePairedDeviceSupportsAddBulletinReplyToken;
+ (BOOL)activePairedDeviceSupportsMultiplteAttachments;
+ (BOOL)activePairedDeviceSupportsNSNullPListExtenion;
+ (BOOL)activePairedDeviceSupportsAttachmentFiles;
+ (BOOL)activePairedDeviceSupportsFileBulletinAdd;
+ (BOOL)activePairedDeviceSupportsFileSettingSync;
+ (BOOL)activePairedDeviceSupportIsGreaterEqualVersion:(NSUInteger)arg1;
- (NSUInteger)bltVersion;
- (NSUInteger)watchOSVersion;
@end

