/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@class NSDate, NSNumber, NSUUID;

@interface CMNatalieData : CMLogItem

{
    long long fRecordId;
    double fStartDate;
    long long fActivityType;
    double fMets;
    double fNatalies;
    double fBasalNatalies;
    NSUUID *fSourceId;
}

@property (nonatomic, readonly) long long recordId;
@property (nonatomic, readonly) NSUUID *sourceId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSNumber *mets;
@property (nonatomic, readonly) NSNumber *natalies;
@property (nonatomic, readonly) NSNumber *basalNatalies;
@property (nonatomic, readonly) long long session;
@property (nonatomic, readonly) long long activityType;

+ (_Bool)supportsSecureCoding;
+ (id)maxNatalieEntries;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(double)arg1 recordId:(long long)arg2 activityType:(long long)arg3 mets:(double)arg4 natalies:(double)arg5 basalNatalies:(double)arg6 sourceId:(id)arg7;

@end
