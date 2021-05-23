/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/Swift-Protocol.h>

@class NSArray;

@interface REMEventKitBridgingDataViewInvocation_fetchReminders <Swift>

{
    NSArray *_listIDs;
}

@property (nonatomic, readonly) NSArray *listIDs;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithListIDs:(id)arg1;

@end
