/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSObserverList : NSObject

{
    id _owner;
    id _observers;
    _Atomic unsigned int _observerCount;
    struct os_unfair_lock_s _observersLock;
}

+ (id)_copyObserversOfObject:(id)arg1 creatingIfAbsent:(_Bool)arg2;
+ (void)destroyObserverListForObject:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)_receiveBox:(id)arg1;
- (void)removeObservation:(id)arg1;
- (void)finishObserving;
- (void)_directAddObserver:(id)arg1;
- (void)removeObserver:(id)arg1 observation:(id)arg2;
- (void)removeBlockSink:(CDUnknownBlockType)arg1 observation:(id)arg2;
- (id)addBlockSink:(CDUnknownBlockType)arg1 toObservableObject:(id)arg2 forTag:(int)arg3;
- (id)addObserver:(id)arg1 toObservableObject:(id)arg2;

@end
