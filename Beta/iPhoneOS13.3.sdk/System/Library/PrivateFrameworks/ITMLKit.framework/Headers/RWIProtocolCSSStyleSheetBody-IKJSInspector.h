/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <WebInspector/RWIProtocolCSSStyleSheetBody.h>

@class IKCSSRuleList, NSIndexSet;

@interface RWIProtocolCSSStyleSheetBody (IKJSInspector)

@property (retain, nonatomic, setter=ik_setRuleList:) IKCSSRuleList *ik_ruleList;
@property (retain, nonatomic, setter=ik_setTextNewLineIndexSet:) NSIndexSet *ik_textNewLineIndexSet;

+ (id)safe_initWithStyleSheetId:(id)arg1 rules:(id)arg2;
+ (id)ik_stylesheetBodyFromRuleList:(id)arg1 forStyleMarkup:(id)arg2 withHeader:(id)arg3;

@end
