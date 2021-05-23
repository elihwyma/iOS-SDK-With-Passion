/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDebuggingOverlayDetail.h>

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _UIDebuggingOverlayViewControllerDetail : _UIDebuggingOverlayDetail

{
    UIViewController *viewController;
}

@property (retain, nonatomic) UIViewController *viewController;

- (void)_updateForInspectedViewController:(id)arg1;

@end
