/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CALNNotificationRecordsDiff : NSObject

{
    NSArray *_addedRecords;
    NSArray *_removedRecords;
    NSArray *_modifiedRecords;
}

@property (copy, nonatomic, readonly) NSArray *addedRecords;
@property (copy, nonatomic, readonly) NSArray *removedRecords;
@property (copy, nonatomic, readonly) NSArray *modifiedRecords;

+ (id)emptyDiff;
+ (id)diffWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;

- (id)description;
- (id)initWithAddedRecords:(id)arg1 removedRecords:(id)arg2 modifiedRecords:(id)arg3;

@end
