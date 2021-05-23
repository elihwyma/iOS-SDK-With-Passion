/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <UIKit/UIViewController.h>

@class UIButton;

@interface HUCameraPlayerFooterViewController : UIViewController

{
    UIButton *_liveButton;
    UIButton *_nearbyAccessoryButton;
}

@property (retain, nonatomic) UIButton *liveButton;
@property (retain, nonatomic) UIButton *nearbyAccessoryButton;

- (void)viewDidLoad;
- (id)platterWithView:(id)arg1;

@end
