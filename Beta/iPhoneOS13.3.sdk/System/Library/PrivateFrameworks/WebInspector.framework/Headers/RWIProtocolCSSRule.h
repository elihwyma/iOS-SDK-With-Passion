/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolCSSRuleId, RWIProtocolCSSSelectorList, RWIProtocolCSSStyle;

@interface RWIProtocolCSSRule : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSSelectorList *selectorList;
@property (nonatomic) int sourceLine;
@property (nonatomic) long long origin;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;
@property (retain, nonatomic) RWIProtocolCSSRuleId *ruleId;
@property (copy, nonatomic) NSString *sourceURL;
@property (copy, nonatomic) NSArray *media;

- (id)initWithSelectorList:(id)arg1 sourceLine:(int)arg2 origin:(long long)arg3 style:(id)arg4;

@end
