/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class BBObserver, BLTBBObserverDelegate, NSLock, NSString;

@protocol OS_dispatch_queue;

@interface BLTBBObserver : NSObject

{
    BBObserver *_actualObserver;
    NSLock *_actualObserverLock;
    BLTBBObserverDelegate *_delegateSurrogate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSString *_name;
    unsigned long long _priority;
    _Bool _isGateway;
    unsigned long long _observerFeed;
    _Bool _hasFeed;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)surrogateWithQueue:(id)arg1 calloutQueue:(id)arg2;
+ (id)surrogateGatewayWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4;

- (void)dealloc;
- (_Bool)isKindOfClass:(Class)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObserverFeed:(unsigned long long)arg1;
- (void)noteServerConnectionStateChanged:(_Bool)arg1;
- (void)_reconnectObserver;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2 name:(id)arg3 priority:(unsigned long long)arg4 isGateway:(_Bool)arg5;

@end
