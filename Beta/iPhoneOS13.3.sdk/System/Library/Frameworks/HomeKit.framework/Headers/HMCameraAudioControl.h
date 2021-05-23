/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraAudioControl;

@interface HMCameraAudioControl : HMCameraControl

{
    _HMCameraAudioControl *_audioControl;
}

@property (retain, nonatomic) _HMCameraAudioControl *audioControl;
@property (nonatomic, readonly) HMCharacteristic *mute;
@property (nonatomic, readonly) HMCharacteristic *volume;

- (id)initWithAudioControl:(id)arg1;

@end
