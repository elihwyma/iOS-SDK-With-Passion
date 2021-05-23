/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBLockOverlayView.h>

@class UIImageView;

@interface SBLockScreenTemperatureWarningView : SBLockOverlayView

{
    UIImageView *_warningIconView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)_titleFont;
- (id)_subtitleFont;
- (double)_titleBaseline;
- (double)_subtitleBaseline;
- (double)_iconYPosition;

@end
