/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIView.h>

@class CAShapeLayer;

@protocol HUPieProgressViewDelegate;

@interface HUPieProgressView : UIView

{
    _Bool _hidesWhenStopped;
    _Bool _isAnimating;
    id <HUPieProgressViewDelegate> _delegate;
    long long _style;
    double _indeterminateMaxProgress;
    double _indeterminateExpectedDuration;
    double _progressLineWidth;
    CAShapeLayer *_outlineLayer;
    CAShapeLayer *_progressLayer;
}

@property (retain, nonatomic) CAShapeLayer *outlineLayer;
@property (retain, nonatomic) CAShapeLayer *progressLayer;
@property (nonatomic) _Bool isAnimating;
@property (nonatomic) double progress;
@property (weak, nonatomic) id <HUPieProgressViewDelegate> delegate;
@property (nonatomic) long long style;
@property (nonatomic) double indeterminateMaxProgress;
@property (nonatomic) double indeterminateExpectedDuration;
@property (nonatomic) double outlineLineWidth;
@property (nonatomic) double progressLineWidth;
@property (nonatomic) _Bool hidesWhenStopped;

- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void)_fadeOut;
- (void)resetProgress;
- (void)_fadeIn;
- (void)_updateLayerPaths;
- (id)_setupOutlineLayer;
- (id)_setupProgressLayer;
- (void)_setDefaults;
- (void)_updateProgressLayerLineWidth;
- (void)startWithFuture:(id)arg1;

@end
