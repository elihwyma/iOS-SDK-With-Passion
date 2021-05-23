/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata

{
    NSDictionary *_incompleteReminderCounts;
    long long _scheduledCount;
}

@property (nonatomic, readonly) NSDictionary *incompleteReminderCounts;
@property (nonatomic, readonly) long long scheduledCount;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2;

@end
