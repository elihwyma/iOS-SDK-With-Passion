/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class AWDCompanionSyncReceiveEvent, AWDServerConnection;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SYMetricLogger : NSObject

{
    AWDServerConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    AWDCompanionSyncReceiveEvent *_lastReceiveMetric;
    NSObject<OS_dispatch_source> *_lastReceiveMetricSource;
}

+ (id)sharedInstance;

- (id)init;
- (void)_sendLastReceiveMetric;
- (void)_bufferNewReceiptMetricForMessage:(id)arg1 service:(id)arg2;
- (void)postReceiptOfMessage:(id)arg1 forService:(id)arg2;
- (void)updateLastReceivedMessageWithProcessingTime:(double)arg1;
- (void)postSequenceErrorOfType:(int)arg1 sequenceNumber:(unsigned long long)arg2 forService:(id)arg3;
- (void)postFullSyncDuration:(double)arg1 onMaster:(_Bool)arg2 forService:(id)arg3;
- (void)postErrorInformation:(id)arg1 forService:(id)arg2;

@end
