/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeCallArgument : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolJSONObject *value;
@property (copy, nonatomic) NSString *objectId;

@end
