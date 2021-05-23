/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <UIKit/UIView.h>

@class NSString, UIColor, WBSFluidProgressState;

@protocol _SFFluidProgressViewDelegate;

@interface _SFFluidProgressView : UIView

{
    UIView *_progressBar;
    UIView *_clippingView;
    WBSFluidProgressState *_state;
    _Bool _progressAnimationSuppressed;
    id <_SFFluidProgressViewDelegate> _delegate;
    UIColor *_progressBarFillColor;
    double _cornerRadius;
}

@property (nonatomic) _Bool progressAnimationSuppressed;
@property (weak, nonatomic) id <_SFFluidProgressViewDelegate> delegate;
@property (nonatomic, readonly, getter=isShowingProgress) _Bool showingProgress;
@property (retain, nonatomic) UIColor *progressBarFillColor;
@property (nonatomic) double cornerRadius;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)_progressBarBoundsForValue:(double)arg1;
- (void)_finishProgressBarWithDuration:(double)arg1;
- (void)fluidProgressController:(id)arg1 updateFluidProgressBar:(id)arg2;
- (void)_animateUsingDefaultTiming:(_Bool)arg1 stepAnimationTime:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fluidProgressController:(id)arg1 startFluidProgressBar:(id)arg2 animateFillFade:(_Bool)arg3;
- (void)fluidProgressControllerFinishProgressBar:(id)arg1 animateFillFade:(_Bool)arg2;
- (void)fluidProgressController:(id)arg1 setProgressToCurrentPosition:(id)arg2;
- (void)setProgressAnimationSuppressed:(_Bool)arg1 duringFluidProgressState:(id)arg2 animated:(_Bool)arg3;

@end
