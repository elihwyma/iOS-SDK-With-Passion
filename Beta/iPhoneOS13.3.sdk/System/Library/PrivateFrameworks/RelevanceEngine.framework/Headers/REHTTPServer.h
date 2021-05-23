/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, REHTTPServerDelegate;

@interface REHTTPServer : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    struct _CFHTTPServer *_server;
    NSMutableArray *_connections;
    unsigned short _port;
    id <REHTTPServerDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned short port;
@property (nonatomic, readonly) id <REHTTPServerDelegate> delegate;

- (void)dealloc;
- (void)invalidate;
- (_Bool)_valid;
- (void)invalidated;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (void)connection:(id)arg1 didReceiveRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didRecievedError:(id)arg1;
- (void)didOpenConnection:(struct _CFHTTPServerConnection *)arg1;
- (void)didCloseConnection:(struct _CFHTTPServerConnection *)arg1;

@end
