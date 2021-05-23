/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class TSUOnce, UIImage;

__attribute__((visibility("hidden")))
@interface OITSUImage : NSObject

{
    struct CGImage *mCachedSliceableImage;
    struct __CFDictionary *mImageSlices;
    TSUOnce *mImageSlicesOnce;
    id mCachedSystemImage;
    TSUOnce *mCachedImageOnce;
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
+ (id)imageNamed:(id)arg1;
+ (id)imageWithUIImage:(id)arg1;
+ (id)noisePatternWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 factor:(double)arg3;

- (id)init;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (id)TIFFRepresentation;
- (id)initWithCGImage:(struct CGImage *)arg1;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (id)initWithUIImage:(id)arg1;
- (id)PNGRepresentation;
- (struct CGImage *)CGImageForContentsScale:(double)arg1;
- (id)initWithImageSourceRef:(struct CGImageSource *)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;
- (id)JPEGRepresentationWithCompressionQuality:(double)arg1;
- (id)stretchedImageOfSize:(struct CGSize)arg1 leftCapWidth:(double)arg2 rightCapWidth:(double)arg3 topCapHeight:(double)arg4 bottomCapHeight:(double)arg5;
- (void)drawInRect:(struct CGRect)arg1 context:(struct CGContext *)arg2 stretchingCenterWidthBy:(double)arg3;
- (void)drawInRect:(struct CGRect)arg1 fromRect:(struct CGRect)arg2 isFlipped:(_Bool)arg3;

@end
