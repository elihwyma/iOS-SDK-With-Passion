/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMAccessoryProfile.h>

@class HMCameraClipManager, HMCameraUserSettings, NSArray, _HMCameraAudioControl, _HMCameraSettingsControl, _HMCameraSnapshotControl, _HMCameraStreamControl;

@interface _HMCameraProfile : _HMAccessoryProfile

{
    _HMCameraStreamControl *_streamControlInternal;
    _HMCameraSnapshotControl *_snapshotControlInternal;
    _HMCameraSettingsControl *_settingsControl;
    _HMCameraAudioControl *_speakerControl;
    _HMCameraAudioControl *_microphoneControl;
    HMCameraUserSettings *_userSettings;
    HMCameraClipManager *_clipManager;
}

@property (copy, readonly) NSArray *controls;
@property (retain) HMCameraUserSettings *userSettings;
@property (retain) HMCameraClipManager *clipManager;
@property (readonly) _HMCameraStreamControl *streamControlInternal;
@property (readonly) _HMCameraSnapshotControl *snapshotControlInternal;
@property (readonly) _HMCameraSettingsControl *settingsControl;
@property (readonly) _HMCameraAudioControl *speakerControl;
@property (readonly) _HMCameraAudioControl *microphoneControl;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_registerNotificationHandlers;
- (void)_createControls:(id)arg1;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;
- (void)addUserSettings:(id)arg1;
- (void)deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
