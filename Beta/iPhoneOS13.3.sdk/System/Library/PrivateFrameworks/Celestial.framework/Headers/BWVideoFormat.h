/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFormat.h>

@class NSDictionary;

@interface BWVideoFormat : BWFormat

{
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _pixelFormat;
    unsigned long long _bytesPerRowAlignment;
    unsigned long long _planeAlignment;
    unsigned long long _extendedWidth;
    unsigned long long _extendedHeight;
    unsigned int _cacheMode;
    _Bool _prewireBuffers;
    _Bool _memoryPoolUseAllowed;
    NSDictionary *_pixelBufferAttributes;
    int _colorSpaceProperties;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long extendedWidth;
@property (nonatomic) unsigned long long extendedHeight;
@property (nonatomic) unsigned int cacheMode;
@property (nonatomic) _Bool prewireBuffers;
@property (nonatomic) _Bool memoryPoolUseAllowed;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic, readonly) int colorSpaceProperties;

+ (void)initialize;
+ (id)pixelBufferAttachmentsForColorSpaceProperties:(int)arg1;
+ (id)formatByResolvingRequirements:(id)arg1;
+ (int)colorSpacePropertiesForSourceThatSupportsWideColor:(_Bool)arg1 sourceColorSpace:(int)arg2 sourcePixelFormat:(unsigned int)arg3 sourceDimensions:(CDStruct_79c71658)arg4 requestedPixelFormat:(unsigned int)arg5;
+ (id)_formatRequirementsByResolvingFormatRequirements:(id)arg1 withFormatRequirements:(id)arg2;
+ (int)colorSpacePropertiesWithSourceColorSpace:(int)arg1 sourcePixelFormat:(unsigned int)arg2 sourceDimensions:(CDStruct_79c71658)arg3 requestedPixelFormat:(unsigned int)arg4;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription *)formatDescription;
- (id)_initWithResolvedPixelBufferAttributes:(id)arg1 colorSpaceProperties:(int)arg2 memoryPoolUseAllowed:(_Bool)arg3;

@end
