/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <WorkflowKit/WFAction.h>

@class NSString;

@interface WFRunJavaScriptOnWebPageAction : WFAction

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)runAsynchronouslyWithInput:(id)arg1;
- (id)userInterfaceToPresentAlertForEvaluator:(id)arg1;
- (void)evaluateQuarantineWithJavaScript:(id)arg1 webPage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getWebPageFromInput:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_getErrorFromScript:(id)arg1;

@end
