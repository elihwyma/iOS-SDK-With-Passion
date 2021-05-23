/*
 Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

#import <NSObject.h>

@class HUIDCMessage, HUIDCPacket, NSInputStream, NSMutableArray, NSMutableData, NSNetService, NSOutputStream, NSString;

@protocol HUIDCRemoteControllerDelegate;

@interface HUIDCRemoteController : NSObject

{
    HUIDCPacket *_currentPacket;
    id <HUIDCRemoteControllerDelegate> _delegate;
    NSNetService *_service;
    NSMutableArray *_outputDataQueue;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    NSMutableData *_inputBuffer;
    HUIDCMessage *_currentMessageInFlight;
    NSMutableData *_outputBuffer;
}

@property (retain, nonatomic) NSMutableData *inputBuffer;
@property (retain, nonatomic) HUIDCMessage *currentMessageInFlight;
@property (retain, nonatomic) NSNetService *service;
@property (retain, nonatomic) NSMutableArray *outputDataQueue;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSOutputStream *outputStream;
@property (retain, nonatomic) NSMutableData *outputBuffer;
@property (weak, nonatomic) id <HUIDCRemoteControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)name;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)isConnected;
- (id)initWithService:(id)arg1;
- (void)receivedData:(id)arg1;
- (_Bool)isConnecting;
- (_Bool)sendObject:(id)arg1;
- (void)closeConnectionWithError:(id)arg1;
- (_Bool)sendObject:(id)arg1 withSendCompletion:(CDUnknownBlockType)arg2;
- (void)openConnectionIfNecessary;
- (_Bool)isSlave;
- (void)acceptConnection:(int)arg1;
- (void)resetConnection;
- (void)setupStream:(id)arg1;
- (void)setSecuritySettingsForStream:(id)arg1;
- (void)finishedSending:(id)arg1;
- (id)nextMessageInQueue;
- (void)enqueueData:(id)arg1;
- (void)didCommunicate;
- (void)sendDataChunk;
- (_Bool)outputStreamReady;
- (void)messageWasAcked:(id)arg1;
- (void)clearMessageQueue;

@end
