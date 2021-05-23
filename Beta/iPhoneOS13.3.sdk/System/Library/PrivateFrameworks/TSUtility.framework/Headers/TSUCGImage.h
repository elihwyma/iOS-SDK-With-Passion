/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUImage.h>

@interface TSUCGImage : TSUImage

{
    struct CGImage *mCGImage;
    long long mOrientation;
    double mScale;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGSize)size;
- (double)scale;
- (long long)imageOrientation;
- (struct CGImage *)CGImage;
- (id)initWithCGImage:(struct CGImage *)arg1 scale:(double)arg2 orientation:(long long)arg3;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;

@end
