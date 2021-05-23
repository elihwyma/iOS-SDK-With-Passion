/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDProfile, NSDate, NSString, NSUUID;

@interface HDCloudSyncEvent : NSObject

{
    _Bool _cloudKitManateeEnabled;
    _Bool _internalSettingManateeEnabled;
    unsigned int _pcsReportManateeStatus;
    long long _operation;
    long long _reason;
    unsigned long long _options;
    NSString *_syncCirclePrefix;
    NSString *_containerIdentifier;
    NSUUID *_syncID;
    NSUUID *_operationID;
    NSString *_cloudKitIdentifer;
    HDProfile *_profile;
    NSDate *_eventTime;
}

@property (weak, nonatomic, readonly) HDProfile *profile;
@property (copy, nonatomic, readonly) NSDate *eventTime;
@property (nonatomic, readonly) long long operation;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) NSString *syncCirclePrefix;
@property (copy, nonatomic, readonly) NSString *containerIdentifier;
@property (copy, nonatomic, readonly) NSUUID *syncID;
@property (copy, nonatomic, readonly) NSUUID *operationID;
@property (copy, nonatomic, readonly) NSString *cloudKitIdentifer;
@property (nonatomic, readonly) _Bool cloudKitManateeEnabled;
@property (nonatomic, readonly) _Bool internalSettingManateeEnabled;
@property (nonatomic, readonly) unsigned int pcsReportManateeStatus;

- (id)description;
- (id)initWithProfile:(id)arg1 operation:(long long)arg2 reason:(long long)arg3 options:(unsigned long long)arg4 syncCirclePrefix:(id)arg5 containerID:(id)arg6 cloudKitIdentifier:(id)arg7 syncID:(id)arg8 operationID:(id)arg9 cloudKitManateeEnabled:(_Bool)arg10 internalSettingManateeEnabled:(_Bool)arg11;
- (id)codableEventForAWDSubmission;

@end
