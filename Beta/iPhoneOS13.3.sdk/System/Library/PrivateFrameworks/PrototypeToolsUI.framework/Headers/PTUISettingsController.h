/*
 Image: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
 */

#import <UIKit/UINavigationController.h>

@class UIBarButtonItem;

@interface PTUISettingsController : UINavigationController

{
    UIBarButtonItem *_dismissButton;
}

@property (retain, nonatomic) UIBarButtonItem *dismissButton;

- (void)_dismiss;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithRootSettings:(id)arg1;
- (id)initWithRootModuleController:(id)arg1;
- (id)_defaultDismissButton;
- (void)_reloadRootModule;

@end
