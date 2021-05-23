/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <NSObject.h>

@class NSString, NSXPCConnection;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _LSDClient : NSObject

{
    NSXPCConnection *_XPCConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, readonly) NSXPCConnection *XPCConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)replacementObjectForXPCConnection:(id)arg1 encoder:(id)arg2 object:(id)arg3;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (id)initWithXPCConnection:(id)arg1 queue:(id)arg2;
- (void)didHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (id)initWithXPCConnection:(id)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;

@end
