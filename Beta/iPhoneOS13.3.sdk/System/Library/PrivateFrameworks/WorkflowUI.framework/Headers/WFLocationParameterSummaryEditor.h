/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class NSString, UIViewController;

@interface WFLocationParameterSummaryEditor : WFModuleSummaryEditor

{
    UIViewController *_presentedViewController;
}

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)locationPicker:(id)arg1 didFinishWithValue:(id)arg2;
- (void)locationPickerDidCancel:(id)arg1;

@end
