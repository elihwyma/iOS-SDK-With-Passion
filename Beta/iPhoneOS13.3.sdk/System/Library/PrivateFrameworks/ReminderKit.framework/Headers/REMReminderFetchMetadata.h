/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <ReminderKit/REMFetchMetadata.h>

@class NSArray, NSDictionary;

@interface REMReminderFetchMetadata : REMFetchMetadata

{
    NSDictionary *_subtaskCounts;
    NSArray *_dueDateCounts;
}

@property (nonatomic, readonly) NSDictionary *subtaskCounts;
@property (nonatomic, readonly) NSArray *dueDateCounts;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubtaskCounts:(id)arg1;
- (id)initWithDueDateCounts:(id)arg1;
- (id)initWithSubtaskCounts:(id)arg1 dueDateCounts:(id)arg2;

@end
