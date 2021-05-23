/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@protocol ATXUserMetricsLoggerTarget;

@interface ATXUserMetricsLogger : NSObject

{
    NSObject<ATXUserMetricsLoggerTarget> *_target;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)storeUserMetric:(id)arg1;
- (void)storeUserMetric:(id)arg1 forceUserId:(id)arg2;

@end
