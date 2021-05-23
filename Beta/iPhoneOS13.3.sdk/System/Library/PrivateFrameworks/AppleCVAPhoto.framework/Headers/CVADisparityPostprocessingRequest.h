/*
 Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface CVADisparityPostprocessingRequest : NSObject

{
    _Bool _isFocalPlaneLocked;
    short _focusTileXOffset;
    short _focusTileYOffset;
    unsigned short _focusTileWidth;
    unsigned short _focusTileHeight;
    unsigned short _focusMapWidth;
    unsigned short _focusMapHeight;
    short _totalSensorCropXOffset;
    short _totalSensorCropYOffset;
    unsigned short _totalSensorCropWidth;
    unsigned short _totalSensorCropHeight;
    int _focusRegionType;
    float _currentFocusPosition;
    float _focusDistanceToMaxAllowedFocusDistanceRatio;
    float _disparityNormalizationMultiplier;
    float _disparityNormalizationOffset;
    float _phaseToBlurFactor;
    struct __CVBuffer *_sourceColorPixelBuffer;
    struct __CVBuffer *_segmentationPixelBuffer;
    struct __CVBuffer *_fixedPointDisparityPixelBuffer;
    struct __CVBuffer *_destinationDisparityPixelBuffer;
    NSArray *_focusRegion;
    NSArray *_facesArray;
    NSDictionary *_faceModel;
    NSData *_focusTileData;
    struct CVAVector _sourceColorPixelBufferGravity;
    struct CVAVector _sourceColorPixelBufferGlobalMotion;
    struct CVAQuaternion _sourceColorPixelBufferOrientation;
}

@property (readonly) NSData *focusTileData;
@property (readonly) short focusTileXOffset;
@property (readonly) short focusTileYOffset;
@property (readonly) unsigned short focusTileWidth;
@property (readonly) unsigned short focusTileHeight;
@property (readonly) unsigned short focusMapWidth;
@property (readonly) unsigned short focusMapHeight;
@property (readonly) short totalSensorCropXOffset;
@property (readonly) short totalSensorCropYOffset;
@property (readonly) unsigned short totalSensorCropWidth;
@property (readonly) unsigned short totalSensorCropHeight;
@property (readonly) float phaseToBlurFactor;
@property (readonly) struct __CVBuffer *sourceColorPixelBuffer;
@property (readonly) struct __CVBuffer *segmentationPixelBuffer;
@property (readonly) struct __CVBuffer *fixedPointDisparityPixelBuffer;
@property (readonly) struct __CVBuffer *destinationDisparityPixelBuffer;
@property (readonly) NSArray *focusRegion;
@property (readonly) int focusRegionType;
@property (readonly) float currentFocusPosition;
@property (readonly) _Bool isFocalPlaneLocked;
@property (readonly) float focusDistanceToMaxAllowedFocusDistanceRatio;
@property (readonly) struct CVAQuaternion sourceColorPixelBufferOrientation;
@property (readonly) struct CVAVector sourceColorPixelBufferGravity;
@property (readonly) struct CVAVector sourceColorPixelBufferGlobalMotion;
@property (readonly) NSArray *facesArray;
@property (readonly) NSDictionary *faceModel;
@property (readonly) float disparityNormalizationMultiplier;
@property (readonly) float disparityNormalizationOffset;

- (void)dealloc;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg1 fixedPointDisparityPixelBuffer:(struct __CVBuffer *)arg2 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg3 focusRegion:(id)arg4 focusRegionType:(int)arg5 currentFocusPosition:(float)arg6 lockFocalPlane:(_Bool)arg7 sourceColorPixelBufferOrientation:(struct CVAQuaternion)arg8 sourceColorPixelBufferGravity:(struct CVAVector)arg9 sourceColorPixelBufferGlobalMotion:(struct CVAVector)arg10 facesArray:(id)arg11 disparityNormalizationMultiplier:(float)arg12 disparityNormalizationOffset:(float)arg13;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg1 segmentationPixelBuffer:(struct __CVBuffer *)arg2 focusTileData:(id)arg3 focusTileXOffset:(short)arg4 focusTileYOffset:(short)arg5 focusTileWidth:(unsigned short)arg6 focusTileHeight:(unsigned short)arg7 focusMapWidth:(unsigned short)arg8 focusMapHeight:(unsigned short)arg9 totalSensorCropXOffset:(short)arg10 totalSensorCropYOffset:(short)arg11 totalSensorCropWidth:(unsigned short)arg12 totalSensorCropHeight:(unsigned short)arg13 phaseToBlurFactor:(float)arg14 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg15 focusRegion:(id)arg16 focusRegionType:(int)arg17 currentFocusPosition:(float)arg18 lockFocalPlane:(_Bool)arg19 focusDistanceToMaxAllowedFocusDistanceRatio:(float)arg20 sourceColorPixelBufferOrientation:(struct CVAQuaternion)arg21 sourceColorPixelBufferGravity:(struct CVAVector)arg22 sourceColorPixelBufferGlobalMotion:(struct CVAVector)arg23 facesArray:(id)arg24;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg1 segmentationPixelBuffer:(struct __CVBuffer *)arg2 focusTileData:(id)arg3 focusTileXOffset:(short)arg4 focusTileYOffset:(short)arg5 focusTileWidth:(unsigned short)arg6 focusTileHeight:(unsigned short)arg7 focusMapWidth:(unsigned short)arg8 focusMapHeight:(unsigned short)arg9 totalSensorCropXOffset:(short)arg10 totalSensorCropYOffset:(short)arg11 totalSensorCropWidth:(unsigned short)arg12 totalSensorCropHeight:(unsigned short)arg13 phaseToBlurFactor:(float)arg14 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg15 focusRegion:(id)arg16 focusRegionType:(int)arg17 currentFocusPosition:(float)arg18 lockFocalPlane:(_Bool)arg19 sourceColorPixelBufferOrientation:(struct CVAQuaternion)arg20 sourceColorPixelBufferGravity:(struct CVAVector)arg21 sourceColorPixelBufferGlobalMotion:(struct CVAVector)arg22 facesArray:(id)arg23;
- (id)initWithSourceColorPixelBuffer:(struct __CVBuffer *)arg1 segmentationPixelBuffer:(struct __CVBuffer *)arg2 focusTileData:(id)arg3 focusTileXOffset:(float)arg4 focusTileYOffset:(float)arg5 focusTileWidth:(float)arg6 focusTileHeight:(float)arg7 phaseToBlurFactor:(float)arg8 destinationDisparityPixelBuffer:(struct __CVBuffer *)arg9 focusRegion:(id)arg10 focusRegionType:(int)arg11 currentFocusPosition:(float)arg12 lockFocalPlane:(_Bool)arg13 sourceColorPixelBufferOrientation:(struct CVAQuaternion)arg14 sourceColorPixelBufferGravity:(struct CVAVector)arg15 sourceColorPixelBufferGlobalMotion:(struct CVAVector)arg16 facesArray:(id)arg17;

@end
