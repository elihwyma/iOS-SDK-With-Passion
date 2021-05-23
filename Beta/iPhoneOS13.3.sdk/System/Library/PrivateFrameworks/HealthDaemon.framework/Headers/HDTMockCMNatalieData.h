/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <CoreMotion/CMNatalieData.h>

@class NSDate, NSUUID;

@interface HDTMockCMNatalieData : CMNatalieData

{
    NSDate *_date;
    double _mets;
    double _active;
    double _basal;
    long long _recordID;
    NSUUID *_source;
}

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)startDate;
- (id)endDate;
- (id)sourceId;
- (long long)recordId;
- (id)mets;
- (id)natalies;
- (id)basalNatalies;
- (id)initWithTimestamp:(double)arg1 mets:(double)arg2 active:(double)arg3 basal:(double)arg4 recordID:(long long)arg5 source:(id)arg6;

@end
