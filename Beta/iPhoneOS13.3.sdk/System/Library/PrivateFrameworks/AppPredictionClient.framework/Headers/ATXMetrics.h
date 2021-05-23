/*
 Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

#import <Foundation/NSObject.h>

@class PETScalarEventTracker;

@protocol OS_dispatch_queue;

@interface ATXMetrics : NSObject

{
    NSObject<OS_dispatch_queue> *_loggingQueue;
    PETScalarEventTracker *_viewTracker;
    PETScalarEventTracker *_executeTracker;
    PETScalarEventTracker *_errorTracker;
}

+ (id)_sharedInstance;
+ (void)logError:(long long)arg1 inContext:(long long)arg2;
+ (void)logActionViewForType:(long long)arg1 inContext:(long long)arg2;
+ (void)logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;

- (id)init;
- (void)_logError:(long long)arg1 inContext:(long long)arg2;
- (void)_logActionViewForType:(long long)arg1 inContext:(long long)arg2;
- (void)_logActionExecuteForType:(long long)arg1 inContext:(long long)arg2;

@end
