/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@interface WFTemporaryFileManager : NSObject

+ (id)temporaryDirectoryURL;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1;
+ (void)clearTemporaryFiles;
+ (id)wf_uncachedContainerURLForSecurityApplicationGroupIdentifier:(id)arg1 error:(id *)arg2;
+ (id)appGroupIdentifier;
+ (id)sharedAppGroupDirectoryURL;
+ (id)sharedTemporaryDirectoryURL;
+ (void)createSharedDirectoryIfNecessary;
+ (void)configureTemporaryDirectoryProtectionIfNecessary;
+ (void)configureBackupFlagIfNecessary;
+ (void)configureFileProtectionAtPath:(id)arg1;
+ (void)configureBackupFlagAtURL:(id)arg1;
+ (void)removeItemsInDirectory:(id)arg1;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(_Bool)arg3;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1 inDirectory:(id)arg2 isDirectory:(_Bool)arg3;
+ (id)proposedTemporaryFileURLForFilename:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1 isDirectory:(_Bool)arg2;
+ (id)proposedSharedTemporaryFileURLForFilename:(id)arg1;
+ (id)proposedFileURLForFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createSharedTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createTemporaryDirectoryWithFilename:(id)arg1;
+ (id)createTemporaryFileWithFilename:(id)arg1 inDirectory:(id)arg2;
+ (id)createTemporaryFileWithFilename:(id)arg1;
+ (id)createSharedTemporaryFileWithFilename:(id)arg1;

@end
