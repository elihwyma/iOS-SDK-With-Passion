/*
 Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

#import <NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface UNSKeyedObservable : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callOutQueue;
    NSMutableDictionary *_observersByKey;
}

- (void)addObserver:(id)arg1 forKey:(id)arg2;
- (void)removeObserver:(id)arg1 forKey:(id)arg2;
- (void)_queue_addObserver:(id)arg1 forKey:(id)arg2;
- (void)_queue_removeObserver:(id)arg1 forKey:(id)arg2;
- (void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_observersForKey:(id)arg1;
- (id)initWithQueue:(id)arg1 callOutQueue:(id)arg2;
- (void)notifyObserversKey:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
