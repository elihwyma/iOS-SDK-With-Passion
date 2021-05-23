/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NUJSAVCameraCalibrationData, NUJSCGImageMetadata;

@protocol NUJSDepthPropertiesExport <Swift>

@property (readonly) NUJSAVCameraCalibrationData *cameraCalibrationData;
@property (readonly) NUJSCGImageMetadata *depthMetaData;

@end
