/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNSizeRange;

@interface VNSupportedImageSize : NSObject

{
    unsigned long long _cachedCalculatedHash;
    _Bool _orientationAgnostic;
    unsigned int _idealImageFormat;
    unsigned int _idealOrientation;
    VNSizeRange *_pixelsWideRange;
    VNSizeRange *_pixelsHighRange;
    unsigned long long _aspectRatioHandling;
}

@property (nonatomic, readonly) VNSizeRange *pixelsWideRange;
@property (nonatomic, readonly) VNSizeRange *pixelsHighRange;
@property (nonatomic, readonly) unsigned long long aspectRatioHandling;
@property (nonatomic, readonly) unsigned int idealImageFormat;
@property (nonatomic, readonly) unsigned int idealOrientation;
@property (nonatomic, readonly, getter=isOrientationAgnostic) _Bool orientationAgnostic;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdealFormat:(unsigned int)arg1 pixelsWideRange:(id)arg2 pixelsHighRange:(id)arg3 aspectRatioHandling:(unsigned long long)arg4 idealOrientation:(unsigned int)arg5 orientationAgnostic:(_Bool)arg6;
- (_Bool)isAllowedPixelsWide:(unsigned long long)arg1 pixelsHigh:(unsigned long long)arg2;

@end
