/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <HomeKit/_HMCameraControl.h>

@class HMCharacteristic;

__attribute__((visibility("hidden")))
@interface _HMCameraSettingsControl : _HMCameraControl

{
    HMCharacteristic *_nightVision;
    HMCharacteristic *_currentHorizontalTilt;
    HMCharacteristic *_targetHorizontalTilt;
    HMCharacteristic *_currentVerticalTilt;
    HMCharacteristic *_targetVerticalTilt;
    HMCharacteristic *_opticalZoom;
    HMCharacteristic *_digitalZoom;
    HMCharacteristic *_imageRotation;
    HMCharacteristic *_imageMirroring;
}

@property (retain, nonatomic) HMCharacteristic *nightVision;
@property (retain, nonatomic) HMCharacteristic *currentHorizontalTilt;
@property (retain, nonatomic) HMCharacteristic *targetHorizontalTilt;
@property (retain, nonatomic) HMCharacteristic *currentVerticalTilt;
@property (retain, nonatomic) HMCharacteristic *targetVerticalTilt;
@property (retain, nonatomic) HMCharacteristic *opticalZoom;
@property (retain, nonatomic) HMCharacteristic *digitalZoom;
@property (retain, nonatomic) HMCharacteristic *imageRotation;
@property (retain, nonatomic) HMCharacteristic *imageMirroring;

- (id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3;

@end
