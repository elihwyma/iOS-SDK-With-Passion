/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <UIKit/UIView.h>

@class CAShapeLayer, NSDate, NSTimer, OKProgressArcLayer;

@interface OKRoundProgressView : UIView

{
    CAShapeLayer *_sliceLayer;
    CAShapeLayer *_circleLayer;
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    OKProgressArcLayer *__progressArcLayer;
    double __contentsScale;
    double _progress;
    long long _style;
}

@property (retain, nonatomic, setter=_setProgressArcLayer:) OKProgressArcLayer *_progressArcLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (nonatomic, readonly) long long style;
@property (nonatomic) double progress;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_setupSubviews;
- (void)resetProgress;
- (void)setPieRadius:(double)arg1;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (void)stopProgressTimer;
- (double)toRadian:(double)arg1;
- (void)startProgressTimer;
- (void)recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;
- (void)_updateSublayersContentsScale;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;

@end
