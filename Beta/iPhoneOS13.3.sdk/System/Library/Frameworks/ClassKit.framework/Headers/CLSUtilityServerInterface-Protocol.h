/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/Swift-Protocol.h>

@protocol CLSUtilityServerInterface <Swift>

- (unsigned short)remote_databasePathWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_recreateDatabaseWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_syncStatsWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_syncPushWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_syncFetchWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_addAuthorizationStatus:forContextAtPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_removeAuthorizationStatus:forContextAtPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_authorizationStatusForContextAtPath:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_recreateDevelopmentDatabaseWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_setDevMode:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_getDevModeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_statusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_featureIsEnabled:completion: /* Error: Ran out of types for this method. */;

@end
