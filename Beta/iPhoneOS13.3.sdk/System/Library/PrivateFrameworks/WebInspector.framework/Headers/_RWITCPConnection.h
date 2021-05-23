/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableData, _RWITCPServer;

@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPConnection : NSObject

{
    int _socket;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_source> *_inputSource;
    NSObject<OS_dispatch_source> *_outputSource;
    _Bool _shutdown;
    _Bool _outputSourceSuspended;
    _Bool _inputSourceCancelled;
    _Bool _outputSourceCancelled;
    NSMutableArray *_outputMessageQueue;
    NSMutableData *_incomingData;
    _RWITCPServer *_server;
    long long _type;
    struct _lockdown_connection *_connection;
    id <_RWITCPConnectionDelegate> _delegate;
}

@property (weak, nonatomic) id <_RWITCPConnectionDelegate> delegate;

+ (id)TCPConnectionWithLockdownConnection:(struct _lockdown_connection *)arg1;
+ (id)TCPConnectionWithPort:(unsigned short)arg1;
+ (id)TCPConnectionWithSocketPath:(id)arg1;
+ (id)TCPConnectionWithResolvedNetService:(id)arg1;

- (void)dealloc;
- (void)sendMessage:(id)arg1;
- (void)_shutdown;
- (void)startReceiving;
- (id)initWithServer:(id)arg1 socket:(int)arg2;
- (void)_commonInitializationWithServer:(id)arg1 socket:(int)arg2 type:(long long)arg3;
- (id)initWithServer:(id)arg1 lockdownConnection:(struct _lockdown_connection *)arg2;
- (void)_createOutputSource;
- (void)_createInputSource;
- (void)_closeInputStream;
- (void)_closeOutputStream;
- (void)_setOutputSourceSuspended:(_Bool)arg1;
- (void)_handleOutput;
- (void)_dispatchSourceCancelled;
- (void)_handleInput;
- (void)_processIncomingBytes:(const char *)arg1 length:(long long)arg2;

@end
