/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TSDBitmapRenderingQualityInfo : NSObject

{
    int mQuality;
    float mCanvasScale;
    NSMutableDictionary *mImageMap;
}

@property (nonatomic, readonly) int quality;

- (void)dealloc;
- (void)cacheProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (struct CGImage *)degradedImageRefForProvider:(id)arg1 ofSize:(struct CGSize)arg2;
- (id)initWithQuality:(int)arg1 canvasScale:(float)arg2;

@end
