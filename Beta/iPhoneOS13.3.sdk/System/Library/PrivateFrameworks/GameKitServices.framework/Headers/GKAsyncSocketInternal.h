/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <GameKitServices/GKAsyncSocket.h>

@class NSMutableData, NSObject, NSString;

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GKAsyncSocketInternal : GKAsyncSocket

{
    NSObject<OS_dispatch_source> *_receiveSource;
    NSObject<OS_dispatch_source> *_sendSource;
    _Bool _sendSourceSuspended;
    _Bool _invalidated;
    int _connectionSocket;
    NSMutableData *_dataToSend;
    CDUnknownBlockType _receiveDataHandler;
    CDUnknownBlockType _connectedHandler;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSObject<OS_dispatch_queue> *_targetQueue;
    NSString *_socketName;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (void)sendData;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)connectedHandler;
- (void)setConnectedHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)receiveDataHandler;
- (void)setReceiveDataHandler:(CDUnknownBlockType)arg1;
- (void)setSocketName:(id)arg1;
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (id)socketName;
- (void)tcpAttachSocketDescriptor:(int)arg1;
- (void)receiveData;
- (_Bool)setupSourcesWithSocket:(int)arg1 receiveEventHandler:(CDUnknownBlockType)arg2 sendEventHandler:(CDUnknownBlockType)arg3;
- (void)closeConnectionNow;

@end
