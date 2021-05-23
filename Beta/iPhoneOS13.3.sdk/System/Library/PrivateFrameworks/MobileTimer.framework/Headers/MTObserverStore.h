/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol NAScheduler;

@interface MTObserverStore : NSObject

{
    struct os_unfair_lock_s _observersLock;
    id <NAScheduler> _callbackScheduler;
    NSHashTable *_observers;
}

@property (retain, nonatomic) id <NAScheduler> callbackScheduler;
@property (nonatomic) struct os_unfair_lock_s observersLock;
@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic, readonly) unsigned long long count;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)initWithCallbackScheduler:(id)arg1;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_withLock:(CDUnknownBlockType)arg1;
- (void)addObserver:(id)arg1 wasFirst:(_Bool *)arg2;
- (void)removeObserver:(id)arg1 wasLast:(_Bool *)arg2;
- (_Bool)containsObserver:(id)arg1;

@end
