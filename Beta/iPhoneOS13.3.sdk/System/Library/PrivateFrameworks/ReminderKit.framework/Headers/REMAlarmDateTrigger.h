/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMAlarmTrigger.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDateComponents;

@interface REMAlarmDateTrigger : REMAlarmTrigger <Swift>

{
    NSDateComponents *_dateComponents;
}

@property (copy, nonatomic) NSDateComponents *dateComponents;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_deepCopy;
- (id)initWithDateComponents:(id)arg1;
- (_Bool)isTemporal;
- (id)initWithObjectID:(id)arg1 dateComponents:(id)arg2;

@end
