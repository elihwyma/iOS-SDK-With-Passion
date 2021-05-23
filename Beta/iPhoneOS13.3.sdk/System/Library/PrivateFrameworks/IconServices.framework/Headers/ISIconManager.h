/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSHashTable;

@protocol ISIconCache, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ISIconManager : NSObject

{
    struct os_unfair_lock_s _observerLock;
    id _iconCache;
    id _iconRegistry;
    id _observers;
    id _internalQueue;
}

@property (retain) NSHashTable *iconRegistry;
@property (retain) NSHashTable *observers;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (readonly) id <ISIconCache> iconCache;

+ (id)sharedInstance;

- (void)dealloc;
- (id)_init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (id)findOrRegisterIcon:(id)arg1;

@end
