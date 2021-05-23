/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeInternalPropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;

- (id)initWithName:(id)arg1;

@end
