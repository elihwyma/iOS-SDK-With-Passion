/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSObject;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannel

{
    id _messageReceivedDelegate;
    id _dataReceivedDelegate;
    int _bytesSent;
    int _lastProcessedBytesSent;
    int _bytesSentToReport;
    int _maxSentRate;
    int _minSentRate;
    int _bytesReceived;
    int _lastProcessedBytesReceived;
    int _bytesReceivedToReport;
    int _maxReceivedRate;
    int _minReceivedRate;
    double _lastUpdateTimestamp;
    unsigned int _reliableMessageResendInterval;
    NSObject<OS_dispatch_queue> *_asyncProcessingQueue;
}

@property (nonatomic) id messageReceivedDelegate;
@property (nonatomic) id dataReceivedDelegate;
@property (nonatomic, readonly) unsigned int reliableMessageResendInterval;

- (id)init;
- (void)dealloc;
- (_Bool)sendReliableMessageAndWait:(id)arg1;
- (void)sendReliableMessage:(id)arg1;
- (_Bool)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)flushActiveMessages;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)broadcastUnreliableMessage:(id)arg1;
- (void)throwNotSupportedExceptionForMethod:(id)arg1;

@end
