/*
 Image: /System/Library/PrivateFrameworks/SystemStatusServer.framework/SystemStatusServer
 */

#import <Foundation/NSObject.h>

@class BSMutableIntegerMap, NSSet, NSString, NSXPCConnection;

@protocol OS_dispatch_queue, STStatusDomainPublisherServerHandle;

@interface STStatusDomainPublisherXPCClientHandle : NSObject

{
    id <STStatusDomainPublisherServerHandle> _serverHandle;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_clientXPCConnection;
    BSMutableIntegerMap *_dataByDomain;
    NSSet *_entitledDomains;
}

@property (weak, nonatomic, readonly) id <STStatusDomainPublisherServerHandle> serverHandle;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *internalQueue;
@property (nonatomic, readonly) NSXPCConnection *clientXPCConnection;
@property (nonatomic, readonly) BSMutableIntegerMap *dataByDomain;
@property (copy, nonatomic, readonly) NSSet *entitledDomains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_internalQueue_dataForDomainCreatingIfNecessary:(unsigned long long)arg1;
- (id)_newEmptyDataForDomain:(unsigned long long)arg1;
- (id)initWithXPCConnection:(id)arg1 serverHandle:(id)arg2;
- (void)_publishData:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)_publishDataDiff:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)publishBatteryData:(id)arg1;
- (void)publishBatteryDataDiff:(id)arg1;
- (void)publishTelephonyData:(id)arg1;
- (void)publishTelephonyDataDiff:(id)arg1;
- (void)publishVoiceControlData:(id)arg1;
- (void)publishVoiceControlDataDiff:(id)arg1;
- (void)publishWifiData:(id)arg1;
- (void)publishWifiDataDiff:(id)arg1;

@end
