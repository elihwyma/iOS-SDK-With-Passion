/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class AVCameraCalibrationData;

@interface NUJSAVCameraCalibrationData : NUJSProxy

@property (readonly) AVCameraCalibrationData *cameraCalibrationData;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)nu_unwrapJSValue;
- (id)initWithDepthCameraCalibrationData:(id)arg1 context:(id)arg2;

@end
