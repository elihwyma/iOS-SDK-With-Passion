/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSString, WFVariableEditingContext;

@interface WFTextInputComponentController : CKStatefulViewComponentController <Swift>

{
    WFVariableEditingContext *_editingContext;
}

@property (retain, nonatomic) WFVariableEditingContext *editingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;
+ (id)contextForNewStatefulView:(id)arg1;

- (id)field;
- (void)textDidChange;
- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)textTokenEditorTextDidBeginEditing:(id)arg1;
- (void)textTokenEditorTextDidChange:(id)arg1;
- (void)textTokenEditorTextDidEndEditing:(id)arg1;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)textDidChangeThrottled;

@end
