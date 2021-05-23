/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSPointerArray;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUObserverRegistry : NSObject

{
    NSPointerArray *__observers;
    NSObject<OS_dispatch_queue> *__observerQueue;
}

@property (nonatomic, readonly) NSPointerArray *_observers;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_observerQueue;

- (id)init;
- (void)registerObserver:(id)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;

@end
