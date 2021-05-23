/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@protocol _LSDModifyProtocol

- (unsigned short)setDatabaseIsSeeded:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerItemInfo:alias:diskImageAlias:bundleURL:installationPlist:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerExtensionPoint:platform:withInfo:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterExtensionPoint:platform:withVersion:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setHandler:version:roles:forContentType:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)setHandler:version:forURLScheme:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeHandlerForURLScheme:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)synchronizeWithMobileInstallation;
- (unsigned short)unregisterApplicationAtURL:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)updateRecordForApp:withSINF:iTunesMetadata:placeholderMetadata:sendNotification:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)garbageCollectDatabaseWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)rebuildApplicationDatabasesForSystem:internal:user:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)removeHandlerForContentType:roles:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)unregisterBundleUnit:options:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)registerContainerURL:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)updateContainerUnit:completionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)resetServerStoreWithCompletionHandler: /* Error: Ran out of types for this method. */;
- (unsigned short)installApplication:atURL:withOptions:installType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)uninstallApplication:withOptions:uninstallType:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setPreferenceValue:forKey:forApplicationAtURL:completionHandler: /* Error: Ran out of types for this method. */;

@end
