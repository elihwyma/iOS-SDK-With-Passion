/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <UIKit/UIAlertController.h>

@class NSString;

@interface UIAlertController (AlertPresenter)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)replaceButtonAtIndex:(unsigned long long)arg1 withButton:(id)arg2 forAlert:(id)arg3;
- (void)dismissAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setButtons:(id)arg1 forAlert:(id)arg2;
- (id)actionForButton:(id)arg1 inAlert:(id)arg2;

@end
