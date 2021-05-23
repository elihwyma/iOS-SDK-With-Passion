/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSFileManager.h>

@interface NSFileManager (CPLAdditions)

- (_Bool)cplCopyItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)cplMoveItemAtURL:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (_Bool)cplIsFileExistsError:(id)arg1;
- (_Bool)cplIsFileDoesNotExistError:(id)arg1;
- (_Bool)cplFileExistsAtURL:(id)arg1;

@end
