/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSDirectoryTraversalOperation.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface NSFilesystemItemCopyOperation : NSDirectoryTraversalOperation

{
    NSString *_destinationPath;
    NSMutableSet *_skippedPaths;
    unsigned long long _options;
}

+ (id)filesystemItemCopyOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3;
+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;

- (void)dealloc;
- (_Bool)_validatePaths:(id *)arg1;
- (void)_handleFTSEntry:(struct _ftsent *)arg1;
- (id)initWithSourcePath:(id)arg1 destinationPath:(id)arg2 options:(unsigned long long)arg3;
- (_Bool)shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2;
- (_Bool)shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)_shouldCopyItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (_Bool)_shouldProceedAfterErrno:(int)arg1 copyingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;

@end
