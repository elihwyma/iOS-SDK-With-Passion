/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@interface TSWPStorageBroadcaster : NSObject

{
    struct set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver>>, std::__1::allocator<id<TSWPStorageObserver>>> _observers;
}

- (void)dealloc;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id).cxx_construct;
- (void)removeAllObservers;
- (void)broadcastStorage:(id)arg1 didChangeRange:(struct _NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4;

@end
