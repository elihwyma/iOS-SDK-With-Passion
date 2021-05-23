/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSRule;

@interface RWIProtocolCSSRuleMatch : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolCSSRule *rule;
@property (copy, nonatomic) NSArray *matchingSelectors;

- (id)initWithRule:(id)arg1 matchingSelectors:(id)arg2;

@end
