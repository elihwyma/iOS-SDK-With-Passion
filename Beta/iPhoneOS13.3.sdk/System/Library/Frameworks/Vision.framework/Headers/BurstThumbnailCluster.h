/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BurstThumbnailCluster : NSObject

{
    struct __CVBuffer *_imagePixelBuffer;
    CDUnknownBlockType _completionBlock;
    NSMutableArray *_burstImages;
    NSMutableDictionary *_imageProps;
}

@property (retain) NSMutableArray *burstImages;
@property (retain) NSMutableDictionary *imageProps;
@property (copy) CDUnknownBlockType completionBlock;
@property struct __CVBuffer *imagePixelBuffer;

- (id)init;
- (void)dealloc;
- (id)initWithImageData:(struct __CVBuffer *)arg1 dict:(id)arg2 identifier:(id)arg3 imageProps:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)addItemsFromCluster:(id)arg1;
- (float)computeMergeCost:(id)arg1:(int *)arg2:(int)arg3;

@end
