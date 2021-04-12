//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDBulletinBoard, HMDCameraNotificationCharacteristicsAvailabilityListener, HMDCameraProfileSettingsModel, HMDCameraSnapshotManager, HMDHAPAccessory, HMDNotificationRegistration, HMFMessageDispatcher, NSMutableSet, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate, HMDCameraNotificationCharacteristicsAvailabilityListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uniqueIdentifier;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDHAPAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    NSString *_logID;
    HMDBulletinBoard *_bulletinBoard;
    HMDNotificationRegistration *_notificationRegistration;
    NSSet *_bulletinSnapshotCharacteristics;
    NSSet *_proactiveSnapshotCharacterisitics;
    HMDCameraNotificationCharacteristicsAvailabilityListener *_characteristicsAvailabilityListener;
    NSString *_clientIdentifier;
}

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)isMotionServiceDetectedCharacteristic:(id)arg1;
+ (BOOL)isDoorbellServiceInputCharacteristic:(id)arg1;
+ (id)logCategory;
@property(readonly, copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(retain) HMDCameraNotificationCharacteristicsAvailabilityListener *characteristicsAvailabilityListener; // @synthesize characteristicsAvailabilityListener=_characteristicsAvailabilityListener;
@property(retain) NSSet *proactiveSnapshotCharacterisitics; // @synthesize proactiveSnapshotCharacterisitics=_proactiveSnapshotCharacterisitics;
@property(retain) NSSet *bulletinSnapshotCharacteristics; // @synthesize bulletinSnapshotCharacteristics=_bulletinSnapshotCharacteristics;
@property(readonly) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(readonly) HMDBulletinBoard *bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
@property(readonly) NSString *logID; // @synthesize logID=_logID;
@property(readonly) NSString *bulletinImagesDirectory; // @synthesize bulletinImagesDirectory=_bulletinImagesDirectory;
@property(readonly) __weak HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain) NSMutableSet *snapShotNotificationResponseTimers; // @synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers;
@property(readonly) __weak HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleRemoteNotification:(id)arg1;
- (void)handleRemoteNotificationGenerated:(id)arg1;
- (void)handleCameraSettingsDidUpdateNotification:(id)arg1;
@property(readonly) HMDCameraProfileSettingsModel *currentCameraSettings;
- (void)_sendReleaseSnapshot:(id)arg1;
- (void)_removeBulletins:(id)arg1 sessionID:(id)arg2;
- (void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2;
- (void)timerDidFire:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_handleHomedRelaunchRegistration:(id)arg1 updatedCharacteristics:(id)arg2;
- (void)_handleUpdatedProactiveSnapshotCharacteristics:(id)arg1;
- (void)_handleUpdatedBulletinSnapshotCharacteristics:(id)arg1;
- (void)_handleBulletinNotificationEnableStateDidChange:(id)arg1;
- (void)handleBulletinNotificationEnableStateDidChange:(id)arg1;
- (void)_enableNotificationsForCharacteristics:(id)arg1 cameraSettings:(id)arg2;
- (void)listener:(id)arg1 didUpdateAvailableCharacteristics:(id)arg2;
- (BOOL)_canEnableNotificationForCharacteristic:(id)arg1 cameraSettings:(id)arg2;
- (void)dealloc;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;

@end

