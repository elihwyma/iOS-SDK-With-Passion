/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class ISAnimatedImage;

@interface PHAnimatedImage : NSObject

{
    unsigned long long _frameCount;
    unsigned long long _loopCount;
    double _duration;
    unsigned long long _pixelWidth;
    unsigned long long _pixelHeight;
    ISAnimatedImage *_is_animatedImage;
}

@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long pixelWidth;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) ISAnimatedImage *is_animatedImage;

+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)cancelAnimatedImageRequest:(long long)arg1;

- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(_Bool)arg3;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;

@end
