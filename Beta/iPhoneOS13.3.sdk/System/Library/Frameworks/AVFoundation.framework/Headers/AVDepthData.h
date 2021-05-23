/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVCameraCalibrationData, AVDepthDataInternal, NSArray;

@interface AVDepthData : NSObject

{
    AVDepthDataInternal *_internal;
}

@property (readonly) NSArray *availableDepthDataTypes;
@property (readonly) unsigned int depthDataType;
@property (readonly) struct __CVBuffer *depthDataMap;
@property (readonly) long long depthDataQuality;
@property (readonly, getter=isDepthDataFiltered) _Bool depthDataFiltered;
@property (readonly) long long depthDataAccuracy;
@property (readonly) AVCameraCalibrationData *cameraCalibrationData;

+ (void)initialize;
+ (id)_allSupportedDepthDataPixelFormatTypes;
+ (id)depthDataFromDictionaryRepresentation:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)depthDataByConvertingToDepthDataType:(unsigned int)arg1;
- (id)depthDataByReplacingDepthDataMapWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (float)portraitScore;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 auxiliaryMetadata:(struct CGImageMetadata *)arg2;
- (struct CGImageMetadata *)copyAuxiliaryMetadata;
- (struct __CFString *)auxiliaryImageType;
- (float)portraitLightingEffectStrength;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 depthMetadataDictionary:(id)arg2;
- (float)depthBlurEffectSimulatedAperture;
- (id)depthBlurEffectRenderingParameters;
- (_Bool)portraitScoreIsHigh;
- (struct __CVBuffer *)_copyPixelBufferRepresentationWithPixelFormatType:(unsigned int)arg1;
- (short)depthDataVersionMajor;
- (short)depthDataVersionMinor;
- (id)depthDataByApplyingExifOrientation:(unsigned int)arg1;

@end
