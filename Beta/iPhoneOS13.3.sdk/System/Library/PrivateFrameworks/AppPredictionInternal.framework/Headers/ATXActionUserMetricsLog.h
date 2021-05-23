/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXUserMetricsPBActionPredictionsMetricsLogEntry;

@interface ATXActionUserMetricsLog : NSObject

{
    ATXUserMetricsPBActionPredictionsMetricsLogEntry *_metric;
}

- (id)scheme;
- (double)enrollmentPeriod;
- (double)enrollmentRate;
- (id)getPBCodableWithUserId:(id)arg1;
- (id)initWithActionResponse:(id)arg1 abGroup:(id)arg2 rankOfFirstEngagement:(id)arg3 currentCalendar:(id)arg4;

@end
