/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (FezAdditions)

- (id)uniqueFilename:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (id)_randomTemporaryPathWithFileName:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 fileName:(id)arg2 withAppendedPathComponent:(id)arg3;
- (id)_randomTemporaryPathWithFileName:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)createUniqueDirectoryWithName:(id)arg1 atPath:(id)arg2 ofType:(id)arg3;
- (_Bool)_isPathOnMissingVolume:(id)arg1;
- (_Bool)_moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4 asCopy:(_Bool)arg5;
- (id)_generateLinkForURL:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1;
- (id)_randomTemporaryPathWithSuffix:(id)arg1 withAppendedPathComponent:(id)arg2;
- (id)_randomSimilarFilePathAsPath:(id)arg1;
- (_Bool)makeDirectoriesInPath:(id)arg1 mode:(unsigned int)arg2;
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;
- (_Bool)copyItemAtPath:(id)arg1 toPath:(id)arg2 uniquePath:(id *)arg3 error:(id *)arg4;

@end
