/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

#import <PassKitCore/Swift-Protocol.h>

@class NSDate, NSString;

@interface PDScheduledActivityCriteria : NSObject <Swift>

{
    NSString *_priorityKey;
    long long _gracePeriod;
    _Bool _requireMainsPower;
    _Bool _requireScreenSleep;
    _Bool _requireNetworkConnectivity;
    _Bool _repeating;
    NSDate *_startDate;
    NSDate *_endDate;
    double _repeatInterval;
    NSString *_reason;
}

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) _Bool requireMainsPower;
@property (nonatomic) _Bool requireScreenSleep;
@property (nonatomic) _Bool requireNetworkConnectivity;
@property (nonatomic, getter=isRepeating) _Bool repeating;
@property (nonatomic) double repeatInterval;
@property (copy, nonatomic) NSString *reason;

+ (_Bool)supportsSecureCoding;
+ (id)priorityActivityCriteriaWithStartDate:(id)arg1;
+ (id)maintenanceActivityCriteriaWithStartDate:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)xpcActivityCriteria;
- (id)initWithPriorityKey:(id)arg1 gracePeriod:(long long)arg2 startDate:(id)arg3;
- (_Bool)isEqualToScheduledAcivityCriteria:(id)arg1;

@end
