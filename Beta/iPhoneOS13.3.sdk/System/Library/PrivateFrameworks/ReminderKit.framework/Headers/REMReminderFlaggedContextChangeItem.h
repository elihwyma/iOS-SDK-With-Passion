/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMReminderChangeItem;

@interface REMReminderFlaggedContextChangeItem : NSObject

{
    REMReminderChangeItem *_reminderChangeItem;
}

@property (retain, nonatomic) REMReminderChangeItem *reminderChangeItem;
@property (nonatomic) long long flagged;

- (id)initWithReminderChangeItem:(id)arg1;

@end
