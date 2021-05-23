/*
 Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface GKAsyncSocket : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue;
@property (copy, nonatomic) CDUnknownBlockType receiveDataHandler;
@property (copy, nonatomic) CDUnknownBlockType connectedHandler;
@property (retain, nonatomic) id socketName;

+ (id)allocWithZone:(struct _NSZone *)arg1;

- (void)invalidate;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void)sendData:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)tcpConnectSockAddr:(const struct sockaddr *)arg1 port:(unsigned short)arg2;
- (void)tcpAttachSocketDescriptor:(int)arg1;

@end
