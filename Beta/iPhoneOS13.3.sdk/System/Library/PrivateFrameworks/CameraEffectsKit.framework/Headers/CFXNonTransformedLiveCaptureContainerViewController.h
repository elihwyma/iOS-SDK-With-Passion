/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <UIKit/UIViewController.h>

@class CFXLiveCaptureViewController, UIView;

@interface CFXNonTransformedLiveCaptureContainerViewController : UIViewController

{
    UIView *_liveCaptureContainer;
    UIView *_liveCaptureContainerContainer;
    CFXLiveCaptureViewController *_liveCaptureViewController;
}

@property (retain, nonatomic) UIView *liveCaptureContainer;
@property (retain, nonatomic) UIView *liveCaptureContainerContainer;
@property (nonatomic, readonly) CFXLiveCaptureViewController *liveCaptureViewController;

- (void)viewDidLoad;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;

@end
