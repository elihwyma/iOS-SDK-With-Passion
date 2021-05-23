/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@protocol NSProxyConnectionDelegate, OS_tcp_connection;

@interface NSProxyConnection : NSObject

{
    _Bool _doCleanupWhenWritesCompleted;
    id <NSProxyConnectionDelegate> _delegate;
    long long _pendingWrites;
    NSObject<OS_tcp_connection> *_connection;
}

@property (retain) NSObject<OS_tcp_connection> *connection;
@property (weak) id <NSProxyConnectionDelegate> delegate;
@property long long pendingWrites;
@property _Bool doCleanupWhenWritesCompleted;

- (void)dealloc;
- (void)cancel;
- (void)write:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)read:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 queue:(id)arg3 configuration:(id)arg4;
- (id)initWithTCPConnection:(id)arg1;

@end
