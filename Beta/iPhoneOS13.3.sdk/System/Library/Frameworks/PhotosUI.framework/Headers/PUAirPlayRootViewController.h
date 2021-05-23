/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIViewController.h>

@class NSArray;

@interface PUAirPlayRootViewController : UIViewController

{
    UIViewController *_childViewController;
    NSArray *__childViewConstraints;
}

@property (copy, nonatomic, setter=_setChildViewConstraints:) NSArray *_childViewConstraints;
@property (retain, nonatomic) UIViewController *childViewController;

- (void)viewDidLoad;
- (void)updateViewConstraints;
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;

@end
