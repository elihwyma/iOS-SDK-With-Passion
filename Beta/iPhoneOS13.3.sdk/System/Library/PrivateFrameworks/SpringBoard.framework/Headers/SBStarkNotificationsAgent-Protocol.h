/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/Swift-Protocol.h>

@protocol SBStarkNotificationsAgentDelegate, SBStarkNotificationsConfiguring;

@protocol SBStarkNotificationsAgent <Swift>

@property (weak, nonatomic) id <SBStarkNotificationsAgentDelegate> delegate;
@property (nonatomic, readonly) id <SBStarkNotificationsConfiguring> activeConfiguration;

- (unsigned short)activeConfigurationForScreen: /* Error: Ran out of types for this method. */;
- (unsigned short)noteComponentDidActivate: /* Error: Ran out of types for this method. */;
- (unsigned short)noteComponentDidDeactivate: /* Error: Ran out of types for this method. */;

@end
