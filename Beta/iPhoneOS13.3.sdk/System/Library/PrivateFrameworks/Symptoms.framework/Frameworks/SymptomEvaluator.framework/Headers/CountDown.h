/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol OS_dispatch_source;

@interface CountDown : NSObject

{
    NSObject<OS_dispatch_source> *timer;
    unsigned int count;
    NSDate *_startTime;
}

@property (nonatomic, readonly) NSDate *startTime;

- (id)init;
- (void)stop;
- (void)goOffNext:(unsigned long long)arg1 fromTime:(id)arg2 forEpoch:(id)arg3 timesTotal:(unsigned long long)arg4 onQueue:(id)arg5 withIterationBlock:(CDUnknownBlockType)arg6 completionBlock:(CDUnknownBlockType)arg7;

@end
