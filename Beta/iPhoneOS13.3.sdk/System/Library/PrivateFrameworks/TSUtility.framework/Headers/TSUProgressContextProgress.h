/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUProgress.h>

@class NSObject, TSUProgressContext;

@protocol OS_dispatch_queue;

@interface TSUProgressContextProgress : TSUProgress

{
    TSUProgressContext *mProgressContext;
    NSObject<OS_dispatch_queue> *mProgressContextObserverQueue;
    _Bool hasAddedProgressContextObserver;
}

- (id)init;
- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (double)maxValue;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithProgressContext:(id)arg1;
- (void)p_updateProgressContextObserver;
- (void)p_progressDidChange:(id)arg1;

@end
