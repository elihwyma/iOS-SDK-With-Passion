/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerScope : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *object;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (nonatomic) _Bool empty;

- (id)initWithObject:(id)arg1 type:(long long)arg2;

@end
