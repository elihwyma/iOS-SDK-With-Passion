/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSMutableArray, NSXPCInterface;

@protocol OS_dispatch_queue;

@interface IDSXPCConnectionRemoteObjectPromise : NSObject

{
    NSXPCInterface *_interface;
    NSMutableArray *_pendingInvocations;
    id _target;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSXPCInterface *interface;
@property (retain, nonatomic) NSMutableArray *pendingInvocations;
@property (retain, nonatomic) id target;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)dealloc;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)failWithError:(id)arg1;
- (id)remoteObjectProxy;
- (void)_assertVoidReturnValueInInvocation:(id)arg1;
- (id)initWithInterface:(id)arg1 queue:(id)arg2;
- (void)fulfillWithRemoteObject:(id)arg1;

@end
