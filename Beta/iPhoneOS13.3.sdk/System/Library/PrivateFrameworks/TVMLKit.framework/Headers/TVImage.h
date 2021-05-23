/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSURL;

@interface TVImage : NSObject

{
    struct CGImage *_image;
    struct CGImageSource *_imageSource;
    double _imageWidth;
    double _imageHeight;
    int _imageOrientation;
    _Bool _enableCache;
    _Bool _cacheImmediately;
    NSURL *_imageURL;
    NSData *_imageData;
    NSString *_imageType;
    _Bool _imageBufferInMemory;
    _Bool _rotationEnabled;
}

@property (nonatomic, readonly) int orientation;
@property (nonatomic) _Bool rotationEnabled;

+ (id)imageWithData:(id)arg1;
+ (id)imageWithURL:(id)arg1;
+ (id)imageWithPath:(id)arg1;
+ (id)imageWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;
+ (id)imageWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;
+ (id)imageWithPath:(id)arg1 cacheImmediately:(_Bool)arg2;
+ (id)imageWithCGImageRef:(struct CGImage *)arg1 imageOrientation:(long long)arg2 preserveAlpha:(_Bool)arg3;
+ (id)imageWithRotationFromURL:(id)arg1;
+ (int)exifOrientationForImageOrientation:(long long)arg1;
+ (long long)imageOrientationForExifOrientation:(int)arg1;
+ (id)imageWithRotationFromPath:(id)arg1;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (struct CGImage *)image;
- (float)aspectRatio;
- (id)imageType;
- (_Bool)hasAlpha;
- (id)uiImage;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (_Bool)isPowerOfTwo;
- (struct CGSize)pixelBounds;
- (id)initWithCGImageRef:(struct CGImage *)arg1 preserveAlpha:(_Bool)arg2;
- (id)initWithCGImageRef:(struct CGImage *)arg1 imageOrientation:(long long)arg2 preserveAlpha:(_Bool)arg3;
- (id)initWithURL:(id)arg1 cacheImmediately:(_Bool)arg2;
- (id)_initWithCGImageSourceRotationEnabled:(struct CGImageSource *)arg1;
- (long long)_uiImageOrientation;
- (void)_initializeCGImageWithRotation;
- (struct CGRect)largestSquareRect;
- (_Bool)sourceRequiresRotation;
- (void)setEnableCache:(_Bool)arg1;
- (_Bool)enableCache;
- (id)squareImageFromNearSquareImageWithAspectRatioLimit:(float)arg1;
- (_Bool)isImageBufferInMemory;

@end
