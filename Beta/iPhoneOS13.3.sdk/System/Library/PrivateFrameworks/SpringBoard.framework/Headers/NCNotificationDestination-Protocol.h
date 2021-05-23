/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@class BSServiceConnectionEndpoint, NSString;

@protocol NCNotificationDestinationDelegate;

@protocol NCNotificationDestination <Swift>

@property (weak, nonatomic) id <NCNotificationDestinationDelegate> delegate;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BSServiceConnectionEndpoint *endpoint;

- (unsigned short)postNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)withdrawNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)modifyNotificationRequest: /* Error: Ran out of types for this method. */;
- (unsigned short)canReceiveNotificationRequest: /* Error: Ran out of types for this method. */;

@end
