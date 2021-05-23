/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@protocol SBLockOverlayViewControllerDelegate;

@interface SBLockOverlayViewController : UIViewController

{
    id <SBLockOverlayViewControllerDelegate> _delegate;
}

@property (weak, nonatomic) id <SBLockOverlayViewControllerDelegate> delegate;
@property (nonatomic, readonly) _Bool shouldBeHidden;

- (id)overlayView;

@end
