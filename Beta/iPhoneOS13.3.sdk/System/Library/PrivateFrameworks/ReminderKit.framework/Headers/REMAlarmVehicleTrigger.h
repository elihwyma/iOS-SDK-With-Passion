/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAlarmTrigger.h>

@interface REMAlarmVehicleTrigger : REMAlarmTrigger

{
    long long _event;
}

@property (nonatomic) long long event;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1;
- (id)_deepCopy;
- (_Bool)isTemporal;
- (id)initWithObjectID:(id)arg1 event:(long long)arg2;

@end
