/*
 Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@protocol RMXPCService

- (unsigned short)subscribeToConfigurationChangesWithTypes:darwinNotificationName:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unsubscribeFromConfigurationChangesForDarwinNotificationName:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)fetchConfigurationsWithTypes:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollDeviceChannelWithURI:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)enrollUserChannelWithURI:accountIdentifier:accountType:authenticationToken:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unenrollWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unenrollWithAccountIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)syncWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)sendStatusData:toManagementSourceWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountAddedWithIdentifier:accountType:authenticationToken:bootstrapURI:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)accountRemovedWithIdentifier:completionHandler: /* Error: Ran out of types for this method. */;

@end
