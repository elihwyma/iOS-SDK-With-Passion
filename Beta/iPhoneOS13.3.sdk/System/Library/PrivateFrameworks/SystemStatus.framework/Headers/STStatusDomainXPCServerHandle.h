/*
 Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

#import <Foundation/NSObject.h>

#import <SystemStatus/Swift-Protocol.h>

@class BSMutableIntegerMap, NSMutableDictionary, NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

@interface STStatusDomainXPCServerHandle : NSObject <Swift>

{
    BSMutableIntegerMap *_dataByDomain;
    NSMutableDictionary *_clientsByDomain;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSXPCConnection *_serverXPCConnection;
}

@property (retain, nonatomic) BSMutableIntegerMap *dataByDomain;
@property (retain, nonatomic) NSMutableDictionary *clientsByDomain;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSXPCConnection *serverXPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_tearDownXPCConnection;
- (id)_internalQueue_dataForDomain:(unsigned long long)arg1;
- (id)dataForDomain:(unsigned long long)arg1;
- (void)registerClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)removeClient:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)observeBatteryData:(id)arg1;
- (void)observeBatteryDataDiff:(id)arg1;
- (void)observeTelephonyData:(id)arg1;
- (void)observeTelephonyDataDiff:(id)arg1;
- (void)observeVoiceControlData:(id)arg1;
- (void)observeVoiceControlDataDiff:(id)arg1;
- (void)observeWifiData:(id)arg1;
- (void)observeWifiDataDiff:(id)arg1;
- (void)_observeData:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)_observeDataDiff:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)_reregisterForDomains;

@end
