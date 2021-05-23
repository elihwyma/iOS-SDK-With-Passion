/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKStatefulViewComponentController.h>

@class NSString, WFListEditingContext;

@interface WFDictionaryEditorComponentController : CKStatefulViewComponentController

{
    WFListEditingContext *_editingContext;
}

@property (retain, nonatomic) WFListEditingContext *editingContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)newStatefulView:(id)arg1;
+ (void)configureStatefulView:(id)arg1 forComponent:(id)arg2;

- (void)didAcquireStatefulView:(id)arg1;
- (void)willRelinquishStatefulView:(id)arg1;
- (void)componentTreeWillAppear;
- (void)componentTreeDidDisappear;
- (void)listEditorView:(id)arg1 didUpdateWithItem:(id)arg2;

@end
