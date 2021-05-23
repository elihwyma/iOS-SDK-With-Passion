/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (GSAdditions)

- (id)gs_createTemporarySubdirectoryOfItem:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (int)gs_createTemporaryFdInDirectory:(id)arg1 withTemplate:(id)arg2 error:(id *)arg3;
- (id)gs_createTemporaryFileInDirectory:(id)arg1 withTemplate:(id)arg2 andExtension:(id)arg3 error:(id *)arg4;

@end
