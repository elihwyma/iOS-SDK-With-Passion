/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMCameraBulletinBoardSmartNotification, NSString, NSUUID;

@interface _HMCameraUserSettings : NSObject <Swift>

{
    _Bool _snapshotsAllowed;
    _Bool _accessModeIndicatorEnabled;
    _Bool _nightVisionModeEnabled;
    _Bool _recordingAudioEnabled;
    _Bool _accessModeChangeNotificationEnabled;
    _Bool _cameraManuallyDisabled;
    NSUUID *_uniqueIdentifier;
    unsigned long long _supportedFeatures;
    unsigned long long _accessModeAtHome;
    unsigned long long _accessModeNotAtHome;
    unsigned long long _currentAccessMode;
    unsigned long long _recordingEventTriggers;
    HMCameraBulletinBoardSmartNotification *_smartNotificationBulletin;
}

@property (readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long supportedFeatures;
@property (readonly) unsigned long long accessModeAtHome;
@property (readonly) unsigned long long accessModeNotAtHome;
@property (readonly) unsigned long long currentAccessMode;
@property (readonly) unsigned long long recordingEventTriggers;
@property (readonly, getter=areSnapshotsAllowed) _Bool snapshotsAllowed;
@property (readonly, getter=isAccessModeIndicatorEnabled) _Bool accessModeIndicatorEnabled;
@property (readonly, getter=isNightVisionModeEnabled) _Bool nightVisionModeEnabled;
@property (readonly, getter=isRecordingAudioEnabled) _Bool recordingAudioEnabled;
@property (readonly, getter=isAccessModeChangeNotificationEnabled) _Bool accessModeChangeNotificationEnabled;
@property (readonly, getter=isCameraManuallyDisabled) _Bool cameraManuallyDisabled;
@property (readonly) HMCameraBulletinBoardSmartNotification *smartNotificationBulletin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (id)initWithUUID:(id)arg1 supportedFeatures:(unsigned long long)arg2 accessModeAtHome:(unsigned long long)arg3 accessModeNotAtHome:(unsigned long long)arg4 currentAccessMode:(unsigned long long)arg5 recordingEventTriggers:(unsigned long long)arg6 snapshotsAllowed:(_Bool)arg7 accessModeIndicatorEnabled:(_Bool)arg8 nightVisionModeEnabled:(_Bool)arg9 recordingAudioEnabled:(_Bool)arg10 accessModeChangeNotificationEnabled:(_Bool)arg11 cameraManuallyDisabled:(_Bool)arg12 smartNotification:(id)arg13;

@end
