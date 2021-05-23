/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBZoomView.h>

@class SBFullscreenZoomView, UIView;

@interface SBClippedZoomView : SBZoomView

{
    SBFullscreenZoomView *_fullscreenZoomViewToClip;
    UIView *_clippingView;
}

- (id)initWithClippingFrame:(struct CGRect)arg1 fullscreenZoomView:(id)arg2;

@end
