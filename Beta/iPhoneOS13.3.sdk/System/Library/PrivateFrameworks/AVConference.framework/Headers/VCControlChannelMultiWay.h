/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <AVConference/VCControlChannel.h>

@class NSMutableArray, NSMutableDictionary, NSObject, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCControlChannelMultiWay : VCControlChannel

{
    unsigned int _transportSessionID;
    int _vfdMessage;
    int _vfdCancel;
    _Bool _isRunning;
    struct _opaque_pthread_t *_pidReceiveProc;
    NSMutableDictionary *_dialogs;
    NSMutableArray *_activeParticipants;
    _Bool _isCCReliableDataNotReceivedReported;
    _Bool _isEncryptionEnabled;
    NSMutableDictionary *_cryptors;
    void *_currentSendMKI;
    void *_currentReceiveMKI;
    NSObject<OS_dispatch_queue> *_sequentialKeyMaterialQueue;
}

@property (nonatomic) unsigned int transportSessionID;
@property (nonatomic) int vfdMessage;
@property (nonatomic) int vfdCancel;
@property (nonatomic, readonly) NSMutableDictionary *dialogs;
@property (readonly) _Bool isRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _Bool isEncryptionEnabled;

- (void)dealloc;
- (void)stop;
- (void)start;
- (void)registerPeriodicTask;
- (void)deregisterPeriodicTask;
- (void)periodicTask:(void *)arg1;
- (int)updateEncryption:(CDStruct_5b6da142 *)arg1 derivedSSRC:(unsigned int)arg2;
- (int)getKeyDerivationCryptoSet:(CDStruct_5b6da142 *)arg1 withKeyMaterial:(id)arg2 derivedSSRC:(unsigned int *)arg3;
- (void)setCurrentSendMKIWithKeyMaterial:(id)arg1;
- (void)initializeSRTPInfo:(struct tagSRTPINFO *)arg1;
- (void)initializeEncryption;
- (void)finalizeEncryption;
- (void)updateEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (void)updateEncryptionWithKeyMaterial:(id)arg1;
- (_Bool)encryptData:(char *)arg1 size:(int)arg2 sequenceNumber:(unsigned short)arg3;
- (_Bool)decryptWithMKI:(void *)arg1 data:(char *)arg2 size:(int)arg3 sequenceNumber:(unsigned short)arg4;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2 mode:(int)arg3;
- (void)addActiveParticipant:(unsigned long long)arg1;
- (_Bool)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2;
- (void)setEncryptionWithEncryptionMaterial:(CDStruct_791df8ea *)arg1;
- (_Bool)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2 timeout:(unsigned int)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeActiveParticipant:(unsigned long long)arg1;
- (void)addNewKeyMaterial:(id)arg1;
- (id)initWithTransportSessionID:(unsigned int)arg1 reportingAgent:(struct opaqueRTCReporting *)arg2;
- (void)flushActiveMessages;
- (void)removeAllActiveParticipants;
- (_Bool)isParticipantActive:(unsigned long long)arg1;
- (void)addToSentStats:(int)arg1;
- (id)lastUsedMKIBytes;
- (void)scheduleAfter:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)flushReportingStats;
- (_Bool)decryptMessageWithMKI:(void *)arg1 message:(id)arg2 buffer:(char *)arg3 size:(unsigned int)arg4 sequenceNumber:(unsigned short)arg5;
- (id)processEncryptedPayload:(id)arg1 isData:(_Bool)arg2 sequenceNumber:(id)arg3 MKIData:(id)arg4 participantID:(id)arg5;
- (_Bool)sendReliableMessageAndWait:(id)arg1 participantID:(unsigned long long)arg2 timeout:(id)arg3;
- (void)flushRealTimeReportingStats;
- (void)addToReceivedStats:(int)arg1;
- (void)messageReceived:(id)arg1 participantInfo:(CDStruct_94aa5fb4 *)arg2;
- (void)sendReliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)sendUnreliableMessage:(id)arg1 participantID:(unsigned long long)arg2;
- (void)broadcastUnreliableMessage:(id)arg1;

@end
