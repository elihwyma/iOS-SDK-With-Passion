/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <TVMLKit/_TVLabel.h>

@class CALayer, NSArray, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel

{
    _Bool _crossfading;
    _Bool _marqueeNeeded;
    _Bool _marqueeing;
    _Bool _starting;
    _Bool _stopping;
    CALayer *_maskLayer;
    _Bool _animating;
    _Bool _paused;
    float _scrollRate;
    double _marqueeDelay;
    double _replicationPadding;
    double _maskCapWidth;
    double _crossfadeDuration;
    NSArray *_attributedStrings;
    unsigned long long _currentAttributedStringIndex;
    double _underPosterOutset;
    __TVAnimatedImageView *_currentMarqueeView;
    __TVAnimatedImageView *_nextMarqueeView;
}

@property (weak, nonatomic, readonly) __TVAnimatedImageView *currentMarqueeView;
@property (weak, nonatomic, readonly) __TVAnimatedImageView *nextMarqueeView;
@property (nonatomic, getter=isAnimating) _Bool animating;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) double marqueeDelay;
@property (nonatomic) double replicationPadding;
@property (nonatomic) double maskCapWidth;
@property (nonatomic) float scrollRate;
@property (nonatomic) double crossfadeDuration;
@property (copy, nonatomic) NSArray *attributedStrings;
@property (nonatomic, readonly) unsigned long long currentAttributedStringIndex;
@property (nonatomic) double underPosterOutset;

- (void)dealloc;
- (void)setText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMarqueeEnabled:(_Bool)arg1;
- (void)setMarqueeRunning:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setNeedsDisplay;
- (_Bool)_isRTL;
- (void)stopAnimating;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_clearAnimations;
- (id)_rasterizedTextWithMarquee:(_Bool)arg1;
- (void)_startMarqueeIfNeeded;
- (_Bool)_shouldCycle;
- (void)_prepareNextMarqueeWithDelay:(double)arg1;
- (void)_clearAttributedStrings;
- (void)stopAnimatingWithoutResetWithDuration:(double)arg1;
- (void)stopAndResetScrollWithDuration:(double)arg1;

@end
