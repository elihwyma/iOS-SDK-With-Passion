/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class SXAnimatedImageViewCache;

@interface SXAnimatedImageFrame : NSObject

{
    SXAnimatedImageViewCache *_cache;
    struct CGImageSource *_imageSource;
    double _duration;
    unsigned long long _index;
    long long _imageType;
}

@property (nonatomic, readonly) struct CGImageSource *imageSource;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) long long imageType;

- (void)dealloc;
- (id)image;
- (void)captureFrameProperties;
- (id)initWithImageSource:(struct CGImageSource *)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4;

@end
