/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

#import <ReminderKit/Swift-Protocol.h>

@class NSDate;

@interface REMReminderFetchMetadataDueDateCount : NSObject <Swift>

{
    NSDate *_dueDate;
    long long _count;
}

@property (nonatomic, readonly) NSDate *dueDate;
@property (nonatomic, readonly) long long count;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDueDate:(id)arg1 count:(long long)arg2;

@end
