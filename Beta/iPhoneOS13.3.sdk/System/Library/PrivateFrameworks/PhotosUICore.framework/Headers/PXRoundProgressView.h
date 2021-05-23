/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UIView.h>

@class CALayer, CAShapeLayer, NSDate, NSTimer, PXProgressArcLayer;

@interface PXRoundProgressView : UIView

{
    struct CGPoint _pieCenter;
    double _pieRadius;
    NSTimer *_progressTimer;
    double _uiProgress;
    double _realProgress;
    double _increaseRate;
    NSDate *_prevUpdateTime;
    long long _style;
    double _progress;
    UIView *__contentView;
    CAShapeLayer *__sliceLayer;
    CAShapeLayer *__circleLayer;
    PXProgressArcLayer *__progressArcLayer;
    CALayer *__irisGlyphLayer;
    double __contentsScale;
}

@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView;
@property (retain, nonatomic, setter=_setSliceLayer:) CAShapeLayer *_sliceLayer;
@property (retain, nonatomic, setter=_setCircleLayer:) CAShapeLayer *_circleLayer;
@property (retain, nonatomic, setter=_setProgressArcLayer:) PXProgressArcLayer *_progressArcLayer;
@property (retain, nonatomic, setter=_setIrisGlyphLayer:) CALayer *_irisGlyphLayer;
@property (nonatomic, setter=_setContentsScale:) double _contentsScale;
@property (nonatomic) long long style;
@property (nonatomic) double progress;

+ (double)toRadian:(double)arg1;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_updateSubviews;
- (void)resetProgress;
- (void)_updateUIProgress;
- (void)increaseUIProgress:(id)arg1;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)_updateSublayersContentsScale;
- (void)setInitialIncreaseRatePerFrame:(double)arg1;
- (void)_setPieRadius:(double)arg1;
- (void)_recalculateIncreaseProgress:(double)arg1 withTimeDiff:(double)arg2;

@end
