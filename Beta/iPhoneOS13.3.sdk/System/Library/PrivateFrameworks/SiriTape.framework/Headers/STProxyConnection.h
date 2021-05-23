/*
 Image: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
 */

#import <Foundation/NSObject.h>

@class GCDAsyncSocket, SiriCoreDataDecompressor;

@protocol OS_dispatch_data, OS_dispatch_queue, STAceObjectHandler;

@interface STProxyConnection : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_data> *_bufferedInputData;
    id <STAceObjectHandler> _handler;
    GCDAsyncSocket *_socket;
    _Bool _isOpened;
    _Bool _isCanceled;
    _Bool _isFinished;
    SiriCoreDataDecompressor *_inputDecompressor;
    struct __CFHTTPMessage *_httpRequestHeader;
}

- (void)parseData:(id)arg1;
- (void)_cancelWithError:(id)arg1;
- (id)_httpHeaderData;
- (id)_aceHeaderData;
- (_Bool)_hasReadHTTPHeader;
- (id)_tryReadingAceHeaderFromData:(id)arg1 bytesParsed:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_tryReadingParsedDataFromBytes:(const void *)arg1 length:(unsigned long long)arg2 packet:(CDStruct_95d471ab *)arg3 object:(id *)arg4 bytesParsed:(unsigned long long *)arg5 error:(id *)arg6;
- (_Bool)_consumeHTTPHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_consumeAceHeaderWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)_consumeAceDataWithData:(id)arg1 bytesRead:(unsigned long long *)arg2 error:(id *)arg3;
- (void)_connectionHasBytesAvailable:(id)arg1;
- (id)initWithSocket:(id)arg1 handler:(id)arg2 replayFileURL:(id)arg3;
- (_Bool)_hasReadAceHeader;
- (void)handleAceObject:(id)arg1;
- (void)handlePacket:(CDStruct_95d471ab *)arg1;

@end
