/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimePropertyDescriptor : RWIProtocolJSONObject

@property (copy, nonatomic) NSString *name;
@property (nonatomic) _Bool configurable;
@property (nonatomic) _Bool enumerable;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (nonatomic) _Bool writable;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *get;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *set;
@property (nonatomic) _Bool wasThrown;
@property (nonatomic) _Bool isOwn;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *symbol;
@property (nonatomic) _Bool nativeGetter;

- (id)initWithName:(id)arg1 configurable:(_Bool)arg2 enumerable:(_Bool)arg3;

@end
