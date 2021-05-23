/*
 Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

#import <Foundation/NSObject.h>

@class BSMutableIntegerMap, NSMutableSet, NSSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, STStatusDomainServerHandle;

@interface STStatusDomainXPCClientHandle : NSObject

{
    id <STStatusDomainServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
    NSMutableSet *_observingDomains;
}

@property (weak, nonatomic, readonly) id <STStatusDomainServerHandle> serverHandle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSXPCConnection *clientXPCConnection;
@property (nonatomic, readonly) BSMutableIntegerMap *dataByDomain;
@property (copy, nonatomic, readonly) NSSet *entitledDomains;
@property (copy, nonatomic, readonly) NSMutableSet *observingDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)observeData:(id)arg1 forDomain:(unsigned long long)arg2;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (void)_internalQueue_observeData:(id)arg1 forDomain:(unsigned long long)arg2 dataSendBlock:(CDUnknownBlockType)arg3 diffSendBlock:(CDUnknownBlockType)arg4;
- (void)observeDomains:(id)arg1;
- (void)stopObservingDomains:(id)arg1;

@end
