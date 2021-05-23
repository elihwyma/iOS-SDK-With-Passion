/*
 Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue, OS_dispatch_source, _RWITCPServerDelegate;

__attribute__((visibility("hidden")))
@interface _RWITCPServer : NSObject

{
    int _listenSocket;
    NSObject<OS_dispatch_queue> *_serverQueue;
    NSObject<OS_dispatch_source> *_serverSource;
    NSMutableArray *_connections;
    id <_RWITCPServerDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <_RWITCPServerDelegate> delegate;

- (void)dealloc;
- (id)_initWithDelegate:(id)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2;
- (void)connectionClosed:(id)arg1;
- (_Bool)_listenOnPort:(unsigned short)arg1;
- (_Bool)_createListenDispatchSource;
- (id)initWithLaunchdSocketName:(const char *)arg1 delegate:(id)arg2;

@end
