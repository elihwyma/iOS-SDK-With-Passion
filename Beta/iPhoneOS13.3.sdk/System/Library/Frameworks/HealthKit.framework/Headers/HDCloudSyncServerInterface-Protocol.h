/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <HealthKit/Swift-Protocol.h>

@protocol HDCloudSyncServerInterface <Swift>

- (unsigned short)remote_forceCloudSyncWithOptions:reason:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_forceCloudSyncDataUploadForProfileWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchCloudSyncStatusWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchCloudSyncProgressWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_forceCloudResetWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_fetchCloudDescriptionWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_disableCloudSyncWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_enableCloudSyncWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_accountConfigurationDidChangeWithCompletion: /* Error: Ran out of types for this method. */;
- (unsigned short)remote_oldestSampleStartDateInHealthDatabaseWithCompletion: /* Error: Ran out of types for this method. */;

@end
