/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@interface FxContext : NSObject

{
    struct FxContextPriv *_priv;
}

+ (id)contextWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
+ (id)contextForCGImageWithOptions:(id)arg1;
+ (id)contextForGLTextureWithOptions:(id)arg1;
+ (id)contextWithFxBitmapImage:(id)arg1 options:(id)arg2;
+ (id)contextForCIImageWithOptions:(id)arg1;

- (void)dealloc;
- (id)options;
- (void)setOptions:(id)arg1;
- (id)initWithCGContext:(struct CGContext *)arg1 options:(id)arg2;
- (int)contextType;
- (id)ciImage;
- (struct CGImage *)cgImage;
- (struct CGContext *)cgContext;
- (id)initForCGImageWithOptions:(id)arg1;
- (id)initForGLTextureWithOptions:(id)arg1;
- (id)initWithFxBitmapImage:(id)arg1 options:(id)arg2;
- (id)initForCIImageWithOptions:(id)arg1;
- (void)setCGImage:(struct CGImage *)arg1;
- (void)setGLTexture:(unsigned long long)arg1 size:(struct CGSize)arg2 flipped:(_Bool)arg3 colorSpace:(struct CGColorSpace *)arg4;
- (unsigned long long)glTexture;
- (struct CGSize)glTextureSize;
- (_Bool)glTextureIsFlipped;
- (struct CGColorSpace *)glTextureColorSpace;
- (id)derivedCIContext;
- (void)setCIImage:(id)arg1;
- (id)bitmap;
- (void)drawFxSample:(id)arg1 withRegionOfInterest:(id)arg2;

@end
