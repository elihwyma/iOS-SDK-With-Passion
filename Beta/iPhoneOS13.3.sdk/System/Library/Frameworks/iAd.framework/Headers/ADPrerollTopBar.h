/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIView.h>

@class ADPrerollButton, ADProgressView, UIStatusBar;

@protocol ADPrerollTopBarDelegate;

@interface ADPrerollTopBar : UIView

{
    _Bool _isFullscreen;
    _Bool _layoutForExpandedSize;
    id <ADPrerollTopBarDelegate> _delegate;
    UIStatusBar *_statusBar;
    ADPrerollButton *_doneButton;
    ADProgressView *_progressView;
}

@property (retain, nonatomic) UIStatusBar *statusBar;
@property (retain, nonatomic) ADPrerollButton *doneButton;
@property (retain, nonatomic) ADProgressView *progressView;
@property (weak, nonatomic) id <ADPrerollTopBarDelegate> delegate;
@property (nonatomic) _Bool isFullscreen;
@property (nonatomic) _Bool layoutForExpandedSize;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_doneButtonTapped:(id)arg1;
- (double)requiredHeight;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)_scaleToFillButtonTapped:(id)arg1;
- (void)_scaleToFitButtonTapped:(id)arg1;

@end
