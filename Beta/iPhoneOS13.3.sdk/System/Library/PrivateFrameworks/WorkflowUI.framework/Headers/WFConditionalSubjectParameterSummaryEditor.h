/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class HMHome, NSString, UIViewController, WFTextTokenChooser;

@interface WFConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor

{
    WFTextTokenChooser *_chooser;
    UIViewController *_presentedViewController;
    HMHome *_home;
}

@property (retain, nonatomic) WFTextTokenChooser *chooser;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)arg1;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)servicePickerDidFinish:(id)arg1 selectedServices:(id)arg2;
- (void)servicePickerDidCancel:(id)arg1;
- (void)beginVariableMenuForSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (id)stateByReplacingVariableFromInitialState:(id)arg1 withVariable:(id)arg2;
- (void)presentHomePickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (void)presentServicePickerFromSourceViewController:(id)arg1 home:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)presentCharacteristicPickerFromSourceViewController:(id)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect)arg3;
- (id)contextHome;

@end
