/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolCSSStyle;

@interface RWIProtocolCSSStyleAttribute : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolCSSStyle *style;

- (id)initWithName:(id)arg1 style:(id)arg2;

@end
