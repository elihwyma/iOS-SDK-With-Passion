/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFAction.h>

@interface WFMissingAction : WFAction

- (id)name;
- (id)icon;
- (void)runWithInput:(id)arg1 error:(id *)arg2;
- (id)descriptionDictionary;
- (_Bool)inputPassthrough;
- (_Bool)isMissing;

@end
