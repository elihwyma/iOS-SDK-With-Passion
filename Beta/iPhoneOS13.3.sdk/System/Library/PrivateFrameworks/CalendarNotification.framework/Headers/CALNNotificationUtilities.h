/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@interface CALNNotificationUtilities : NSObject

+ (id)_pathForSentinelFile;
+ (_Bool)shouldBehaveAsRestart;
+ (void)createSentinelFileIfNeeded;

@end
