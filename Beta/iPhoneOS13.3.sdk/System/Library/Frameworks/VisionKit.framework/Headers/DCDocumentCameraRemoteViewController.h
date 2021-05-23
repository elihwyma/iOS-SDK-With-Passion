/*
 Image: /System/Library/Frameworks/VisionKit.framework/VisionKit
 */

#import <UIKit/_UIRemoteViewController.h>

@class UIViewController;

@protocol DCDocumentCameraPublicViewController, DCDocumentCameraViewServiceViewController;

__attribute__((visibility("hidden")))
@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController

{
    UIViewController<DCDocumentCameraPublicViewController> *_publicViewController;
}

@property (weak, nonatomic) UIViewController<DCDocumentCameraPublicViewController> *publicViewController;
@property (nonatomic, readonly, getter=viewServiceViewController) id <DCDocumentCameraViewServiceViewController> viewServiceViewController;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void)dismiss;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)didCancel:(id)arg1;
- (void)viewServicePreferredSizeDidChange:(struct CGSize)arg1;
- (void)viewControllerWasDismissed;
- (void)didFinishWithDocumentInfoCollection:(id)arg1;

@end
