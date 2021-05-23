/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class CADDatabaseInitializationOptions, NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject

{
    NSXPCConnection *_connection;
    Protocol *_protocol;
    _Bool _synchronous;
    CADDatabaseInitializationOptions *_initializationOptions;
}

@property (retain) CADDatabaseInitializationOptions *initializationOptions;

- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(_Bool)arg3;
- (id)_getReplyBlockFromInvocation:(id)arg1;
- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withErrorCode:(long long)arg3;
- (id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2;
- (long long)replyBlockArgumentIndex:(id)arg1;
- (_Bool)_shouldResendInitializationOptionsForInvocation:(id)arg1;

@end
