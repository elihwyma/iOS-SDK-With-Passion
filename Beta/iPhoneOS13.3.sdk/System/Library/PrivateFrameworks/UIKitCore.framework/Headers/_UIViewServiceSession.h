/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection, _UIAsyncInvocation, _UIViewServiceDeputyManager;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceSession : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    _UIViewServiceDeputyManager *_deputyManager;
    _UIAsyncInvocation *_invalidationInvocation;
    CDUnknownBlockType _terminationHandler;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
}

@property (copy, nonatomic) CDUnknownBlockType terminationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sessionWithConnection:(id)arg1;

- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;
- (int)__automatic_invalidation_logic;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (void)deputyManager:(id)arg1 didUpdateExportedInterface:(id)arg2;
- (void)deputy:(id)arg1 didFailWithError:(id)arg2;

@end
