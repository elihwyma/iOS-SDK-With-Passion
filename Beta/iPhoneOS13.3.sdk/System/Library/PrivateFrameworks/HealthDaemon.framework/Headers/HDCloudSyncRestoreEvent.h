/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface HDCloudSyncRestoreEvent : NSObject

{
    long long _restorePhase;
    NSDate *_startDate;
    NSDate *_endDate;
    double _duration;
    long long _dbSize;
    long long _hfdSize;
    long long _journalCount;
}

@property (nonatomic, readonly) long long restorePhase;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) long long dbSize;
@property (nonatomic, readonly) long long hfdSize;
@property (nonatomic, readonly) long long journalCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)restoreEventForPhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7;

- (unsigned int)AWDMetricID;
- (id)codableRepresentationForAWDSubmission;
- (id)initWithRestorePhase:(long long)arg1 startDate:(id)arg2 endDate:(id)arg3 duration:(double)arg4 dbSize:(long long)arg5 hfdSize:(long long)arg6 journalCount:(long long)arg7;

@end
