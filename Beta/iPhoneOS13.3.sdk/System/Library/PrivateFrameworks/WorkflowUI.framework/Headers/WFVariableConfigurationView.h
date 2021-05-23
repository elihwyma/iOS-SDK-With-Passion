/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIInputView.h>

@class NSString, UINavigationController, WFVariableConfigurationViewController;

@interface WFVariableConfigurationView : UIInputView

{
    WFVariableConfigurationViewController *_viewController;
    UINavigationController *_navigationController;
}

@property (nonatomic, readonly) UINavigationController *navigationController;
@property (nonatomic, readonly) WFVariableConfigurationViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithVariable:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)preferredHeight;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;

@end
