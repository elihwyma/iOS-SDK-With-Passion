/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@interface HDActivityCacheActiveSourceCalculator : NSObject

{
    vector_89c96404 _workouts;
    vector_67487aec _activationLogEntries;
}

- (id).cxx_construct;
- (void)setWorkouts:(vector_89c96404 *)arg1;
- (struct _HDActivityCacheActiveSourceCalculatorSourceEvent)_baseSourceEvent;
- (void)setActivationLogEntries:(vector_67487aec *)arg1;
- (vector_67487aec)createActiveSourceLog;
- (struct HDActivityCacheActiveSource)_baseActiveSource;

@end
