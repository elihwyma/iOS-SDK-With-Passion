/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

@interface WFVariableFieldUtilities : NSObject

+ (_Bool)clipboardContainsVariableString;
+ (_Bool)pasteboardContainsVariableString:(id)arg1;
+ (void)copyVariableString:(id)arg1 toPasteboard:(id)arg2;
+ (id)variableStringFromPasteboard:(id)arg1 withVariableProvider:(id)arg2;
+ (void)cut:(id)arg1 fromField:(id)arg2;
+ (void)copy:(id)arg1 fromField:(id)arg2;
+ (void)paste:(id)arg1 intoField:(id)arg2;

@end
