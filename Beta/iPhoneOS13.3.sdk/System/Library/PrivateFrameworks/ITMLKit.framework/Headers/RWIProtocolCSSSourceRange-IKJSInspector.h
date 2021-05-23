/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolCSSSourceRange.h>

@interface RWIProtocolCSSSourceRange (IKJSInspector)

+ (id)ik_newLineIndexSetForStyleMarkup:(id)arg1;
+ (id)ik_cssSourceRangeForRange:(struct _NSRange)arg1 withNewLineIndexSet:(id)arg2;
+ (id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;
+ (id)ik_emptySourceRange;

- (struct _NSRange)ik_rangeWithNewLineIndexSet:(id)arg1;

@end
