/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, REMReminder;

@interface REMReminderAttachmentContext : NSObject

{
    REMReminder *_reminder;
}

@property (retain, nonatomic) REMReminder *reminder;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) NSArray *fileAttachments;
@property (nonatomic, readonly) NSArray *imageAttachments;
@property (nonatomic, readonly) NSArray *urlAttachments;

- (id)attachmentsOfClass:(Class)arg1;
- (id)initWithReminder:(id)arg1;

@end
