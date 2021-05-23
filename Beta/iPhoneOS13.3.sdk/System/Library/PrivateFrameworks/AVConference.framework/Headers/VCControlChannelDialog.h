/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@class NSMutableDictionary, NSNumber;

@protocol VCControlChannelTransactionDelegate;

__attribute__((visibility("hidden")))
@interface VCControlChannelDialog

{
    unsigned int _sessionID;
    unsigned int _transactionID;
    NSNumber *_participantID;
    id <VCControlChannelTransactionDelegate> _weakTransactionDelegate;
    NSMutableDictionary *_transactions;
}

+ (_Bool)sendUnreliableMessage:(id)arg1 sessionID:(unsigned int)arg2 participantID:(id)arg3 transactionDelegate:(id)arg4;
+ (_Bool)encryptMessage:(id)arg1 buffer:(char *)arg2 size:(unsigned int)arg3 sequenceNumber:(unsigned short)arg4 transactionDelegate:(id)arg5;
+ (id)newEncryptedMessageFromMessage:(id)arg1 sequenceNumber:(unsigned short)arg2 transactionDelegate:(id)arg3;
+ (void)sendConfirmationToParticipantID:(id)arg1 transactionID:(id)arg2 sessionID:(unsigned int)arg3 transactionDelegate:(id)arg4;
+ (_Bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3 sessionID:(unsigned int)arg4 transactionDelegate:(id)arg5;

- (void)dealloc;
- (void)removeTransactionForTransactionID:(int)arg1;
- (id)initWithSessionID:(unsigned int)arg1 participantID:(id)arg2 transactionDelegate:(id)arg3;
- (void)flushActiveDialogs;
- (_Bool)sendReliableMessage:(id)arg1 transactionDelegate:(id)arg2 timeout:(id)arg3;
- (_Bool)processMessageFromParticipant:(id)arg1 transactionID:(id)arg2 status:(unsigned int)arg3;

@end
