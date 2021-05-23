/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSURL.h>

@class NSPersonNameComponents, NSString;

@interface NSURL (BRCPathAdditions)

@property (nonatomic, readonly) NSString *br_lastEditorDeviceName;
@property (nonatomic, readonly) NSString *br_lastEditorName;
@property (nonatomic, readonly) NSPersonNameComponents *br_lastEditorNameComponents;

+ (id)brc_fileURLWithFileDescriptor:(int)arg1;
+ (id)brc_fileURLWithVolumeDeviceID:(id)arg1 fileID:(id)arg2 isDirectory:(_Bool)arg3;
+ (id)br_documentURLFromBookmarkableString:(id)arg1 error:(id *)arg2;
+ (void)br_containerIDsWithExternalReferencesTo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)br_documentURLFromFileObjectID:(id)arg1 error:(id *)arg2;
+ (void)br_documentURLFromBookmarkableString:(id)arg1 completion:(CDUnknownBlockType)arg2;

- (_Bool)br_isExternalDocumentReference;
- (id)br_URLByResolvingExternalDocumentReferenceWithError:(id *)arg1;
- (id)brc_issueSandboxExtensionOfClass:(const char *)arg1 error:(id *)arg2;
- (_Bool)br_isInTrash;
- (id)br_cloudDocsContainer;
- (unsigned short)br_capabilityToMoveToURL:(id)arg1 error:(id *)arg2;
- (_Bool)br_isInSyncedLocation;
- (id)br_logicalURL;
- (id)br_itemID;
- (id)br_physicalURL;
- (void)br_addPhysicalProperty;
- (id)br_containerID;
- (id)br_pathRelativeToSyncedRootURLForContainerID:(id)arg1;
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)br_containerIDIfIsDocumentsContainerURL;
- (_Bool)br_getTagNames:(id *)arg1 error:(id *)arg2;
- (_Bool)br_setTagNames:(id)arg1 error:(id *)arg2;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 error:(id *)arg3;
- (id)br_addFakeConflictLoserFromItemAtURL:(id)arg1 lastEditorDeviceName:(id)arg2 lastEditorUserName:(id)arg3 error:(id *)arg4;
- (_Bool)br_isInLocalHomeDirectory;
- (_Bool)br_isParentOfURL:(id)arg1 strictly:(_Bool)arg2;
- (void)br_bookmarkableStringWithEtag:(_Bool)arg1 onlyAllowItemKnowByServer:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)br_pathRelativeToMobileDocuments;
- (id)br_pathRelativeToSyncedRootURL:(id)arg1;
- (id)br_debugDescription;
- (_Bool)_br_isInSyncedLocationStrictly:(_Bool)arg1;
- (_Bool)br_isParentOfURL:(id)arg1;
- (id)br_externalDocumentPropertiesWithError:(id *)arg1;
- (id)br_URLByResolvingInProcessExternalDocumentReferenceWithProperties:(id)arg1;
- (_Bool)br_isInCloudDocsPrivateStorages;
- (id)br_realpathURL;
- (void)br_preCacheBookmarkData:(id)arg1 versionEtag:(id)arg2;
- (id)br_cachedBookmarkData;
- (void)br_bookmarkableStringForRemoteOpeningAppWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)br_containerIDsWithExternalReferencesWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)br_isInMobileDocuments;
- (_Bool)br_isInSyncedDesktop;
- (_Bool)br_isInSyncedDocuments;
- (_Bool)br_isStrictlyInSyncedLocation;
- (_Bool)br_isInCloudDocsPrivateStoragesForRemoteDocumentVersions;
- (void)br_isConflictedWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)br_isInSharedDocsContainer;
- (id)br_containerIDIfIsDesktopOrDocumentsURL;
- (_Bool)br_isDocumentsContainer;
- (_Bool)br_mightBeBRAlias;
- (id)br_documentRecordIDWithError:(id *)arg1;
- (_Bool)br_isPromiseURL;
- (_Bool)br_setAccessTime:(unsigned long long)arg1 error:(id *)arg2;
- (id)br_typeIdentifierWithError:(id *)arg1;
- (_Bool)br_wouldBeExcludedFromSync;
- (_Bool)br_isSymLink;
- (_Bool)br_isPCSChained;

@end
