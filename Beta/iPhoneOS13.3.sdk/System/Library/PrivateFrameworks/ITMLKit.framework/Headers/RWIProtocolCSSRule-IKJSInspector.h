/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolCSSRule.h>

@interface RWIProtocolCSSRule (IKJSInspector)

+ (id)ik_cssRuleForRule:(id)arg1 withOrdinal:(int)arg2 forStyleSheetHeader:(id)arg3 forStyleMarkup:(id)arg4 withNewLineIndexSet:(id)arg5;
+ (id)safe_initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;

- (id)ik_ruleMatchForClassSelectors:(id)arg1 andIdSelector:(id)arg2;

@end
