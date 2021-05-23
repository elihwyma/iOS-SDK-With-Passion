/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface ATXPeriodicLogger : NSObject

{
    NSArray *_sources;
    NSDate *_lastSent;
    double _uploadInterval;
    _Bool _enrolled;
    NSDate *_lastEnrolled;
    double _enrollmentRate;
    double _enrollmentPeriod;
}

+ (id)readLastEnrolledFromDefaults;
+ (id)readLastSentFromDefaults;
+ (_Bool)readEnrollmentFromDefaults;
+ (double)getEnrollmentRate;
+ (id)readDateFromDefaultsForKey:(id)arg1;

- (id)init;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (void)submit:(id)arg1;
- (id)initWithSources:(id)arg1 uploadInterval:(double)arg2 enrollmentPeriod:(double)arg3 enrollmentRate:(double)arg4;
- (void)sendMetricsIfNeeded;
- (id)sendMetricsIfNeededAtThisTime:(id)arg1;
- (id)sendMetricsAtThisTime:(id)arg1;
- (id)compileAndSendMetrics:(id)arg1;
- (_Bool)isItTimeYet:(id)arg1;
- (id)getLastSent;
- (void)setLastSentToTime:(id)arg1;
- (_Bool)getEnrollment;
- (void)setEnrollment:(_Bool)arg1;
- (_Bool)determineEnrollment;
- (void)overrideEnrollmentRate:(double)arg1;
- (_Bool)hasEnrollmentExpired:(id)arg1;
- (id)getLastEnrolled;
- (void)setLastEnrolledToTime:(id)arg1;
- (void)setEnabledOnSourcesTo:(_Bool)arg1;
- (id)compileLog;
- (id)convertDictionaryToDataUnits:(id)arg1;
- (id)getUserId;
- (id)generateUserId;
- (void)clearUserId;

@end
