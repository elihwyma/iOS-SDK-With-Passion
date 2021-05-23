/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRProtocolMessageQueue, MRSupportedProtocolMessages, MSVMessageParser, NSInputStream, NSOutputStream, NSRunLoop, NSString, _MRDeviceInfoMessageProtobuf;

@protocol MRProtocolClientConnectionDelegate;

@interface MRProtocolClientConnection : NSObject

{
    MSVMessageParser *_parser;
    NSRunLoop *_runLoop;
    MRProtocolMessageQueue *_messageQueue;
    _Bool _disconnected;
    unsigned long long _firstClientNanoseconds;
    unsigned long long _firstDeviceTicks;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
    _MRDeviceInfoMessageProtobuf *_deviceInfo;
    MRSupportedProtocolMessages *_supportedMessages;
    id <MRProtocolClientConnectionDelegate> _delegate;
}

@property (nonatomic, readonly) NSInputStream *inputStream;
@property (nonatomic, readonly) NSOutputStream *outputStream;
@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfo;
@property (retain, nonatomic) MRSupportedProtocolMessages *supportedMessages;
@property (nonatomic, readonly) _Bool streamsAreValid;
@property (weak, nonatomic) id <MRProtocolClientConnectionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)sendMessage:(id)arg1;
- (void)_flush;
- (void)parser:(id)arg1 didParseMessage:(id)arg2;
- (unsigned long long)messageQueue:(id)arg1 processData:(id)arg2 atReadPosition:(long long)arg3;
- (void)messageQueue:(id)arg1 didSendMessage:(id)arg2;
- (void)messageQueue:(id)arg1 didPurgeMessage:(id)arg2;
- (id)messageQueue:(id)arg1 dataForMessage:(id)arg2;
- (void)sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)initWithInputStream:(id)arg1 outputStream:(id)arg2 runLoop:(id)arg3;
- (void)closeAllStreams;
- (void)sendMessage:(id)arg1 timeout:(double)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_openStream:(id)arg1;
- (void)_closeStream:(id)arg1;
- (_Bool)_clientSupportsMessage:(id)arg1;
- (void)_sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)_stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)_setQOSPropertiesOnStream:(id)arg1;
- (void)_parseMessageData:(id)arg1;
- (void)_disconnectClient;
- (id)decryptData:(id)arg1 error:(id *)arg2;
- (void)_preProcessMessage:(id)arg1 data:(id)arg2;
- (void)_notifyDelegateClientDidRecieveMessage:(id)arg1;
- (id)encryptDataForMessage:(id)arg1;
- (void)_adjustTimestamp:(id)arg1;
- (void)_notifyDelegateClientDidDisconnect;

@end
