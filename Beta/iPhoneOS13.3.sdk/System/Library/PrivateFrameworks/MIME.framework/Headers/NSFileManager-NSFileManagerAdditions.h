/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (NSFileManagerAdditions)

+ (id)mf_defaultVolumeMountPoint;

- (_Bool)mf_makeCompletePath:(id)arg1 mode:(int)arg2;
- (_Bool)mf_canWriteToDirectoryAtPath:(id)arg1;
- (_Bool)mf_protectFileAtPath:(id)arg1 withClass:(int)arg2 error:(id *)arg3;
- (long long)mf_sizeForDirectoryAtURL:(id)arg1 error:(id *)arg2;
- (void)mf_deleteFilesInSortedArray:(id)arg1 matchingPrefix:(id)arg2 fromDirectory:(id)arg3;
- (id)mf_makeUniqueFileInDirectory:(id)arg1;
- (id)mf_fileModificationDateAtPath:(id)arg1 traverseLink:(_Bool)arg2;
- (long long)mf_sizeForDirectoryAtPath:(id)arg1 error:(id *)arg2;
- (id)mf_pathsAtDirectory:(id)arg1 beginningWithString:(id)arg2;
- (_Bool)mf_setValue:(id)arg1 forExtendedAttribute:(id)arg2 ofItemAtPath:(id)arg3 error:(id *)arg4;
- (id)mf_valueForExtendedAttribute:(id)arg1 ofItemAtPath:(id)arg2 error:(id *)arg3;

@end
