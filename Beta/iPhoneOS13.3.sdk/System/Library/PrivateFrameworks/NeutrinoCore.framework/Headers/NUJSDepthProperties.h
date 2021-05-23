/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/NUJSProxy.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;

@protocol NUAuxiliaryImageProperties;

@interface NUJSDepthProperties : NUJSProxy

@property (readonly) id <NUAuxiliaryImageProperties> depthProperties;
@property (readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NUJSCGImageMetadata *depthMetaData;

- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;
- (id)initWithDepthProperties:(id)arg1 context:(id)arg2;

@end
