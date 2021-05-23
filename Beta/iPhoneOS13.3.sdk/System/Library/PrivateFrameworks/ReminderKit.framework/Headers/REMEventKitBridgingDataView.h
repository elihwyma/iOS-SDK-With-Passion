/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMStore;

@interface REMEventKitBridgingDataView : NSObject

{
    REMStore *_store;
}

@property (nonatomic, readonly) REMStore *store;

- (id)initWithStore:(id)arg1;
- (id)fetchListsWithError:(id *)arg1;
- (id)fetchRemindersWithListIDs:(id)arg1 error:(id *)arg2;
- (id)fetchIncompleteRemindersWithDueDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id *)arg4;
- (id)fetchCompletedRemindersWithCompletionDateFrom:(id)arg1 to:(id)arg2 withListIDs:(id)arg3 error:(id *)arg4;

@end
