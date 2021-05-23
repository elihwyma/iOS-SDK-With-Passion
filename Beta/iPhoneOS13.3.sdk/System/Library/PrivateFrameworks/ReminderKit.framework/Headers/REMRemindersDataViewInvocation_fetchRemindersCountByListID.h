/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchRemindersCountByListID <Swift>

{
    REMObjectID *_listID;
}

@property (nonatomic, readonly) REMObjectID *listID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithListID:(id)arg1;

@end
