/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSShorthandEntry : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *value;

- (id)initWithName:(id)arg1 value:(id)arg2;

@end
