/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView

{
    _UIBackdropView *_backdropView;
    SBLockOverlayView *_overlayView;
}

@property (nonatomic, readonly) SBLockOverlayView *overlayView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 overlayView:(id)arg2;

@end
