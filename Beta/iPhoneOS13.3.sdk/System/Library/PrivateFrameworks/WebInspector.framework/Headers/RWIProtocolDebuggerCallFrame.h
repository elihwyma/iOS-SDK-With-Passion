/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray, NSString, RWIProtocolDebuggerLocation, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolDebuggerCallFrame : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *callFrameId;
@property (copy, nonatomic) NSString *functionName;
@property (retain, nonatomic) RWIProtocolDebuggerLocation *location;
@property (copy, nonatomic) NSArray *scopeChain;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *thisObject;
@property (nonatomic) _Bool isTailDeleted;

- (id)initWithCallFrameId:(id)arg1 functionName:(id)arg2 location:(id)arg3 scopeChain:(id)arg4 thisObject:(id)arg5 isTailDeleted:(_Bool)arg6;

@end
