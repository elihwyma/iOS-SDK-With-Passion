/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/HMCameraControl.h>

@class HMCharacteristic, _HMCameraSettingsControl;

@interface HMCameraSettingsControl : HMCameraControl

{
    _HMCameraSettingsControl *_settingsControl;
}

@property (retain, nonatomic) _HMCameraSettingsControl *settingsControl;
@property (nonatomic, readonly) HMCharacteristic *nightVision;
@property (nonatomic, readonly) HMCharacteristic *currentHorizontalTilt;
@property (nonatomic, readonly) HMCharacteristic *targetHorizontalTilt;
@property (nonatomic, readonly) HMCharacteristic *currentVerticalTilt;
@property (nonatomic, readonly) HMCharacteristic *targetVerticalTilt;
@property (nonatomic, readonly) HMCharacteristic *opticalZoom;
@property (nonatomic, readonly) HMCharacteristic *digitalZoom;
@property (nonatomic, readonly) HMCharacteristic *imageRotation;
@property (nonatomic, readonly) HMCharacteristic *imageMirroring;

- (id)initWithSettingsControl:(id)arg1;

@end
