/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPortraitEffectsMatteInternal;

@interface AVPortraitEffectsMatte : NSObject

{
    AVPortraitEffectsMatteInternal *_internal;
}

@property (readonly) unsigned int pixelFormatType;
@property (readonly) struct __CVBuffer *mattingImage;

+ (void)initialize;
+ (id)_allSupportedPortraitEffectsMattePixelFormatTypes;
+ (id)portraitEffectsMatteFromDictionaryRepresentation:(id)arg1 error:(id *)arg2;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentationForAuxiliaryDataType:(id *)arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 auxiliaryMetadata:(struct CGImageMetadata *)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 portraitEffectsMatteMetadataDictionary:(id)arg2;
- (const struct CGImageMetadata *)copyAuxiliaryMetadata;
- (const struct __CFString *)auxiliaryImageType;
- (id)portraitEffectsMatteByApplyingExifOrientation:(unsigned int)arg1;
- (id)portraitEffectsMatteByReplacingPortraitEffectsMatteWithPixelBuffer:(struct __CVBuffer *)arg1 error:(id *)arg2;
- (short)versionMajor;
- (short)versionMinor;

@end
