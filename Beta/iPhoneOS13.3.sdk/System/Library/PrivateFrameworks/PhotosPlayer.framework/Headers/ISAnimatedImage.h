/*
 Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

#import <Foundation/NSObject.h>

@class ISFrameCache;

@interface ISAnimatedImage : NSObject

{
    struct CGImageSource *_imageSource;
    double *_frameDelayTimes;
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    double _duration;
    ISFrameCache *_frameCache;
    struct CGSize _pixelSize;
}

@property (nonatomic, readonly) ISFrameCache *frameCache;
@property (nonatomic) long long cacheStrategy;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CGSize pixelSize;

- (id)init;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (id)initWithImageSource:(struct CGImageSource *)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithData:(id)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2;
- (id)initWithImageSource:(struct CGImageSource *)arg1 cachingStrategy:(long long)arg2 useGlobalDecodeQueue:(_Bool)arg3;
- (double)frameDelayAtIndex:(unsigned long long)arg1;
- (void)_preloadDelayTimes;

@end
