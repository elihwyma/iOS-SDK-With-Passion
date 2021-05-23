/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class TSDFrameSpec;

@interface TSDFrameImageCacheEntry : NSObject

{
    TSDFrameSpec *mFrameSpec;
    double mAssetScale;
    struct CGSize mSize;
    double mViewScale;
    struct CGImage *mImages[4];
}

@property (nonatomic) TSDFrameSpec *frameSpec;
@property (nonatomic) double assetScale;
@property (nonatomic) struct CGSize size;
@property (nonatomic) double viewScale;

- (void)dealloc;
- (struct CGImage *)newImageForCALayer:(_Bool)arg1 mask:(_Bool)arg2;
- (void)setImage:(struct CGImage *)arg1 forCALayer:(_Bool)arg2 mask:(_Bool)arg3;

@end
