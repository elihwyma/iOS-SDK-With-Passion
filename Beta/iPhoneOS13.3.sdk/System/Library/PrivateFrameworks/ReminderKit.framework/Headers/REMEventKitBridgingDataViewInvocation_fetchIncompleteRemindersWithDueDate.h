/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray, NSDate;

@interface REMEventKitBridgingDataViewInvocation_fetchIncompleteRemindersWithDueDate <Swift>

{
    NSArray *_listIDs;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSArray *listIDs;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
