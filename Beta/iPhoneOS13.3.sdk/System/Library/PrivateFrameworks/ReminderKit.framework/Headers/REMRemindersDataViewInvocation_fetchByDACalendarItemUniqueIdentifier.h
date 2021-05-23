/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier <Swift>

{
    NSArray *_daCalendarItemUniqueIdentifiers;
    REMObjectID *_listObjectID;
}

@property (nonatomic, readonly) NSArray *daCalendarItemUniqueIdentifiers;
@property (nonatomic, readonly) REMObjectID *listObjectID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)arg1 listObjectID:(id)arg2;

@end
