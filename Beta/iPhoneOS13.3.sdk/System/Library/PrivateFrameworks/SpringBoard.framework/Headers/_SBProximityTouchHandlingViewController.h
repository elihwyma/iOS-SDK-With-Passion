/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@protocol _SBProximityTouchHandlingDelegate;

@interface _SBProximityTouchHandlingViewController : UIViewController

{
    double _statusBarHeight;
}

@property (nonatomic) id <_SBProximityTouchHandlingDelegate> delegate;
@property (nonatomic) double statusBarHeight;

- (id)_view;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;

@end
