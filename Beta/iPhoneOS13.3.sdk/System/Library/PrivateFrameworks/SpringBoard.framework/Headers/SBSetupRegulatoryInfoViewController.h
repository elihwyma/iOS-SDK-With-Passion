/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIViewController.h>

@class UIImageView, UIScrollView;

@interface SBSetupRegulatoryInfoViewController : UIViewController

{
    UIScrollView *_containerView;
    UIImageView *_regulatoryImageView;
}

- (void)loadView;
- (_Bool)_canShowWhileLocked;

@end
