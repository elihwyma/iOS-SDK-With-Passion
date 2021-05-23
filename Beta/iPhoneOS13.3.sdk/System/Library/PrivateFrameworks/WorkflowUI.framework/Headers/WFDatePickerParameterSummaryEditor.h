/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFModuleSummaryEditor.h>

@class NSString, UIDatePicker, UIView, UIViewController, WFNonViewResponder, WFVariableInputCoordinator;

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor

{
    _Bool _isPickingMagicVariable;
    UIViewController *_presentedViewController;
    UIView *_sourceView;
    UIDatePicker *_datePicker;
    WFNonViewResponder *_datePickerResponder;
    WFVariableInputCoordinator *_variableCoordinator;
}

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) WFNonViewResponder *datePickerResponder;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) _Bool isPickingMagicVariable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)setVariableProvider:(id)arg1;
- (void)beginEditingSlotWithIdentifier:(id)arg1 sourceViewController:(id)arg2 sourceView:(id)arg3 sourceRect:(struct CGRect)arg4;
- (void)cancelEditingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)showActionOutputPickerFromSourceResponder:(id)arg1 allowExtensionInput:(_Bool)arg2 variableProvider:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)revealAction:(id)arg1 fromSourceView:(id)arg2 preScrollHandler:(CDUnknownBlockType)arg3 goBackHandler:(CDUnknownBlockType)arg4 scrolledAwayHandler:(CDUnknownBlockType)arg5;
- (void)setVariableUIDelegate:(id)arg1;
- (void)sourceViewTintColorDidChange;
- (void)responderWillResign:(id)arg1;
- (void)datePickerValueChanged:(id)arg1;

@end
