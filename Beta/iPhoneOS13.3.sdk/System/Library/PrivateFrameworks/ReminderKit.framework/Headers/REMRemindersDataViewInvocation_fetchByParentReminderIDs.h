/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByParentReminderIDs <Swift>

{
    NSArray *_parentReminderIDs;
}

@property (nonatomic, readonly) NSArray *parentReminderIDs;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithParentReminderIDs:(id)arg1;

@end
