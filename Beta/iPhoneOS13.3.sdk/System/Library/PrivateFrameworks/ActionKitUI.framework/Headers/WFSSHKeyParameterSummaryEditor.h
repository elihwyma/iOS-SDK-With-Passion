/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class NSString, WFSSHKeyConfigurationViewController;

__attribute__((visibility("hidden")))
@interface WFSSHKeyParameterSummaryEditor : WFModuleSummaryEditor

{
    WFSSHKeyConfigurationViewController *_viewController;
}

@property (weak, nonatomic) WFSSHKeyConfigurationViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)completeEditing;
- (void)keyConfigurationViewControllerDidFinish:(id)arg1;

@end
