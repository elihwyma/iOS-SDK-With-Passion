/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (TSUTemporaryDirectoryAdditions)

- (_Bool)tsu_grantUserWritePosixPermissionAtPath:(id)arg1 error:(id *)arg2;
- (_Bool)tsu_linkOrCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (unsigned long long)sfu_directoryUsage:(id)arg1;
- (_Bool)sfup_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4 shouldUpdateAttributesHandler:(CDUnknownBlockType)arg5;
- (unsigned long long)sfu_pathUsage:(id)arg1;
- (_Bool)sfu_setAttributes:(id)arg1 ofItemAtURL:(id)arg2 recursively:(_Bool)arg3 error:(id *)arg4;

@end
