/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <NSObject.h>

@class HTSHTTPServer, NSMutableArray, NSString, NSTimer;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HTSHTTPServerConnection : NSObject

{
    HTSHTTPServer *_server;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_readSource;
    _Bool _readActive;
    NSObject<OS_dispatch_source> *_writeSource;
    _Bool _writeActive;
    int _socket;
    int _socketRefCount;
    struct __CFHTTPMessage *_incomingMessage;
    NSMutableArray *_incomingQueue;
    NSMutableArray *_outputQueue;
    _Bool _outputStalled;
    _Bool _closeOnEmptyQueue;
    NSString *_identifier;
    double _lastActivity;
    NSTimer *_idleTimer;
}

@property (nonatomic) double lastActivity;
@property (retain, nonatomic) NSTimer *idleTimer;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;
- (void)sendResponse:(id)arg1 withLatency:(double)arg2 closeAfterSending:(_Bool)arg3;
- (void)_processStreamInput;
- (void)_processStreamOutput;
- (void)_shutdownIdleConnection:(id)arg1;
- (void)printData:(id)arg1 withMessage:(id)arg2;

@end
