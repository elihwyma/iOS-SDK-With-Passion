/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMAccessory, HMCameraBulletinBoardSmartNotification, HMFUnfairLock, NSString, NSUUID, _HMCameraUserSettings, _HMContext;

@protocol HMCameraUserSettingsDelegate, OS_dispatch_queue;

@interface HMCameraUserSettings : NSObject

{
    HMFUnfairLock *_lock;
    _HMCameraUserSettings *_cameraUserSettings;
    id <HMCameraUserSettingsDelegate> _delegate;
    _HMContext *_context;
    HMAccessory *_accessory;
}

@property (retain) _HMCameraUserSettings *cameraUserSettings;
@property (readonly) NSUUID *uniqueIdentifier;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic) HMAccessory *accessory;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly) unsigned long long recordingStorageDuration;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, getter=areSnapshotsAllowed) _Bool snapshotsAllowed;
@property (readonly) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (readonly, getter=isAccessModeIndicatorEnabled) _Bool accessModeIndicatorEnabled;
@property (readonly, getter=isNightVisionModeEnabled) _Bool nightVisionModeEnabled;
@property (readonly, getter=isRecordingAudioEnabled) _Bool recordingAudioEnabled;
@property (readonly, getter=isAccessModeChangeNotificationEnabled) _Bool accessModeChangeNotificationEnabled;
@property (readonly, getter=isCameraManuallyDisabled) _Bool cameraManuallyDisabled;
@property (weak) id <HMCameraUserSettingsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (id)messageDestination;
- (void)configureWithAccessory:(id)arg1 context:(id)arg2;
- (id)initWithCameraUserSettings:(id)arg1;
- (void)_mergeNewSettings:(id)arg1 operations:(id)arg2;
- (unsigned long long)accessModeAtHome;
- (unsigned long long)accessModeNotAtHome;
- (void)updateWithSettings:(id)arg1;
- (void)_callSettingsDidUpdateDelegate;
- (unsigned long long)accessModeForPresenceType:(unsigned long long)arg1;
- (void)updateAccessMode:(unsigned long long)arg1 forPresenceEventType:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateRecordingStorageDuration:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecordingEventTriggers:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessModeIndicatorEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSnapshotsAllowed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateNightVisionModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateRecordingAudioEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateAccessModeChangeNotificationEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
