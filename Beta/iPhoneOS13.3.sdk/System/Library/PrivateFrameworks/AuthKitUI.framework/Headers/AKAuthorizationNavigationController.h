/*
 Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

#import <UIKit/UINavigationController.h>

@class _UIBackdropView;

@interface AKAuthorizationNavigationController : UINavigationController

{
    _UIBackdropView *_backdropView;
    long long _currentStyle;
}

- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)_updateStyleIfNeeded;

@end
