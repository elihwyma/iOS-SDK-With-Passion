/*
 Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import <Foundation/NSObject.h>

@class NSInputStream, NSMutableArray, NSMutableData, NSOutputStream, NSString;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCNearbyDiscoveryPeerConnection : NSObject

{
    NSString *_remoteServiceName;
    NSString *_localServiceName;
    _Bool _connected;
    NSMutableData *_dataReceived;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    _Bool _shouldSendHello;
    _Bool _readyToWrite;
    NSMutableData *_dataToSend;
    unsigned int _currentSequenceNumber;
    NSMutableData *_dataToSendHoldingQueue;
    NSMutableArray *_receivedDataHoldingQueue;
    NSMutableArray *_messageReceiptHandlerList;
    NSMutableArray *_messageReceiptHandlerHoldingQueue;
    CDUnknownBlockType _receiveDataHandler;
    CDUnknownBlockType _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
}

@property (copy, nonatomic) NSString *remoteServiceName;
@property (copy, nonatomic) NSString *localServiceName;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (copy, nonatomic) CDUnknownBlockType receiveDataHandler;
@property (copy, nonatomic) CDUnknownBlockType connectedHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)syncSendData;
- (void)setupInputStream:(id)arg1 outputStream:(id)arg2;
- (void)syncSendHello;
- (void)syncAppendDataToSend:(id)arg1;
- (void)syncCloseConnectionNow;
- (void)syncSendMessage:(int)arg1 data:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (_Bool)shouldDecideAboutConnection;
- (void)syncSendMessageReceipt:(int)arg1 sequenceNumber:(unsigned int)arg2;
- (void)syncSendAccept;
- (void)syncAcceptedConnection;
- (void)syncProcessMessage:(int)arg1 data:(id)arg2 sequenceNumber:(unsigned int)arg3;
- (void)syncReceivedData:(id)arg1 error:(id)arg2;
- (int)socketForStream:(id)arg1;
- (void)syncHandleStreamEventOpenCompleted:(id)arg1;
- (void)syncReadFromInputStream;
- (id)stringForStreamEventCode:(unsigned long long)arg1;
- (void)syncHandleInputStreamEvent:(unsigned long long)arg1;
- (void)syncHandleOutputStreamEvent:(unsigned long long)arg1;
- (id)initWithLocalServiceName:(id)arg1;
- (void)connectToNetService:(id)arg1;
- (void)attachInputStream:(id)arg1 outputStream:(id)arg2;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;

@end
