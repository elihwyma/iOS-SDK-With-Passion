/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/Swift-Protocol.h>

@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <Swift>

{
    double _timeInterval;
}

@property (nonatomic) double timeInterval;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_deepCopy;
- (id)initWithTimeInterval:(double)arg1;
- (_Bool)isTemporal;
- (id)initWithObjectID:(id)arg1 timeInterval:(double)arg2;

@end
