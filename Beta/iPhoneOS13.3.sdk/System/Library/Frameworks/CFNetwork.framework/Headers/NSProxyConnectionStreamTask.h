/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSProxyConnection.h>

@class NSInputStream, NSObject, NSOutputStream, NSString, NSURLSessionStreamTask;

@protocol OS_dispatch_queue;

@interface NSProxyConnectionStreamTask : NSProxyConnection

{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isConnected;
    NSString *_host;
    int _port;
    _Bool _dataAvailableForReading;
    NSURLSessionStreamTask *_streamTask;
    NSInputStream *_inputStream;
    NSOutputStream *_outputStream;
}

@property (retain) NSInputStream *inputStream;
@property (retain) NSOutputStream *outputStream;
@property _Bool dataAvailableForReading;
@property (retain) NSURLSessionStreamTask *streamTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)cancel;
- (void)URLSession:(id)arg1 streamTask:(id)arg2 didBecomeInputStream:(id)arg3 outputStream:(id)arg4;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (void)readFromStream;
- (void)_onConnected:(int)arg1;

@end
