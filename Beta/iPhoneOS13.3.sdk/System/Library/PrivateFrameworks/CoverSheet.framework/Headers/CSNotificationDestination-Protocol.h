/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/Swift-Protocol.h>

@protocol CSNotificationDispatcher;

@protocol CSNotificationDestination <Swift>

@property (weak, nonatomic) id <CSNotificationDispatcher> dispatcher;

- (unsigned short)postNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)updateNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)withdrawNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)updateNotificationSectionSettings:previousSectionSettings: /* Error: Ran out of types for this method. */;

@end
