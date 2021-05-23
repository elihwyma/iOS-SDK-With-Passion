/*
 Image: /System/Library/PrivateFrameworks/InstallCoordination.framework/InstallCoordination
 */

#import <Foundation/NSObject.h>

@interface IXFileManager : NSObject

+ (id)defaultManager;

- (_Bool)copyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)removeItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)createSymbolicLinkAtURL:(id)arg1 withDestinationURL:(id)arg2 error:(id *)arg3;
- (_Bool)itemExistsAtURL:(id)arg1;
- (id)realPathForURL:(id)arg1 ifChildOfURL:(id)arg2;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (_Bool)itemDoesNotExistAtURL:(id)arg1;
- (_Bool)createDirectoryAtURL:(id)arg1 withIntermediateDirectories:(_Bool)arg2 mode:(unsigned short)arg3 class:(int)arg4 error:(id *)arg5;
- (_Bool)_moveItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)itemExistsAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)copyItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)moveItemIfExistsAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (id)_realPathForURL:(id)arg1 allowNonExistentPathComponents:(_Bool)arg2;
- (id)_realPathWhatExistsInPath:(id)arg1;
- (_Bool)_validateSymlink:(id)arg1 withStartingDepth:(unsigned int)arg2 andEndingDepth:(unsigned int *)arg3;
- (id)createTemporaryDirectoryInDirectoryURL:(id)arg1 error:(id *)arg2;
- (_Bool)_removeACLAtPath:(const char *)arg1 isDir:(_Bool)arg2 error:(id *)arg3;
- (id)urlsForItemsInDirectoryAtURL:(id)arg1 ignoringSymlinks:(_Bool)arg2 error:(id *)arg3;
- (id)destinationOfSymbolicLinkAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)dataProtectionClassOfItemAtURL:(id)arg1 class:(int *)arg2 error:(id *)arg3;
- (_Bool)setDataProtectionClassOfItemAtURL:(id)arg1 toClass:(int)arg2 ifPredicate:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (unsigned long long)diskUsageForURL:(id)arg1;
- (_Bool)_copyItemAtURL:(id)arg1 toURL:(id)arg2 failIfSrcMissing:(_Bool)arg3 error:(id *)arg4;
- (_Bool)itemExistsAtURL:(id)arg1 isDirectory:(_Bool *)arg2 error:(id *)arg3;
- (unsigned long long)_diskUsageForDirectoryURL:(id)arg1;
- (_Bool)_traverseDirectory:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;

@end
