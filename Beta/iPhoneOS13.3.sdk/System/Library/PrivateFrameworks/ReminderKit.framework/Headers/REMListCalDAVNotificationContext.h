/*
 Image: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

#import <Foundation/NSObject.h>

@class NSArray, REMList;

@interface REMListCalDAVNotificationContext : NSObject

{
    REMList *_list;
}

@property (retain, nonatomic) REMList *list;
@property (nonatomic, readonly) NSArray *calDAVNotifications;

- (id)initWithList:(id)arg1;

@end
