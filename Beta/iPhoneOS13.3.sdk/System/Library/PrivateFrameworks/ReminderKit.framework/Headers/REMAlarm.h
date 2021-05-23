/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDate, NSString, REMAlarmTrigger, REMObjectID;

@interface REMAlarm : NSObject <Swift>

{
    REMAlarmTrigger *_trigger;
    REMObjectID *_objectID;
    NSDate *_acknowledgedDate;
    NSString *_alarmUID;
    NSString *_originalAlarmUID;
}

@property (retain, nonatomic) REMObjectID *objectID;
@property (retain, nonatomic) REMAlarmTrigger *trigger;
@property (retain, nonatomic) NSDate *acknowledgedDate;
@property (retain, nonatomic) NSString *alarmUID;
@property (retain, nonatomic) NSString *originalAlarmUID;
@property (nonatomic, readonly) REMObjectID *remObjectID;

+ (_Bool)supportsSecureCoding;
+ (id)cdEntityName;
+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isOriginal;
- (id)initWithAlarm:(id)arg1 objectID:(id)arg2;
- (id)initWithTrigger:(id)arg1;
- (_Bool)isContentEqual:(id)arg1;
- (id)initWithTrigger:(id)arg1 objectID:(id)arg2;
- (_Bool)isAcknowledged;
- (_Bool)isSnooze;

@end
