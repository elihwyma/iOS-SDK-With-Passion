/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, RWIProtocolCSSStyle;

@interface RWIProtocolCSSInheritedStyleEntry : RWIProtocolJSONObject

@property (copy, nonatomic) NSArray *matchedCSSRules;
@property (retain, nonatomic) RWIProtocolCSSStyle *inlineStyle;

- (id)initWithMatchedCSSRules:(id)arg1;

@end
