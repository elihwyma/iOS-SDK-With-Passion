/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFTextInputParameter.h>

@interface WFURLParameter : WFTextInputParameter

- (long long)keyboardType;
- (long long)autocorrectionType;
- (long long)autocapitalizationType;
- (id)textContentType;
- (Class)singleStateClass;

@end
