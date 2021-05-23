/*
 Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

#import <Foundation/NSObject.h>

@class CIBurstYUVImage, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CIBurstThumbnailCluster : NSObject

{
    NSMutableArray *burstImages;
    CDUnknownBlockType completionBlock;
    NSMutableDictionary *imageProps;
    CIBurstYUVImage *image;
    struct __IOSurface *_fullsizeJpegData;
}

@property NSMutableArray *burstImages;
@property NSMutableDictionary *imageProps;
@property CIBurstYUVImage *image;
@property struct __IOSurface *fullsizeJpegData;
@property CDUnknownBlockType completionBlock;

- (id)init;
- (void)dealloc;
- (void)releaseImage;
- (id)initWithImageData:(id)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addItemsFromCluster:(id)arg1;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;

@end
