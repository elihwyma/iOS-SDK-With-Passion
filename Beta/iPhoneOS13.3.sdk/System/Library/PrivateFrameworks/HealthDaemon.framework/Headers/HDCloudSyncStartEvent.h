/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDCloudSyncEvent.h>

@class NSNumber, NSString;

@interface HDCloudSyncStartEvent : HDCloudSyncEvent

{
    NSNumber *_countSinceLastSuccess;
    NSNumber *_timeIntervalSinceLastSuccess;
}

@property (copy, nonatomic, readonly) NSNumber *countSinceLastSuccess;
@property (copy, nonatomic, readonly) NSNumber *timeIntervalSinceLastSuccess;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)startEventForOperation:(long long)arg1 operationIdentifier:(id)arg2 configuration:(id)arg3 container:(id)arg4 cloudKitIdentifier:(id)arg5;
+ (id)startEventWithProfile:(id)arg1 operation:(long long)arg2 operationIdentifier:(id)arg3 reason:(long long)arg4 options:(unsigned long long)arg5 syncContainerPrefix:(id)arg6 containerIdentifier:(id)arg7 cloudKitIdentifier:(id)arg8 syncIdentifier:(id)arg9 repositorySettings:(unsigned long long)arg10;

- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(_Bool)arg10 internalSettingManateeEnabled:(_Bool)arg11;
- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;

@end
