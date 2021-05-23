/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICBackup : NSObject

+ (id)unarchiverAllowedClasses;
+ (id)backupsParentDirectoryURL;
+ (_Bool)createDirectoryAtURL:(id)arg1;
+ (id)backupNameForDate:(id)arg1;
+ (id)allObjectsToSaveInContext:(id)arg1;
+ (id)dictionaryFromCloudObject:(id)arg1 savingAssetsToDirectory:(id)arg2 obfuscator:(id)arg3;
+ (void)sanitizeAndCopyAssetsForSavingFromRecord:(id)arg1 toAssetsDirectoryURL:(id)arg2;
+ (void)loadBackupWithObjectDictionaries:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (id)recordFromObjectDictionary:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (id)sanitizeAssetsForLoadingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2;
+ (void)sanitizeAssetsForSavingInRecordValue:(id)arg1 assetsDirectoryURL:(id)arg2 prefix:(id)arg3;
+ (_Bool)hardLinkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2;
+ (id)saveBackupToParentDirectoryURL:(id)arg1 asName:(id)arg2 atomically:(_Bool)arg3 obfuscate:(_Bool)arg4;
+ (id)createArchive:(id *)arg1 toParentDirectory:(id)arg2 asName:(id)arg3 obfuscate:(_Bool)arg4;
+ (void)purgeOldBackups;
+ (_Bool)loadBackupFromURL:(id)arg1;
+ (_Bool)isValidBackupURL:(id)arg1;
+ (id)nameFromBackupAtURL:(id)arg1;
+ (id)createArchive:(id *)arg1 obfuscate:(_Bool)arg2;
+ (_Bool)loadArchive:(id)arg1 error:(id *)arg2;

@end
