/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMReminder;

@interface REMReminderSubtaskContext : NSObject

{
    REMReminder *_reminder;
}

@property (retain, nonatomic) REMReminder *reminder;
@property (nonatomic, readonly) REMReminder *parentReminder;

- (id)fetchRemindersWithError:(id *)arg1;
- (id)initWithReminder:(id)arg1;

@end
