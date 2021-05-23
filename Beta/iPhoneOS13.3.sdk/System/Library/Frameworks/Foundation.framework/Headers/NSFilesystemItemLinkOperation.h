/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSFilesystemItemCopyOperation.h>

__attribute__((visibility("hidden")))
@interface NSFilesystemItemLinkOperation : NSFilesystemItemCopyOperation

+ (id)filesystemItemLinkOperationWithSourcePath:(id)arg1 destinationPath:(id)arg2;
+ (_Bool)_needsStatInfo;
+ (id)_errorWithErrno:(int)arg1 sourcePath:(id)arg2 destinationPath:(id)arg3;

- (_Bool)_validatePaths:(id *)arg1;
- (void)_handleFTSEntry:(struct _ftsent *)arg1;
- (_Bool)shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3;
- (_Bool)shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2;
- (_Bool)_shouldLinkItemAtPath:(const char *)arg1 toPath:(const char *)arg2;
- (_Bool)_shouldProceedAfterErrno:(int)arg1 linkingItemAtPath:(const char *)arg2 toPath:(const char *)arg3;

@end
