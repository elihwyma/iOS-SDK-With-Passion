/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class REMReminder;

@interface REMReminderFlaggedContext : NSObject

{
    REMReminder *_reminder;
}

@property (retain, nonatomic) REMReminder *reminder;
@property (nonatomic, readonly) long long flagged;

- (id)initWithReminder:(id)arg1;

@end
