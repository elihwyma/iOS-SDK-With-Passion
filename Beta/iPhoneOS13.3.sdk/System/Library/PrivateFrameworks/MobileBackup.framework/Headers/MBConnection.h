/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol MBConnectionHandler, OS_dispatch_queue, OS_xpc_object;

@interface MBConnection : NSObject

{
    _Atomic int _pid;
    NSObject<OS_xpc_object> *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    id <MBConnectionHandler> _messageHandler;
    NSString *_processName;
}

@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain) NSString *processName;
@property (weak, nonatomic) id <MBConnectionHandler> messageHandler;

- (id)description;
- (void)cancel;
- (void)resume;
- (id)initWithServiceName:(id)arg1;
- (void)suspend;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;
- (void)sendMessage:(id)arg1;
- (id)sendMessageWithReplyAndSync:(id)arg1 error:(id *)arg2;
- (void)_setEventHandlerForXPCConnection:(id)arg1;
- (void)_refreshProcessInfoWithXPCConnection:(id)arg1;
- (void)_handleXPCEvent:(id)arg1;
- (void)_handleXPCError:(id)arg1;
- (void)sendMessage:(id)arg1 barrierBlock:(CDUnknownBlockType)arg2;

@end
