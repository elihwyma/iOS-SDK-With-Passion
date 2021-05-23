/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCameraCalibrationDataInternal, NSData;

@interface AVCameraCalibrationData : NSObject

{
    AVCameraCalibrationDataInternal *_internal;
}

@property (nonatomic, readonly) CDStruct_8e0628e6 intrinsicMatrix;
@property (nonatomic, readonly) struct CGSize intrinsicMatrixReferenceDimensions;
@property (nonatomic, readonly) CDStruct_14d5dc5e extrinsicMatrix;
@property (nonatomic, readonly) float pixelSize;
@property (nonatomic, readonly) NSData *lensDistortionLookupTable;
@property (nonatomic, readonly) NSData *inverseLensDistortionLookupTable;
@property (nonatomic, readonly) struct CGPoint lensDistortionCenter;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (id)_distortionLookupTableFromCoefficients:(id)arg1 distortionCenter:(struct CGPoint)arg2 pixelSize:(float)arg3 referenceDimensions:(struct CGSize)arg4 lookupTableLength:(int)arg5;
- (id)_initEmpty;
- (id)initWithAuxiliaryMetadata:(struct CGImageMetadata *)arg1;
- (id)initWithDepthMetadataDictionary:(id)arg1;
- (id)cameraCalibrationDataWithExifOrientation:(unsigned int)arg1;

@end
