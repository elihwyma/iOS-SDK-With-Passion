/*
 Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

#import <UIKit/UIViewController.h>

@class CACLabeledGridOverlayView;

@interface CACLabeledGridOverlayViewController : UIViewController

{
    _Bool _showsElementsAsClickable;
    CACLabeledGridOverlayView *_gridOverlayView;
}

@property (retain, nonatomic) CACLabeledGridOverlayView *gridOverlayView;
@property (nonatomic) _Bool showsNumbersInTopLeft;
@property (nonatomic, readonly) _Bool isSmallEnoughForZooming;
@property (nonatomic) _Bool showsElementsAsClickable;
@property (nonatomic, readonly) long long zOrder;
@property (nonatomic, readonly) _Bool isOverlay;

- (void)loadView;
- (void)show;
- (_Bool)_canShowWhileLocked;
- (void)hide;
- (void)setLabeledElements:(id)arg1;
- (void)zoomOverRegion:(struct CGRect)arg1;

@end
