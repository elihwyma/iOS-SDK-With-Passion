/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID <Swift>

{
    REMObjectID *_parentReminderID;
}

@property (nonatomic, readonly) REMObjectID *parentReminderID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderID:(id)arg1;

@end
