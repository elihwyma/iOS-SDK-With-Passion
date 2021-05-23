/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, SXAnimatedImageViewCache;

@protocol SXAnimatedImageDelegate;

@interface SXAnimatedImage : NSObject

{
    _Bool _invalidFile;
    id <SXAnimatedImageDelegate> _delegate;
    struct CGImageSource *_imageSource;
    double _scale;
    unsigned long long _numberOfFrames;
    double _duration;
    unsigned long long _loopCount;
    unsigned long long _uncompressedByteSizePerFrame;
    long long _imageType;
    long long _preloadType;
    NSArray *_frames;
    SXAnimatedImageViewCache *_cache;
    struct CGSize _imageSize;
}

@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, readonly) SXAnimatedImageViewCache *cache;
@property (weak, nonatomic) id <SXAnimatedImageDelegate> delegate;
@property (nonatomic, readonly) struct CGImageSource *imageSource;
@property (nonatomic, readonly) double scale;
@property (nonatomic, readonly) unsigned long long numberOfFrames;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) struct CGSize imageSize;
@property (nonatomic, readonly) unsigned long long uncompressedByteSizePerFrame;
@property (nonatomic, readonly) _Bool invalidFile;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) long long preloadType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animatedImageWithData:(id)arg1 size:(struct CGSize)arg2;
+ (id)animatedImageWithURL:(id)arg1 scale:(double)arg2 type:(long long)arg3;
+ (id)animatedImageWithData:(id)arg1 scale:(double)arg2 size:(struct CGSize)arg3;
+ (id)animatedImageWithURL:(id)arg1 type:(long long)arg2;

- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)animatedImageViewCache:(id)arg1 didCacheImageForFrameIndex:(unsigned long long)arg2;
- (id)initWithDataProvider:(struct CGDataProvider *)arg1 scale:(double)arg2 type:(long long)arg3 size:(struct CGSize)arg4;
- (id)initWithImageSource:(struct CGImageSource *)arg1 scale:(double)arg2 type:(long long)arg3 size:(struct CGSize)arg4;
- (void)capturePropertiesForType:(long long)arg1;
- (void)generateFrames;
- (id)frameAtIndex:(unsigned long long)arg1 returnNearestPreloaded:(_Bool)arg2;
- (id)frameAtIndex:(unsigned long long)arg1;
- (void)setPreloadType:(long long)arg1 currentFrameIndex:(unsigned long long)arg2;
- (void)suspendPreloading;
- (void)resumePreloading;

@end
