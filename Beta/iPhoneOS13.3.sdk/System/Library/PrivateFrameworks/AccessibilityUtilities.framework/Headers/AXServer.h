/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class AXDispatchTimer, AXIPCClient, AXIPCServer, NSMutableArray, NSString;

@protocol OS_dispatch_queue;

@interface AXServer : NSObject

{
    _Bool _shouldRegisterClientCallbackSourceOnMainRunloop;
    AXIPCServer *_server;
    AXIPCClient *_client;
    NSString *_serverIdentifier;
    NSMutableArray *_assertionWorkBacklog;
    AXDispatchTimer *_assertionRetryTimer;
    NSObject<OS_dispatch_queue> *_assertionWorkQueue;
}

@property (copy, nonatomic) NSString *serverIdentifier;
@property (retain, nonatomic) NSMutableArray *assertionWorkBacklog;
@property (retain, nonatomic) AXDispatchTimer *assertionRetryTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue;
@property (retain, nonatomic) AXIPCClient *client;
@property (retain, nonatomic) AXIPCServer *server;
@property (nonatomic) _Bool shouldRegisterClientCallbackSourceOnMainRunloop;

- (id)init;
- (void)dealloc;
- (id)_serviceName;
- (id)sendMessage:(id)arg1;
- (_Bool)_connectIfNecessary;
- (void)sendSimpleMessage:(id)arg1;
- (void)_didConnectToServer;
- (void)_willClearServer;
- (void)_wasDisconnectedFromClient;
- (void)_didConnectToClient;
- (_Bool)sendSimpleMessageWithResult:(id)arg1;
- (id)sendSimpleMessageWithObjectResult:(id)arg1;
- (void)_connectServerIfNecessary;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(CDUnknownBlockType)arg3;
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(CDUnknownBlockType)arg3;
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;
- (_Bool)sendSimpleMessage:(id)arg1 enqueueError:(id *)arg2;
- (void)_processAssertionBacklog;
- (void)_initializeAssertionBookkeeping;

@end
