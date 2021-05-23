/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVSemanticSegmentationMatte : NSObject

{
    NSString *_matteType;
    struct __CVBuffer *_pixelBuffer;
    int _version;
}

@property (readonly) NSString *matteType;
@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer *mattingImage;

+ (void)initialize;
+ (id)_allSupportedSemanticSegmentationMattePixelFormatTypes;
+ (id)_allSupportedSemanticSegmentationMatteTypes;
+ (id)semanticSegmentationMatteFromImageSourceAuxiliaryDataType:(struct __CFString *)arg1 dictionaryRepresentation:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)semanticSegmentationMatteByReplacingSemanticSegmentationMatteWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (const struct CGImageMetadata *)copyAuxiliaryMetadata;
- (const struct __CFString *)auxiliaryImageType;
- (short)versionMajor;
- (short)versionMinor;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 auxiliaryMetadata:(const struct CGImageMetadata *)arg3;
- (id)initWithType:(id)arg1 pixelBuffer:(struct __CVBuffer *)arg2 semanticSegmentationMatteMetadataDictionary:(id)arg3;
- (id)semanticSegmentationMatteByApplyingExifOrientation:(unsigned int)arg1;

@end
