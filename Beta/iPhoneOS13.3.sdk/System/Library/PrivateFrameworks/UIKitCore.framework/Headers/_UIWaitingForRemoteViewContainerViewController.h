/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface _UIWaitingForRemoteViewContainerViewController : UIViewController

{
    UIActivityIndicatorView *_loadingSpinner;
}

@property (retain, nonatomic) UIActivityIndicatorView *loadingSpinner;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)stopSpinner;

@end
