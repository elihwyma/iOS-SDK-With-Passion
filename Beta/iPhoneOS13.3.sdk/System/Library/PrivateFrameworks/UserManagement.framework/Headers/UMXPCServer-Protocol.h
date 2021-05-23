/*
 Image: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

#import <UserManagement/Swift-Protocol.h>

@protocol UMXPCServer <Swift>

- (unsigned short)loginComplete;
- (unsigned short)registerUserSwitchStakeholderForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerCriticalUserSwitchStakeholderForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserSyncStakeholderForPID:machServiceName:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterStakeholderForPID:status:reason:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToUser:passcodeData:context:pid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToUser:passcodeData:context:preferences:pid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)switchToLoginUserWithPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)logoutToLoginSessionWithPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)directSwitchToUser:passcodeData:context:preferences:pid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)loginUICheckinForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserSwitchBlockingTask:forPID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUserSwitchBlockingTask:forPID: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserSwitchBlockingTask:forPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUserSwitchBlockingTask:forPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchUserSwitchBlockingTaskListWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)terminateSyncBubbleForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resumeSyncBubbleForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserSyncTask:forPID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUserSyncTask:forPID: /* Error: Ran out of types for this method. */;
- (unsigned short)addUserSyncTask:forPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeUserSyncTask:forPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)suspendUserQuotaForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)reengageUserQuotaForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)createPersona:passcodeData:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)deletePersona:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)disablePersona:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPersonaListforPid:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAllUsersPersonaListforPid:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchAsidMapforPid:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchPersona:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setSinglePersonaBundlesIdentifiers:forPersona:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setMultiPersonaBundlesIdentifiers:forPid:WithcompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchBundleIdentifiersForPersona:forPid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchMultiPersonaBundleIdentifiersforPid:withCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)personaLoginWithPid:WithUserODuuid:withUid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)personaLogoutWithPid:WithUserODuuid:withUid:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserPersonaStakeholderForPID:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerUserPersonaObserverForPID:withMachServiceName:completionHandler: /* Error: Ran out of types for this method. */;

@end
