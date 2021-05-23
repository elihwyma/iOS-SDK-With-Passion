/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class CMGestureManager, NSMutableDictionary;

@interface SBFMotionGestureController : NSObject

{
    NSMutableDictionary *_observersByPriority;
    CMGestureManager *_motionGestureManager;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (_Bool)_hasObservers;
- (void)_removeGestureManager;
- (void)addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)_addGestureObserver:(id)arg1 withPriority:(unsigned long long)arg2;
- (void)_updateGestureManager;
- (void)_removeGestureObserver:(id)arg1;
- (id)_observersForPriority:(unsigned long long)arg1;
- (void)_enumerateObserversByPriority:(CDUnknownBlockType)arg1;
- (id)_highestPriorityObservers;
- (void)_addGestureManager;
- (void)_notifyObserversOfGesture:(int)arg1;
- (void)addGestureObserver:(id)arg1;
- (void)removeGestureObserver:(id)arg1;

@end
