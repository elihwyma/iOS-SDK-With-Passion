/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIDebuggingOverlayViewControllerDetail.h>

@class UIDebuggingIvarViewController;

__attribute__((visibility("hidden")))
@interface _UIDebuggingOverlayDetailIvar : _UIDebuggingOverlayViewControllerDetail

{
    UIDebuggingIvarViewController *_vc;
}

- (id)viewController;
- (void)_updateForInspectedView:(id)arg1;
- (void)_updateForInspectedViewController:(id)arg1;
- (void)_createVCIfNecessary;

@end
