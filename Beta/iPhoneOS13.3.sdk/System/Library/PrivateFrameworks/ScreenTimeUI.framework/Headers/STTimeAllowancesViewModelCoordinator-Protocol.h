/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeUI.framework/ScreenTimeUI
 */

#import <ScreenTimeUI/Swift-Protocol.h>

@class STTimeAllowancesViewModel;

@protocol STTimeAllowancesViewModelCoordinator <Swift>

@property (readonly) STTimeAllowancesViewModel *viewModel;

+ (unsigned short)saveAllowance:forUser:error: /* Error: Ran out of types for this method. */;

- (unsigned short)saveAllAllowancesEnabled:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteAllowance:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAllowance:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveDeviceBedtime:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAlwaysAllowList:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)respondToAskForTime:withApproval:timeApproved:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)saveDefaultAlwaysAllowListWithCompletionHandler: /* Error: Ran out of types for this method. */;

@end
