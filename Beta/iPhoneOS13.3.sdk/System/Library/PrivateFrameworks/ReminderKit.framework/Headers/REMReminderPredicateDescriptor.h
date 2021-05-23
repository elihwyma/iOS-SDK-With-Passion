/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSDate, REMObjectID;

@interface REMReminderPredicateDescriptor : NSObject <Swift>

{
    _Bool _completed;
    long long _type;
    REMObjectID *_listID;
    REMObjectID *_parentReminderID;
    NSArray *_objectIDs;
    NSDate *_startingDueDate;
    NSDate *_endingDueDate;
    NSArray *_descriptors;
}

@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) REMObjectID *listID;
@property (retain, nonatomic) REMObjectID *parentReminderID;
@property (retain, nonatomic) NSArray *objectIDs;
@property (retain, nonatomic) NSDate *startingDueDate;
@property (retain, nonatomic) NSDate *endingDueDate;
@property (nonatomic) _Bool completed;
@property (retain, nonatomic) NSArray *descriptors;

+ (_Bool)supportsSecureCoding;
+ (id)andPredicateDescriptorWithDescriptors:(id)arg1;
+ (id)orPredicateDescriptorWithDescriptors:(id)arg1;
+ (id)predicateDescriptorForRemindersWithListID:(id)arg1;
+ (id)predicateDescriptorForRemindersWithParentReminderID:(id)arg1;
+ (id)predicateDescriptorForRemindersWithObjectIDs:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrBefore:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateOnOrAfter:(id)arg1;
+ (id)predicateDescriptorForRemindersWithDueDateBetween:(id)arg1 and:(id)arg2;
+ (id)predicateDescriptorForRemindersWithCompleted:(_Bool)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1;

@end
