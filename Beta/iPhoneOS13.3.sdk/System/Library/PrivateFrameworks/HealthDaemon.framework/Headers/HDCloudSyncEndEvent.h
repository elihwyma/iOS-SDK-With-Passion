/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncEvent.h>

@class NSError, NSNumber, NSString;

@interface HDCloudSyncEndEvent : HDCloudSyncEvent

{
    double _duration;
    long long _result;
    NSNumber *_countSinceLastSuccess;
    NSNumber *_timeIntervalSinceLastSuccess;
    NSError *_error;
    NSError *_underlyingError;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long result;
@property (copy, nonatomic, readonly) NSNumber *countSinceLastSuccess;
@property (copy, nonatomic, readonly) NSNumber *timeIntervalSinceLastSuccess;
@property (copy, nonatomic, readonly) NSError *error;
@property (copy, nonatomic, readonly) NSError *underlyingError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_endEventWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 startTime:(id)arg10 result:(long long)arg11 cloudKitManateeEnabled:(_Bool)arg12 internalSettingManateeEnabled:(_Bool)arg13 error:(id)arg14;
+ (_Bool)_errorAndUnderlyingErrorForError:(id)arg1 errorOut:(out id *)arg2 underlyingErrorOut:(out id *)arg3;
+ (id)endEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5 startTime:(id)arg6 result:(long long)arg7 error:(id)arg8;
+ (id)endEventForStartEvent:(id)arg1 result:(long long)arg2 error:(id)arg3;

- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 duration:(double)arg10 result:(long long)arg11 error:(id)arg12 underlyingError:(id)arg13 countSinceLastSuccess:(id)arg14 timeIntervalSinceLastSuccess:(id)arg15 cloudKitManateeEnabled:(_Bool)arg16 internalSettingManateeEnabled:(_Bool)arg17;

@end
