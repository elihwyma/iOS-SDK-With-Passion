/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <TSUtility/TSUProgress.h>

@class NSObject, TSUScaledProgressStorage;

@protocol OS_dispatch_queue;

@interface TSUScaledProgress : TSUProgress

{
    TSUScaledProgressStorage *mStorage;
    TSUProgress *mProgress;
    id mProgressObserver;
    NSObject<OS_dispatch_queue> *mProgressQueue;
}

@property (retain) TSUProgress *progress;
@property double maxValue;

- (id)init;
- (void)dealloc;
- (double)value;
- (_Bool)isIndeterminate;
- (void)removeProgressObserver:(id)arg1;
- (id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)p_removeProgressObserverFromProgressInQueue;
- (void)p_addProgressObserverToProgressInQueue;

@end
