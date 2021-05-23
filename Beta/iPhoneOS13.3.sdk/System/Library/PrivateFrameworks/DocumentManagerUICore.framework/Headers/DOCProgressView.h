/*
 Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

#import <UIKit/UIView.h>

@class DOCDeterminateProgressRingView, DOCGhostRingView, DOCIndeterminateProgressRingView, NSOperationQueue, NSProgress, UIColor, UITapGestureRecognizer;

@interface DOCProgressView : UIView

{
    NSOperationQueue *_pendingAnimationQueue;
    _Bool _canShowStopButton;
    _Bool _graduallyIncreasingProgress;
    UIColor *_inactiveStrokeColor;
    UIColor *_activeStrokeColor;
    NSProgress *_observedProgress;
    DOCGhostRingView *_ghostRingView;
    DOCDeterminateProgressRingView *_determinateProgressRingView;
    DOCIndeterminateProgressRingView *_indeterminateProgressRingView;
    double _progress;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property (retain, nonatomic) DOCGhostRingView *ghostRingView;
@property (retain, nonatomic) DOCDeterminateProgressRingView *determinateProgressRingView;
@property (retain, nonatomic) DOCIndeterminateProgressRingView *indeterminateProgressRingView;
@property (nonatomic) double progress;
@property (nonatomic) _Bool graduallyIncreasingProgress;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (copy, nonatomic) UIColor *inactiveStrokeColor;
@property (copy, nonatomic) UIColor *activeStrokeColor;
@property (retain, nonatomic) NSProgress *observedProgress;
@property (nonatomic) _Bool canShowStopButton;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_commonInit;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleTap:(id)arg1;
- (void)_updateStatusPropertiesAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setProgress:(double)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_addToPendingAnimationQueue:(CDUnknownBlockType)arg1;
- (void)beginGraduallyIncreasingProgress;
- (void)fadeoutWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateToFullRingAndHideWithCompletion:(CDUnknownBlockType)arg1;

@end
