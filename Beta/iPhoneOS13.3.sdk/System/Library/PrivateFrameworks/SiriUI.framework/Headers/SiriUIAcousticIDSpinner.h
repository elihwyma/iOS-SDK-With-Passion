/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <UIView.h>

@class UIImageView, UIVisualEffectView;

@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : UIView

{
    UIImageView *_musicNoteView;
    UIImageView *_spinnerView;
    UIVisualEffectView *_vibrancyView;
    id <SiriUIAcousticIDSpinnerDelegate> _delegate;
}

@property (weak, nonatomic) id <SiriUIAcousticIDSpinnerDelegate> delegate;

- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isShowing;
- (void)animateIn;
- (void)animateOut;
- (id)_imageForSpinner;
- (id)_spinningAnimation;

@end
