/*
 Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import <Celestial/BWFormatRequirements.h>

@class NSArray, NSDictionary;

@interface BWVideoFormatRequirements : BWFormatRequirements

{
    unsigned long long _width;
    unsigned long long _height;
    NSArray *_supportedPixelFormats;
    NSArray *_supportedColorSpaceProperties;
    unsigned long long _bytesPerRowAlignment;
    unsigned long long _planeAlignment;
    unsigned long long _widthAlignment;
    unsigned long long _heightAlignment;
    NSArray *_supportedCacheModes;
    _Bool _prewireBuffers;
    _Bool _memoryPoolUseAllowed;
}

@property (nonatomic) unsigned long long width;
@property (nonatomic) unsigned long long height;
@property (copy, nonatomic) NSArray *supportedPixelFormats;
@property (copy, nonatomic) NSArray *supportedColorSpaceProperties;
@property (nonatomic) unsigned long long bytesPerRowAlignment;
@property (nonatomic) unsigned long long planeAlignment;
@property (nonatomic) unsigned long long widthAlignment;
@property (nonatomic) unsigned long long heightAlignment;
@property (copy, nonatomic) NSArray *supportedCacheModes;
@property (nonatomic, readonly) NSDictionary *pixelBufferAttributes;
@property (nonatomic) _Bool prewireBuffers;
@property (nonatomic) _Bool memoryPoolUseAllowed;

+ (void)initialize;
+ (id)cacheModesForOptimizedHWAccess;
+ (id)cacheModesForCacheProfile:(int)arg1;
+ (id)displayPipeRequirements;
+ (id)cacheModesForOptimizedCPUAccess;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (unsigned int)mediaType;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (Class)formatClass;

@end
