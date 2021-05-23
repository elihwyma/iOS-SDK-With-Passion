/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <UserManagement/Swift-Protocol.h>

@protocol UMUserSwitchManagement <Swift>

- (unsigned short)switchToLoginUserWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToLoginUserWithError:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)logoutToLoginSessionWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)directSwitchToUser:passcodeData:context:preferences:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loginUICheckInWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserSwitchStakeHolder:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserSyncStakeholder:withMachServiceName: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterStakeHolder:status:reason: /* Error: Ran out of types for this method. */;
- (unsigned short)terminateSyncWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeSync;
- (unsigned short)switchToUser:passcodeData:context:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserSwitchStakeHolder: /* Error: Ran out of types for this method. */;

@end
