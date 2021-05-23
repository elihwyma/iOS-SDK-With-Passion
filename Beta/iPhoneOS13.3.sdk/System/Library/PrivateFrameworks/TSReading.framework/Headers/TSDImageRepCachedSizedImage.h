/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSDImageRepCachedSizedImage : NSObject

{
    struct CGImage *mImageRef;
    struct CGPath *mImageMaskPath;
    _Bool mImageHasMaskBakedIn;
    _Bool mImageHasAdjustmentsBakedImage;
    long long mImageOrientation;
    struct CGSize mImageSize;
}

@property (nonatomic) struct CGImage *imageRef;
@property (nonatomic) struct CGPath *imageMaskPath;
@property (nonatomic) struct CGSize imageSize;
@property (nonatomic) long long imageOrientation;
@property (nonatomic) _Bool imageHasMaskBakedIn;
@property (nonatomic) _Bool imageHasAdjustmentsBakedImage;

- (void)dealloc;

@end
