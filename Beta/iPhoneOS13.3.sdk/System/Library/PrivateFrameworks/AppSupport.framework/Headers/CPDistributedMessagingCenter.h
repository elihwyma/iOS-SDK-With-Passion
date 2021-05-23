/*
 Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <Foundation/NSObject.h>

@class CPDistributedMessagingCallout, NSLock, NSMutableDictionary, NSOperationQueue, NSString;

@interface CPDistributedMessagingCenter : NSObject

{
    NSString *_centerName;
    NSLock *_lock;
    unsigned int _sendPort;
    NSOperationQueue *_asyncQueue;
    struct __CFRunLoopSource *_serverSource;
    NSString *_requiredEntitlement;
    NSMutableDictionary *_callouts;
    unsigned int _parkedServerPort;
    CPDistributedMessagingCallout *_currentCallout;
    unsigned int _replyPort;
    _Bool _portPassing;
    _Bool _delayedReply;
    _Bool _requireLookupByPID;
    int _targetPID;
}

+ (id)centerNamed:(id)arg1;
+ (id)_centerNamed:(id)arg1 requireLookupByPID:(_Bool)arg2;
+ (id)pidRestrictedCenterNamed:(id)arg1;

- (void)dealloc;
- (id)name;
- (id)_initWithServerName:(id)arg1;
- (void)runServerOnCurrentThread;
- (id)_initWithServerName:(id)arg1 requireLookupByPID:(_Bool)arg2;
- (void)_setSendPort:(unsigned int)arg1;
- (void)_setupInvalidationSource;
- (_Bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7;
- (_Bool)_sendMessage:(id)arg1 userInfo:(id)arg2 receiveReply:(id *)arg3 error:(id *)arg4 toTarget:(id)arg5 selector:(SEL)arg6 context:(void *)arg7 nonBlocking:(_Bool)arg8;
- (_Bool)_sendMessage:(id)arg1 userInfoData:(id)arg2 oolKey:(id)arg3 oolData:(id)arg4 makeServer:(_Bool)arg5 receiveReply:(id *)arg6 nonBlocking:(_Bool)arg7 error:(id *)arg8;
- (unsigned int)_sendPort;
- (id)_initAnonymousServer;
- (unsigned int)_serverPort;
- (void)runServerOnCurrentThreadProtectedByEntitlement:(id)arg1;
- (void)_sendReplyMessage:(id)arg1 portPassing:(_Bool)arg2 onMachPort:(unsigned int)arg3;
- (id)_initClientWithPort:(unsigned int)arg1;
- (void)setTargetPID:(int)arg1;
- (_Bool)sendMessageName:(id)arg1 userInfo:(id)arg2;
- (_Bool)sendNonBlockingMessageName:(id)arg1 userInfo:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2;
- (id)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 error:(id *)arg3;
- (void)sendMessageAndReceiveReplyName:(id)arg1 userInfo:(id)arg2 toTarget:(id)arg3 selector:(SEL)arg4 context:(void *)arg5;
- (void)stopServer;
- (void)registerForMessageName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)delayReply;
- (void)sendDelayedReply:(id)arg1 dictionary:(id)arg2;
- (void)unregisterForMessageName:(id)arg1;
- (_Bool)doesServerExist;
- (void)_dispatchMessageNamed:(id)arg1 userInfo:(id)arg2 reply:(id *)arg3 auditToken:(CDStruct_6ad76789 *)arg4;
- (_Bool)_isTaskEntitled:(CDStruct_6ad76789 *)arg1;
- (id)_requiredEntitlement;

@end
