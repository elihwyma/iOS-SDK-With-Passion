/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDImageProvider.h>

@class NSObject;

@protocol OS_dispatch_semaphore;

@interface TSDBitmapImageProvider : TSDImageProvider

{
    struct CGImageSource *mImageSource;
    struct CGImage *mImage;
    unsigned long long mImageGamut;
    struct CGSize mNaturalSize;
    long long mOrientation;
    _Bool mIsOpaque;
    _Bool mIsValid;
    unsigned long long mDPI;
    NSObject<OS_dispatch_semaphore> *mImageLock;
    long long mCheckIfValidToken;
    struct CGImage *mHalfSizeImage;
    struct CGImage *mQuarterSizeImage;
}

+ (void)initialize;
+ (struct CGImage *)CGImageForImageData:(id)arg1;
+ (id)p_cacheStringForData:(id)arg1;
+ (struct CGImageSource *)p_newImageSourceFromFilePath:(id)arg1;
+ (struct CGImage *)temporaryCGImageForImageData:(id)arg1;
+ (struct CGImageSource *)temporaryCGImageSourceForImageData:(id)arg1;
+ (id)TSUImageForImageData:(id)arg1;
+ (struct CGSize)naturalSizeForImageData:(id)arg1;
+ (void)clearCacheForData:(id)arg1;
+ (struct CGImageSource *)p_newImageSourceFromCacheForData:(id)arg1 withFilenameSuffix:(id)arg2;

- (void)dealloc;
- (_Bool)isValid;
- (long long)orientation;
- (_Bool)isOpaque;
- (void)flush;
- (struct CGSize)naturalSize;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 inContext:(struct CGContext *)arg2 orLayer:(id)arg3;
- (void)drawImageInContext:(struct CGContext *)arg1 rect:(struct CGRect)arg2;
- (struct CGImage *)CGImageForNaturalSize;
- (struct CGSize)dpiAdjustedNaturalSize;
- (struct CGSize)dpiAdjustedFillSize;
- (unsigned long long)imageGamut;
- (struct CGImageSource *)CGImageSource;
- (void)i_commonInit;
- (void)p_loadImageMetadata;
- (void)p_loadSourceRefIfNecessary;
- (struct CGImage *)p_newImageFromSource:(struct CGImageSource *)arg1;
- (void)p_loadFullSizedImageIfNecessary;
- (struct CGImage *)p_resampledImageOfSizeType:(int)arg1;
- (struct CGImageSource *)p_newCGImageSourceForTemporaryUse;
- (struct CGImage *)p_loadOrCreateResampledImageWithScale:(unsigned long long)arg1 andCGImage:(struct CGImage **)arg2;
- (unsigned long long)imageDPI;
- (struct CGImageSource *)p_newCGImageSource;
- (void)p_configureOrientationAndSizeFromImageSource:(struct CGImageSource *)arg1 andImage:(struct CGImage *)arg2;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1 lowQuality:(_Bool)arg2;
- (_Bool)hasFlushableContent;
- (struct CGImageSource *)p_newImageOfSize:(struct CGSize)arg1 andWriteToCacheWithSuffix:(id)arg2;

@end
