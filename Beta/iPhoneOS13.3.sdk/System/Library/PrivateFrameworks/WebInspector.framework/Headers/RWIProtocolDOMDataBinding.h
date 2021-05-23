/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolDOMDataBinding : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *binding;
@property (copy, nonatomic) NSString *value;
@property (copy, nonatomic) NSString *type;

- (id)initWithBinding:(id)arg1 value:(id)arg2;

@end
