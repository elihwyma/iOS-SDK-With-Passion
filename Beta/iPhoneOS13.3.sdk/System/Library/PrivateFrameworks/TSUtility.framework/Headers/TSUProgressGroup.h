/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUProgress.h>

@class NSArray, NSObject;

@protocol OS_dispatch_queue;

@interface TSUProgressGroup : TSUProgress

{
    NSArray *mChildren;
    NSArray *mChildrenProgressObservers;
    NSObject<OS_dispatch_queue> *mChildrenProgressObserversQueue;
}

- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (double)maxValue;
- (id)initWithChildren:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_updateChildrenProgressObservers;

@end
