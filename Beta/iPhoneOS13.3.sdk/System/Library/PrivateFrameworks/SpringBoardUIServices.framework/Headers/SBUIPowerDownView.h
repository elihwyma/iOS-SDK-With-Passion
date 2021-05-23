/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

#import <UIKit/UIView.h>

@class NSString, NSTimer, SBUIShapeView, UIButton, UILabel, _UIActionSlider;

@protocol SBUIPowerDownViewDelegate;

@interface SBUIPowerDownView : UIView

{
    NSTimer *_autoDismissTimer;
    UIView *_backdropView;
    SBUIShapeView *_darkeningUnderlayView;
    UIView *_darkeningOverlayView;
    _UIActionSlider *_actionSlider;
    UIButton *_cancelButton;
    UILabel *_cancelLabel;
    id <SBUIPowerDownViewDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBUIPowerDownViewDelegate> delegate;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)showAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1 vibrantSettings:(id)arg2;
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;
- (void)actionSliderDidCompleteSlide:(id)arg1;
- (void)actionSliderDidCancelSlide:(id)arg1;
- (void)actionSliderDidBeginSlide:(id)arg1;
- (void)_idleTimerFired;
- (void)_cancelButtonTapped;
- (void)_cancelAutoDismissTimer;
- (void)_updateSliderExclusionPath;
- (void)_willAnimateIn;
- (void)_resetAutoDismissTimer;
- (void)_willAnimateOut;
- (_Bool)_isLandscapeAspectRatio;
- (void)_powerDownSliderDidBeginSlide;
- (void)_powerDownSliderDidUpdateSlideWithValue:(double)arg1;
- (void)_powerDownSliderDidCompleteSlide;
- (void)_powerDownSliderDidCancelSlide;
- (void)_animatePowerDown;
- (void)_notifyDelegateCancelled;
- (void)_notifyDelegatePowerDown;
- (void)hideAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

@end
