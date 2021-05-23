/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIViewController.h>

@class _UISearchControllerLimitedAccessView;

__attribute__((visibility("hidden")))
@interface _UISearchControllerLimitedUIShieldViewController : UIViewController

{
    CDUnknownBlockType _dismissAction;
    _UISearchControllerLimitedAccessView *_limitedAccessView;
}

@property (retain, nonatomic) _UISearchControllerLimitedAccessView *limitedAccessView;
@property (copy, nonatomic) CDUnknownBlockType dismissAction;

- (void)dealloc;
- (void)viewDidLoad;
- (void)_backButtonPressed:(id)arg1;

@end
