/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSString.h>

@interface NSString (BRCPathAdditions)

+ (id)br_pathWithFileSystemRepresentation:(const char *)arg1;
+ (id)br_emptyFilenameAlternativeName;
+ (id)br_representableHFSFileNameWithBase:(id)arg1 suffix:(id)arg2 extension:(id)arg3 makeDotFile:(_Bool)arg4;
+ (id)br_pathForDirectory:(unsigned long long)arg1;
+ (id)br_pathWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2;

- (id)br_sideFaultName;
- (const char *)br_fileSystemRepresentation;
- (_Bool)br_isExcludedWithMaximumDepth:(unsigned int)arg1;
- (id)brc_libnotifyPerUserNotificationName;
- (id)brc_stringByDeletingPathExtension;
- (id)br_pathExtension;
- (id)removingROSPPrefix;
- (id)br_realpath;
- (id)brc_representableHFSFileNameWithSuffix:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1 andPathExtension:(id *)arg2;
- (id)br_displayFilenameWithExtensionHidden:(_Bool)arg1;
- (_Bool)br_isDocumentTooLargeForUpload:(_Bool)arg1 maxUploadDocumentSize:(long long)arg2;
- (_Bool)br_isExcludedButPreservedAtLogOutWithFilenames:(id)arg1 extensions:(id)arg2;
- (_Bool)br_isInPackage;
- (_Bool)br_isPackageRoot;
- (id)br_pathOfPackageRoot;
- (id)br_pathRelativeToPackageRoot;
- (id)br_pathRelativeToPath:(id)arg1;
- (_Bool)br_isAbsolutePath;
- (id)br_realpathKeepingLastSymlink;
- (_Bool)br_nameIsRepresentableOnHFS;
- (id)br_representableHFSFileNameWithNumber:(id)arg1 addedExtension:(id)arg2 makeDotFile:(_Bool)arg3;
- (id)br_sideFaultPath;
- (id)br_representableDirectoryName;
- (long long)br_compareToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;
- (_Bool)br_isEqualToStringForHFS:(id)arg1 isCaseSensitive:(_Bool)arg2;
- (_Bool)br_isSideFaultName;
- (id)br_stringByDeletingPathBounceNo:(unsigned long long *)arg1;
- (id)br_pathRelativeToDirectory:(unsigned long long)arg1;
- (id)brc_stringByBackslashEscapingCharactersInString:(id)arg1;

@end
