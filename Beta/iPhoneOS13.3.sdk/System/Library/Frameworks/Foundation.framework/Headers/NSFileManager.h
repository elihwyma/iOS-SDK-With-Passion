/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol NSFileManagerDelegate, NSObject><NSCopying><NSCoding;

@interface NSFileManager : NSObject

@property (copy, readonly) NSURL *homeDirectoryForCurrentUser;
@property (copy, readonly) NSURL *temporaryDirectory;
@property id <NSFileManagerDelegate> delegate;
@property (copy, readonly) NSString *currentDirectoryPath;
@property (copy, readonly) id <NSObject><NSCopying><NSCoding> ubiquityIdentityToken;

+ (id)defaultManager;

- (void)dealloc;
- (id)_info;
- (id)stringWithFileSystemRepresentation:(const char *)arg1 length:(unsigned long long)arg2;
- (id)displayNameAtPath:(id)arg1;
- (id)componentsToDisplayForPath:(id)arg1;
- (id)destinationOfSymbolicLinkAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)getFileSystemRepresentation:(char *)arg1 maxLength:(unsigned long long)arg2 withPath:(id)arg3;
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)attributesOfItemAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)_URLForTrashingItemAtURL:(id)arg1 create:(_Bool)arg2 error:(id *)arg3;
- (id)_URLForReplacingItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)createDirectoryAtPath:(id)arg1 withIntermediateDirectories:(_Bool)arg2 attributes:(id)arg3 error:(id *)arg4;
- (id)URLForDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appropriateForURL:(id)arg3 create:(_Bool)arg4 error:(id *)arg5;
- (_Bool)getRelationship:(long long *)arg1 ofDirectoryAtURL:(id)arg2 toItemAtURL:(id)arg3 error:(id *)arg4;
- (_Bool)setAttributes:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;
- (_Bool)isWritableFileAtPath:(id)arg1;
- (_Bool)fileExistsAtPath:(id)arg1;
- (_Bool)removeItemAtPath:(id)arg1 error:(id *)arg2;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(_Bool)arg4 error:(id *)arg5;
- (id)directoryContentsAtPath:(id)arg1 matchingExtension:(id)arg2 options:(long long)arg3 keepExtension:(_Bool)arg4;
- (id)enumeratorAtPath:(id)arg1;
- (_Bool)changeFileAttributes:(id)arg1 atPath:(id)arg2;
- (_Bool)createSymbolicLinkAtPath:(id)arg1 withDestinationPath:(id)arg2 error:(id *)arg3;
- (const char *)fileSystemRepresentationWithPath:(id)arg1;
- (_Bool)contentsEqualAtPath:(id)arg1 andPath:(id)arg2;
- (id)attributesOfFileSystemForPath:(id)arg1 error:(id *)arg2;
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (_Bool)linkItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)_processUsesCloudServices;
- (_Bool)_processHasUbiquityContainerEntitlement;
- (_Bool)_processCanAccessUbiquityIdentityToken;
- (void)_postUbiquityAccountChangeNotification:(id)arg1;
- (id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg1 options:(unsigned long long)arg2;
- (id)enumeratorAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (id)contentsOfDirectoryAtURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)URLsForDirectory:(unsigned long long)arg1 inDomains:(unsigned long long)arg2;
- (_Bool)getRelationship:(long long *)arg1 ofDirectory:(unsigned long long)arg2 inDomain:(unsigned long long)arg3 toItemAtURL:(id)arg4 error:(id *)arg5;
- (id)_displayPathForPath:(id)arg1;
- (_Bool)directoryCanBeCreatedAtPath:(id)arg1;
- (_Bool)changeCurrentDirectoryPath:(id)arg1;
- (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;
- (_Bool)fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2;
- (_Bool)isReadableFileAtPath:(id)arg1;
- (_Bool)isExecutableFileAtPath:(id)arg1;
- (_Bool)isDeletableFileAtPath:(id)arg1;
- (_Bool)removeFileAtPath:(id)arg1 handler:(id)arg2;
- (id)directoryContentsAtPath:(id)arg1;
- (id)subpathsAtPath:(id)arg1;
- (_Bool)createDirectoryAtPath:(id)arg1 attributes:(id)arg2;
- (id)pathContentOfSymbolicLinkAtPath:(id)arg1;
- (_Bool)createSymbolicLinkAtPath:(id)arg1 pathContent:(id)arg2;
- (_Bool)createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (id)contentsAtPath:(id)arg1;
- (id)fileSystemAttributesAtPath:(id)arg1;
- (id)extendedAttributesAtPath:(id)arg1 error:(id *)arg2;
- (id)extendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (_Bool)removeExtendedAttributeForKey:(id)arg1 atPath:(id)arg2 error:(id *)arg3;
- (_Bool)setExtendedAttribute:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 error:(id *)arg4;
- (_Bool)filesystemItemCopyOperation:(id)arg1 shouldCopyItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)filesystemItemCopyOperation:(id)arg1 shouldProceedAfterError:(id)arg2 copyingItemAtPath:(id)arg3 toPath:(id)arg4;
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)filesystemItemMoveOperation:(id)arg1 shouldMoveItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)filesystemItemMoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 movingItemAtPath:(id)arg3 toPath:(id)arg4;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)filesystemItemLinkOperation:(id)arg1 shouldLinkItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)filesystemItemLinkOperation:(id)arg1 shouldProceedAfterError:(id)arg2 linkingItemAtPath:(id)arg3 toPath:(id)arg4;
- (_Bool)linkItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)filesystemItemRemoveOperation:(id)arg1 shouldRemoveItemAtPath:(id)arg2;
- (_Bool)filesystemItemRemoveOperation:(id)arg1 shouldProceedAfterError:(id)arg2 removingItemAtPath:(id)arg3;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)trashItemAtURL:(id)arg1 resultingItemURL:(id *)arg2 error:(id *)arg3;
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)_attributesOfItemAtPath:(id)arg1 filterResourceFork:(_Bool)arg2 error:(id *)arg3;
- (id)_attributesOfItemAtURL:(id)arg1 filterResourceFork:(_Bool)arg2 error:(id *)arg3;
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (_Bool)replaceItemAtURL:(id)arg1 withItemAtURL:(id)arg2 backupItemName:(id)arg3 options:(unsigned long long)arg4 resultingItemURL:(id *)arg5 error:(id *)arg6;
- (_Bool)startDownloadingUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)setUbiquitous:(_Bool)arg1 itemAtURL:(id)arg2 destinationURL:(id)arg3 error:(id *)arg4;
- (_Bool)isUbiquitousItemAtURL:(id)arg1;
- (_Bool)evictUbiquitousItemAtURL:(id)arg1 error:(id *)arg2;
- (id)URLForUbiquityContainerIdentifier:(id)arg1;
- (id)URLForPublishingUbiquitousItemAtURL:(id)arg1 expirationDate:(id *)arg2 error:(id *)arg3;
- (void)_registerForUbiquityAccountChangeNotifications;
- (id)containerURLForSecurityApplicationGroupIdentifier:(id)arg1;
- (void)getFileProviderMessageInterfacesForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_web_changeFinderAttributes:(id)arg1 forFileAtPath:(id)arg2;
- (void)_performRemoveFileAtPath:(id)arg1;
- (_Bool)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg1 attributes:(id)arg2;
- (_Bool)_web_createFileAtPathWithIntermediateDirectories:(id)arg1 contents:(id)arg2 attributes:(id)arg3 directoryAttributes:(id)arg4;
- (_Bool)_web_createFileAtPath:(id)arg1 contents:(id)arg2 attributes:(id)arg3;
- (void)_web_backgroundRemoveFileAtPath:(id)arg1;
- (_Bool)_web_removeFileOnlyAtPath:(id)arg1;
- (void)_web_backgroundRemoveLeftoverFiles:(id)arg1;
- (id)_web_visibleItemsInDirectoryAtPath:(id)arg1;
- (id)_web_pathWithUniqueFilenameForPath:(id)arg1;
- (id)_web_carbonPathForPath_nowarn:(id)arg1;
- (_Bool)_web_fileExistsAtPath_nowarn:(id)arg1 isDirectory:(_Bool *)arg2 traverseLink:(_Bool)arg3;
- (id)_web_startupVolumeName_nowarn;
- (_Bool)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg1 attributes:(id)arg2;
- (void)_web_noteFileChangedAtPath_nowarn:(id)arg1;
- (_Bool)_web_changeFileAttributes_nowarn:(id)arg1 atPath:(id)arg2;

@end
