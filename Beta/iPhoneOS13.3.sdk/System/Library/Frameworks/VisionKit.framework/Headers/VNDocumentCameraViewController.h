/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/UIViewController.h>

@protocol VNDocumentCameraViewControllerDelegate;

@interface VNDocumentCameraViewController : UIViewController

{
    id <VNDocumentCameraViewControllerDelegate> _delegate;
    UIViewController *_childViewController;
}

@property (retain, nonatomic, setter=setChildViewController:) UIViewController *childViewController;
@property (weak, nonatomic) id <VNDocumentCameraViewControllerDelegate> delegate;

+ (_Bool)isSupported;
+ (id)newDefaultViewController;
+ (id)newViewServiceViewController;
+ (id)newInProcessViewController;

- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (id)initWithChildViewController:(id)arg1;

@end
