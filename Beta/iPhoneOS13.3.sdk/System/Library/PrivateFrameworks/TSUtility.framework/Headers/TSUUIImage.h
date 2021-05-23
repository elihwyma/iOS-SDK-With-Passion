/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUImage.h>

@class UIImage;

@interface TSUUIImage : TSUImage

{
    UIImage *mUIImage;
}

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;
- (struct CGSize)size;
- (double)scale;
- (long long)imageOrientation;
- (struct CGImage *)CGImage;
- (id)UIImage;
- (id)initWithUIImage:(id)arg1;
- (struct CGImage *)CGImageForSize:(struct CGSize)arg1;

@end
