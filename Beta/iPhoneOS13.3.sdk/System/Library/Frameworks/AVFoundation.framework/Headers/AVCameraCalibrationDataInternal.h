/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface AVCameraCalibrationDataInternal : NSObject

{
    CDStruct_8e0628e6 intrinsicMatrix;
    struct CGSize intrinsicMatrixReferenceDimensions;
    CDStruct_14d5dc5e extrinsicMatrix;
    float pixelSize;
    NSData *lensDistortionCoefficients;
    NSData *inverseLensDistortionCoefficients;
    struct CGPoint lensDistortionCenter;
    NSData *lensDistortionLookupTable;
    NSData *inverseLensDistortionLookupTable;
}

@end
