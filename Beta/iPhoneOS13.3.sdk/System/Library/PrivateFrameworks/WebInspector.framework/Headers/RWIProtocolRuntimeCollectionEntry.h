/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolRuntimeRemoteObject;

@interface RWIProtocolRuntimeCollectionEntry : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *value;
@property (retain, nonatomic) RWIProtocolRuntimeRemoteObject *key;

- (id)initWithValue:(id)arg1;

@end
