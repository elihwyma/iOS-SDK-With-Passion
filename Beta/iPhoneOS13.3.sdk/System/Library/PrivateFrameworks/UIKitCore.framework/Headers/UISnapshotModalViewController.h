/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UINavigationController;

__attribute__((visibility("hidden")))
@interface UISnapshotModalViewController : UIViewController

{
    long long _interfaceOrientation;
    UIViewController *_disappearingViewController;
    UINavigationController *_parentController;
}

@property (retain, nonatomic) UIViewController *disappearingViewController;

- (void)viewWillDisappear:(_Bool)arg1;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)initWithInterfaceOrientation:(long long)arg1;

@end
