/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSTimer, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUIImageProxyAnimator : NSObject

{
    _Bool _animating;
    _Bool _cachingEnabled;
    NSArray *_imageProxies;
    unsigned long long _animationOptions;
    double _animationDuration;
    double _transitionInterval;
    unsigned long long _displayImageIndex;
    unsigned long long _indexOfFetchedImage;
    _TVImageView *_imageView;
    NSTimer *_transitionTimer;
}

@property (nonatomic) unsigned long long displayImageIndex;
@property (nonatomic) unsigned long long indexOfFetchedImage;
@property (retain, nonatomic) _TVImageView *imageView;
@property (weak, nonatomic) NSTimer *transitionTimer;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic, getter=isCachingEnabled) _Bool cachingEnabled;
@property (copy, nonatomic) NSArray *imageProxies;
@property (nonatomic) unsigned long long animationOptions;
@property (nonatomic) double animationDuration;
@property (nonatomic) double transitionInterval;

- (id)init;
- (void)startAnimation;
- (void)stopAnimation;
- (void)_setImage:(id)arg1 animated:(_Bool)arg2;
- (id)initWithImageView:(id)arg1 andProxies:(id)arg2;
- (void)_fetchNext;
- (void)_displayIntervalTimerFired:(id)arg1;
- (void)_updateImageWithIndex:(unsigned long long)arg1;
- (void)loadImageProxy:(id)arg1 withWeakObject:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
