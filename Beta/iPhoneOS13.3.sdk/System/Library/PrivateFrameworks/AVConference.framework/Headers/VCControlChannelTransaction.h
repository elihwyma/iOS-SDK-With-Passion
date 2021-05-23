/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSData, NSNumber;

@protocol VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelTransaction

{
    NSData *_data;
    unsigned int _sessionID;
    NSNumber *_participantID;
    struct _opaque_pthread_mutex_t _transactionLock;
    struct _opaque_pthread_cond_t _transactionDone;
    _Bool _isConfirmed;
    _Bool _isFlushed;
    id <VCControlChannelTransactionDelegate> _weakTransactionDelegate;
}

+ (_Bool)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4;

- (void)dealloc;
- (id)initWithTransportSessionID:(unsigned int)arg1 transactionData:(id)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4;
- (void)flushTransactions;
- (void)confirmedTransactionByParticipantID:(id)arg1 sessionID:(unsigned int)arg2;
- (_Bool)sendReliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 timeout:(id)arg4;

@end
