/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSLock, NSMutableDictionary, NSMutableSet, NSString, _UIAsyncInvocation;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewServiceDeputyManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    _UIAsyncInvocation *_invalidationInvocation;
    NSMutableDictionary *_connectionHandlers;
    NSLock *_connectionHandlersLock;
    NSMutableSet *_deputies;
    CDUnknownBlockType _terminationHandler;
    int __automatic_invalidation_retainCount;
    _Bool __automatic_invalidation_invalidated;
    id _delegate;
}

@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;

- (id)init;
- (unsigned long long)retainCount;
- (void)dealloc;
- (id)retain;
- (oneway void)release;
- (_Bool)_tryRetain;
- (_Bool)_isDeallocating;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)invalidate;
- (int)__automatic_invalidation_logic;
- (void)_invalidateUnconditionallyThen:(CDUnknownBlockType)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(CDUnknownBlockType)arg2;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)checkDeputyForRotation:(id)arg1;
- (void)__requestConnectionToDeputyOfClass:(Class)arg1 fromHostObject:(byref id)arg2 replyHandler:(CDUnknownBlockType)arg3;

@end
