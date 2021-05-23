/*
 Image: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
 */

#import <CalendarNotification/Swift-Protocol.h>

@class NSArray, NSString;

@protocol CALNNotificationSource <Swift>

@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) NSArray *categories;

- (unsigned short)contentForNotificationWithSourceClientIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)refreshNotifications: /* Error: Ran out of types for this method. */;

@end
