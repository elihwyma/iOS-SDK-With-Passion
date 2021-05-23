/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <ComponentKit/CKComponentController.h>

@class NSString;

@interface WFAppPickerParameterComponentController : CKComponentController

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)buttonTapped:(id)arg1;
- (void)parameterLayoutTapped:(id)arg1;
- (void)appSearchViewController:(id)arg1 didFinishWithApp:(id)arg2;
- (void)appSearchViewControllerDidCancel:(id)arg1;

@end
