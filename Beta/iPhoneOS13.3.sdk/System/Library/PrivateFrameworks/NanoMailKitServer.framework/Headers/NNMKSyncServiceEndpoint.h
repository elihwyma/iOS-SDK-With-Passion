/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol NNMKSyncServiceTransport, OS_dispatch_queue, OS_dispatch_source;

@interface NNMKSyncServiceEndpoint : NSObject

{
    id <NNMKSyncServiceTransport> _serviceTransport;
    NSString *_idsServiceName;
    NSObject<OS_dispatch_queue> *_serviceQueue;
    NSMutableDictionary *_repeatPreventionRecords;
    NSObject<OS_dispatch_source> *_repeatPreventionCleanupTimer;
}

@property (retain, nonatomic) NSString *idsServiceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serviceQueue;
@property (retain, nonatomic) id <NNMKSyncServiceTransport> serviceTransport;
@property (retain, nonatomic) NSMutableDictionary *repeatPreventionRecords;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *repeatPreventionCleanupTimer;
@property (nonatomic, readonly) unsigned long long connectivityState;

- (void)dealloc;
- (id)initWithIDSServiceName:(id)arg1 queue:(id)arg2;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeoutCategory:(unsigned long long)arg4 allowCloudDelivery:(_Bool)arg5;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 timeout:(double)arg4 allowCloudDelivery:(_Bool)arg5;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)sendProtobufData:(id)arg1 type:(unsigned long long)arg2 priority:(unsigned long long)arg3 repeatPreventionId:(id)arg4 timeoutCategory:(unsigned long long)arg5 allowCloudDelivery:(_Bool)arg6;
- (void)connectivityChanged;
- (void)_initializeServiceTransport;
- (void)_removeExpiredRepeatPreventionRecords;
- (_Bool)_willIdRepeat:(id)arg1;
- (void)_storeRepeatPreventionId:(id)arg1 priority:(unsigned long long)arg2;
- (void)spaceBecameAvailable;
- (void)resetRepeatPreventionHistory;
- (void)syncServiceTransport:(id)arg1 didReadProtobufData:(id)arg2 type:(unsigned long long)arg3;
- (void)syncServiceTransport:(id)arg1 didSendProtobufSuccessfullyWithIdentifier:(id)arg2;
- (void)syncServiceTransport:(id)arg1 didFailSendingProtobufWithIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)syncServiceTransportDidReportSpaceBecameAvailable:(id)arg1;
- (void)syncServiceTransportDidChangeConnectivity:(id)arg1;

@end
