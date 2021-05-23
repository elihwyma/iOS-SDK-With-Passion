/*
 Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

#import <Foundation/NSObject.h>

@class EMRemoteConnection;

__attribute__((visibility("hidden")))
@interface _EMRemoteInterfaceDistantObject : NSObject

{
    _Bool _synchronous;
    EMRemoteConnection *_remoteInterface;
    CDUnknownBlockType _reattemptHandler;
}

@property (nonatomic, readonly) EMRemoteConnection *remoteInterface;
@property (copy, nonatomic, readonly) CDUnknownBlockType reattemptHandler;
@property (nonatomic, readonly, getter=isSynchronous) _Bool synchronous;

- (_Bool)conformsToProtocol:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_forwardStackInvocation:(id)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxy;
- (id)reattemptingRemoteObjectProxy;
- (id)initWithRemoteInterface:(id)arg1 synchronous:(_Bool)arg2 reattemptHandler:(CDUnknownBlockType)arg3;
- (id)reattemptingRemoteObjectProxyWithReattemptHandler:(CDUnknownBlockType)arg1;

@end
