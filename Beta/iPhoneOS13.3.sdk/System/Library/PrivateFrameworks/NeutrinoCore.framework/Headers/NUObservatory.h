/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_queue;

@interface NUObservatory : NSObject

{
    NSObject<OS_dispatch_queue> *_serializer;
    NSMutableArray *_observations;
}

- (id)init;
- (void)removeObserver:(id)arg1;
- (void)_removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forKey:(long long)arg2;
- (id)addObserverForKey:(long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)addObserver:(id)arg1 forKey:(long long)arg2 queue:(id)arg3 block:(CDUnknownBlockType)arg4;
- (void)_addObservation:(id)arg1;
- (void)_removeObserver:(id)arg1 forKey:(long long)arg2;
- (void)notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_notifyAllObserversForKey:(long long)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
