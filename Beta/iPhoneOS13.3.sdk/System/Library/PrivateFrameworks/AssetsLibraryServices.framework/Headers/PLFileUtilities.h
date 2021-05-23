/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLFileUtilities : NSObject

+ (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
+ (id)fileManager;
+ (id)proxyLockFilePathForDatabasePath:(id)arg1;
+ (id)systemLibraryURL;
+ (_Bool)fileURL:(id)arg1 isEqualToFileURL:(id)arg2;
+ (id)relocateLibraryIndicatorFilePath;
+ (id)realPathForPath:(id)arg1 error:(id *)arg2;
+ (_Bool)filePath:(id)arg1 hasPrefix:(id)arg2;
+ (_Bool)hasDiskSpaceToCopyFileAtURL:(id)arg1;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2;
+ (_Bool)ingestItemAtURL:(id)arg1 toURL:(id)arg2 type:(long long)arg3 options:(unsigned long long)arg4 capabilities:(id)arg5 error:(id *)arg6;
+ (long long)fileLengthForFilePath:(id)arg1;
+ (_Bool)createDirectoryAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (_Bool)secureMoveItemAtURL:(id)arg1 toURL:(id)arg2 capabilities:(id)arg3 error:(id *)arg4;
+ (_Bool)stripExtendedAttributesFromFileAtURL:(id)arg1 inDomain:(id)arg2 error:(id *)arg3;
+ (_Bool)URLIsInTrash:(id)arg1;
+ (_Bool)removeDisconnectedSQLiteDatabaseFileWithPath:(id)arg1 error:(id *)arg2;
+ (_Bool)changeFileOwnerToMobileAtPath:(id)arg1 error:(id *)arg2 usingFileManager:(id)arg3;
+ (id)defaultSystemPhotoDataDirectory;
+ (id)defaultSystemPhotoDataCPLDirectory;
+ (id)defaultSystemPhotoDataMiscDirectory;
+ (id)defaultSystemPhotoDCIMDirectory;
+ (id)proxyLockCoordinatingFilePathForDatabaseDirectory:(id)arg1 databaseName:(id)arg2;
+ (id)defaultSystemLibraryURL;
+ (id)_relocateLibraryPath;
+ (_Bool)setPhotoLibraryBasePath:(id)arg1;
+ (_Bool)cloneFileAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
+ (long long)directoryEntryCountAtURL:(id)arg1 error:(id *)arg2;
+ (_Bool)removeFilesInDirectoryAtURL:(id)arg1 withPrefix:(id)arg2 error:(id *)arg3 progress:(CDUnknownBlockType)arg4;
+ (id)descriptionForFileIngestionType:(long long)arg1;
+ (_Bool)_isFileExistsError:(id)arg1;
+ (id)_mobileOwnerAttributes;
+ (_Bool)filePath:(id)arg1 isEqualToFilePath:(id)arg2;

@end
