/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMAccessoryProfile.h>

@class HMCameraAudioControl, HMCameraClipManager, HMCameraSettingsControl, HMCameraSnapshotControl, HMCameraStreamControl, HMCameraUserSettings, NSString, _HMCameraProfile;

@protocol HMCameraProfileUserSettingsDelegate;

@interface HMCameraProfile : HMAccessoryProfile

{
    HMCameraStreamControl *_streamControl;
    HMCameraSnapshotControl *_snapshotControl;
    HMCameraSettingsControl *_settingsControl;
    HMCameraAudioControl *_speakerControl;
    HMCameraAudioControl *_microphoneControl;
    id <HMCameraProfileUserSettingsDelegate> _userSettingsDelegate;
}

@property (nonatomic, readonly) _HMCameraProfile *cameraProfile;
@property (retain, nonatomic) HMCameraStreamControl *streamControl;
@property (retain, nonatomic) HMCameraSnapshotControl *snapshotControl;
@property (retain, nonatomic) HMCameraSettingsControl *settingsControl;
@property (retain, nonatomic) HMCameraAudioControl *speakerControl;
@property (retain, nonatomic) HMCameraAudioControl *microphoneControl;
@property (readonly) HMCameraUserSettings *userSettings;
@property (weak) id <HMCameraProfileUserSettingsDelegate> userSettingsDelegate;
@property (readonly) HMCameraClipManager *clipManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)logCategory;

- (id)services;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)deleteAllClipsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithCameraProfile:(id)arg1;

@end
