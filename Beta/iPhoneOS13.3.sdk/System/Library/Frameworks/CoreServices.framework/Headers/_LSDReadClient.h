/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/_LSDClient.h>

__attribute__((visibility("hidden")))
@interface _LSDReadClient : _LSDClient

- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)getLocalizedNameWithBundleType:(id)arg1 bundleIdentifier:(id)arg2 bundleUUID:(id)arg3 context:(id)arg4 shortNameOnly:(_Bool)arg5 preferredLocalizations:(id)arg6 validationToken:(id)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getServerStoreWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
