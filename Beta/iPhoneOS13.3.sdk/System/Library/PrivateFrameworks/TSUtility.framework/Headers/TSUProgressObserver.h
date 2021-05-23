/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface TSUProgressObserver : NSObject

{
    double mValueInterval;
    NSObject<OS_dispatch_queue> *mQueue;
    CDUnknownBlockType mHandler;
    double mLastHandledValue;
    _Bool mLastHandledIndeterminate;
}

@property (nonatomic, readonly) double valueInterval;

- (id)init;
- (void)dealloc;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(_Bool)arg3;

@end
