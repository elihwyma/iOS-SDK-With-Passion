/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <Foundation/NSObject.h>

@protocol CALNMailAccounts;

@interface CALNTriggeredEventNotificationMailtoURLProvider : NSObject

{
    id <CALNMailAccounts> _mailAccounts;
}

@property (nonatomic, readonly) id <CALNMailAccounts> mailAccounts;

- (id)mailtoURLForEvent:(id)arg1;
- (id)initWithMailAccounts:(id)arg1;

@end
