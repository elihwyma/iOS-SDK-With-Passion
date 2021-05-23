/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMRemindersDataViewInvocationResult <Swift>

{
    NSArray *_accountStorages;
    NSArray *_listStorages;
    NSArray *_reminderStorages;
    NSArray *_objectIDs;
}

@property (nonatomic, readonly) NSArray *accountStorages;
@property (nonatomic, readonly) NSArray *listStorages;
@property (nonatomic, readonly) NSArray *reminderStorages;
@property (nonatomic, readonly) NSArray *objectIDs;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAccountStorages:(id)arg1 listStorages:(id)arg2 reminderStorages:(id)arg3 objectIDs:(id)arg4;

@end
