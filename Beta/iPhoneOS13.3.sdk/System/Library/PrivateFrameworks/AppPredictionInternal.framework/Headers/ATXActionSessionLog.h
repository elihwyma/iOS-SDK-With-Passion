/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class ATXActionResponse;

@interface ATXActionSessionLog : NSObject

{
    unsigned long long _engagementType;
    ATXActionResponse *_actionResponse;
    _Bool _isShadowLog;
}

+ (double)_bucketize:(double)arg1 bucketSize:(double)arg2;
+ (double)roundedElapsedTimeWithStartDate:(id)arg1 endDate:(id)arg2 accuracy:(double)arg3;
+ (void)performSessionLoggingWithActionResponse:(id)arg1 engagementType:(unsigned long long)arg2 isShadowLog:(_Bool)arg3 forTestingMode:(_Bool)arg4;

- (id)init;
- (id)initWithActionEngagementType:(unsigned long long)arg1 actionResponse:(id)arg2 isShadowLog:(_Bool)arg3;
- (void)performSessionLogging:(_Bool)arg1;
- (id)constructSessionLogDictionaryWithAWDSessionOut:(id *)arg1 forTestingMode:(_Bool)arg2;
- (void)_removeScoreInputsWithoutCrashTracerApproval:(id)arg1;
- (id)constructActionDataDictionaryWithEngagedIndicesOut:(id *)arg1 andAWDActionOut:(id *)arg2 andEngagementTypeFound:(unsigned long long *)arg3 forTestingMode:(_Bool)arg4;

@end
