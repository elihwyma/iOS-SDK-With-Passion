/*
 Image: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
 */

#import <UIKit/UIViewController.h>

@protocol DCDocumentCameraViewControllerDelegate;

@interface DCDocumentCameraViewController : UIViewController

{
    UIViewController *_childViewController;
    id <DCDocumentCameraViewControllerDelegate> _docCamDelegate;
}

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id <DCDocumentCameraViewControllerDelegate> docCamDelegate;

+ (_Bool)isAvailable;
+ (id)defaultViewControllerWithDelegate:(id)arg1;
+ (id)viewServiceViewControllerWithDelegate:(id)arg1;
+ (id)inProcessViewControllerWithDelegate:(id)arg1;

- (id)initWithCoder:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDelegate:(id)arg1 childViewController:(id)arg2;

@end
