/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDClient.h>

__attribute__((visibility("hidden")))
@interface _LSDModifyClient : _LSDClient

- (void)setDatabaseIsSeeded:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)registerItemInfo:(id)arg1 alias:(id)arg2 diskImageAlias:(id)arg3 bundleURL:(id)arg4 installationPlist:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)registerExtensionPoint:(id)arg1 platform:(unsigned int)arg2 withInfo:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)unregisterExtensionPoint:(id)arg1 platform:(unsigned int)arg2 withVersion:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 roles:(unsigned int)arg3 forContentType:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setHandler:(id)arg1 version:(struct LSVersionNumber)arg2 forURLScheme:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeHandlerForURLScheme:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronizeWithMobileInstallation;
- (void)unregisterApplicationAtURL:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateRecordForApp:(id)arg1 withSINF:(id)arg2 iTunesMetadata:(id)arg3 placeholderMetadata:(id)arg4 sendNotification:(int)arg5 completionHandler:(CDUnknownBlockType)arg6;
- (void)garbageCollectDatabaseWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)rebuildApplicationDatabasesForSystem:(_Bool)arg1 internal:(_Bool)arg2 user:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)removeHandlerForContentType:(id)arg1 roles:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)unregisterBundleUnit:(unsigned int)arg1 options:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)registerContainerURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateContainerUnit:(unsigned int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)installApplication:(id)arg1 atURL:(id)arg2 withOptions:(id)arg3 installType:(unsigned long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)uninstallApplication:(id)arg1 withOptions:(id)arg2 uninstallType:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;
- (void)setPreferenceValue:(id)arg1 forKey:(id)arg2 forApplicationAtURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (_Bool)canRegisterWithOptions:(unsigned int)arg1;
- (_Bool)clientHasMIEntitlement:(id)arg1;

@end
