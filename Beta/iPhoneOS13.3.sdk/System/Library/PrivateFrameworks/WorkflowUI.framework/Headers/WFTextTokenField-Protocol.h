/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/Swift-Protocol.h>

@class WFVariableString;

@protocol WFTextTokenField <Swift>

@property (copy, nonatomic) WFVariableString *variableString;
@property (nonatomic) struct _NSRange selectedRange;

- (unsigned short)beginEditingWithContext: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultCut: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultCopy: /* Error: Ran out of types for this method. */;
- (unsigned short)defaultPaste: /* Error: Ran out of types for this method. */;

@end
