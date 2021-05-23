/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/Swift-Protocol.h>

@protocol MCCloudConfigurationDaemonServiceInterface <Swift>

- (unsigned short)retrieveDeviceUploadOrganizationsWithCredentials:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveDeviceUploadRequestTypesWithCredentials:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)retrieveDeviceUploadSoldToIdsForOrganization:credentials:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)submitDeviceUploadRequest:credentials:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)provisionallyEnrollWithNonce:completionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfigurationWithCompletionBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)unenrollWithCompletionBlock: /* Error: Ran out of types for this method. */;

@end
