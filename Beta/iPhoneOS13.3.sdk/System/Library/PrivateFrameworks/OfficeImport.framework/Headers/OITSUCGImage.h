/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/OITSUImage.h>

__attribute__((visibility("hidden")))
@interface OITSUCGImage : OITSUImage

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
