/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKJSInspectorNetworkAgent, NSMutableDictionary, NSString, RWIProtocolNetworkDomainEventDispatcher;

@interface _IKJSInspectorNetworkLoader : NSObject

{
    NSString *_parentIdentifier;
    NSString *_identifier;
    IKJSInspectorNetworkAgent *_agent;
    RWIProtocolNetworkDomainEventDispatcher *_dispatcher;
    NSMutableDictionary *_requestRecords;
}

@property (copy, nonatomic) NSString *parentIdentifier;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (weak, nonatomic, readonly) IKJSInspectorNetworkAgent *agent;
@property (weak, nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *dispatcher;
@property (nonatomic, readonly) NSMutableDictionary *requestRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_recordForResource:(long long)arg1 withInitiator:(long long)arg2 synchronousOperation:(_Bool)arg3;
- (id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 agent:(id)arg3 dispatcher:(id)arg4;
- (void)dispatchEventWithBlock:(CDUnknownBlockType)arg1;
- (double)currentTimeIntervalSince1970;

@end
