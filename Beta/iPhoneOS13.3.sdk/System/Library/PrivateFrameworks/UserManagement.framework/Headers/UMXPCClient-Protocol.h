/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <UserManagement/Swift-Protocol.h>

@protocol UMXPCClient <Swift>

- (unsigned short)uploadContentWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)willSwitchToUser:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readyToSwitchToUser:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)readyToSwitchToLoginSession:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)userSwitchTaskListDidUpdate;
- (unsigned short)deviceLoginSessionStateDidUpdate;
- (unsigned short)bubbleDidPop;
- (unsigned short)personaListDidUpdateCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)personaUpdateCallbackForMachServiceCompletionHandler: /* Error: Ran out of types for this method. */;

@end
