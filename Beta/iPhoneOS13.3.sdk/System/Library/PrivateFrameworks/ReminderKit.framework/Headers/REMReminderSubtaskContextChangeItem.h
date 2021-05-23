/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMReminderChangeItem;

@interface REMReminderSubtaskContextChangeItem : NSObject

{
    REMReminderChangeItem *_reminderChangeItem;
}

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;

- (void)insertReminderChangeItem:(id)arg1 beforeReminderChangeItem:(id)arg2;
- (id)initWithReminderChangeItem:(id)arg1;
- (id)_listChangeItem;
- (void)addReminderChangeItem:(id)arg1;
- (void)insertReminderChangeItem:(id)arg1 afterReminderChangeItem:(id)arg2;
- (void)undeleteSubtaskWithID:(id)arg1 usingUndo:(id)arg2;

@end
