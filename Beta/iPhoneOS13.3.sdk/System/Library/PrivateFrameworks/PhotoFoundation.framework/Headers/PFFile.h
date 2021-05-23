/*
 Image: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSURL;

@interface PFFile : NSObject

{
    NSURL *_url;
    NSString *_uti;
    unsigned long long _pathHash;
    struct stat *_fileInfo;
    NSString *_cachedPath;
}

@property (nonatomic, readonly) unsigned long long pathHash;
@property (readonly) NSURL *url;
@property (readonly) NSString *path;
@property (readonly) NSString *fileName;
@property (readonly) unsigned long long fileSize;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) _Bool isDirectory;
@property (readonly) NSString *UTI;

+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2;
+ (id)fileWithURL:(id)arg1;
+ (id)assetType:(id)arg1;
+ (id)realPathFromFileAlias:(id)arg1;
+ (_Bool)pathExists:(id)arg1;
+ (_Bool)fileExists:(id)arg1;
+ (_Bool)directoryExists:(id)arg1;
+ (id)resourceIdentifierForURL:(id)arg1;
+ (id)uniqueFileSystemNameForName:(id)arg1 inDirectory:(id)arg2;
+ (id)fileAttributesAtPath:(id)arg1 traverseLink:(_Bool)arg2 fixCreationDate:(_Bool)arg3;
+ (long long)sizeOf:(id)arg1 includeSubFolders:(_Bool)arg2;
+ (id)fileWithPath:(id)arg1;
+ (int)disableOSCachingForURL:(id)arg1;
+ (void)reenableOSCachingForFileDescriptor:(int)arg1;
+ (id)pathByTidyingExtensionInPath:(id)arg1 withExtension:(id)arg2;
+ (_Bool)createEmptyFileAtURL:(id)arg1;
+ (id)createEmptyTempFileInDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(id *)arg4;
+ (id)createEmptyTempFileInBaseDirectory:(id)arg1 withSubDirectoryNamed:(id)arg2 filenamePrefix:(id)arg3 pathExtension:(id)arg4 error:(id *)arg5;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (void)lock;
- (void)unlock;
- (long long)size;
- (const char *)fileSystemRepresentation;
- (id)attributes;
- (id)initWithPath:(id)arg1;
- (int)fileType;
- (_Bool)tryLock;
- (id)modificationDate;
- (id)creationDate;
- (id)extension;
- (id)volume;
- (void)uncacheStat;
- (const struct stat *)cachedStat;
- (_Bool)isEqualToFile:(id)arg1;
- (id)fileComponent;
- (id)newFileByAppendingPathComponent:(id)arg1;
- (id)fileByResolvingFileAlias;
- (id)folderPath;
- (_Bool)isSymLink;
- (_Bool)isFile;
- (void)logFileAccess;
- (_Bool)isInTrash;
- (_Bool)isFileAlias;
- (_Bool)isXMPType;
- (_Bool)exists;
- (_Bool)pathExists;
- (unsigned short)posixPermissions;
- (long long)folderSize_recursive:(_Bool)arg1;
- (id)assetType;
- (id)lockInFinder;
- (id)unlockInFinder;
- (_Bool)isLockedInFinder;
- (id)directoryEnumerator;
- (id)labelNumber;
- (void)setLabelNumber:(id)arg1;
- (id)newFileIStream;
- (id)newFileIOStream;

@end
