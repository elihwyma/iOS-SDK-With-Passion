/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowKit/WFVariableString.h>

@class NSAttributedString;

@interface WFVariableString (AttributedString)

@property (nonatomic, readonly) NSAttributedString *attributedString;

+ (id)attributedStringWithVariable:(id)arg1;

- (id)substringWithRange:(struct _NSRange)arg1;
- (id)initWithAttributedString:(id)arg1;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariable:(id)arg2;
- (id)stringByReplacingCharactersInRange:(struct _NSRange)arg1 withVariableString:(id)arg2;
- (id)attributedStringByAddingTypingAttributes:(id)arg1;

@end
