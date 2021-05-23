/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@class UIImage;

@interface TSUImage : NSObject

{
    struct CGImage *mCachedSliceableImage;
    struct __CFDictionary *mImageSlices;
    long long mImageSliceCacheLock;
    id mCachedSystemImage;
    long long mCachedImageLock;
}

@property (nonatomic, readonly) UIImage *UIImage;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) struct CGImage *CGImage;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) double scale;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)imageWithUIImage:(id)arg1;
+ (id)imageWithSize:(struct CGSize)arg1 drawnUsingBlock:(CDUnknownBlockType)arg2;
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)TIFFRepresentation;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (void)drawInRect:(struct CGRect)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithUIImage:(id)arg1;
- (id)PNGRepresentation;
- (struct CGImage *)CGImageForContentsScale:(double)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (id)imagePartsWithLeftCapWidth:(double)arg1 rightCapWidth:(double)arg2 topCapHeight:(double)arg3 bottomCapHeight:(double)arg4;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 stretchingCenterWidthBy:(double)arg3;

@end
