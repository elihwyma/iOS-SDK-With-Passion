/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSFileManager.h>

@interface NSFileManager (OFNSFileManagerExtensions)

+ (id)temporaryFileURLWithExtension:(id)arg1;
+ (id)temporaryFilePathWithExtension:(id)arg1;

- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (id)createTemporaryDirectoryAppropriateForForPath:(id)arg1 error:(id *)arg2;
- (id)incrementalURLInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (_Bool)copySource:(id)arg1 toDestination:(id)arg2 withProgressionBlock:(CDUnknownBlockType)arg3;
- (id)unarchiveItemAtPath:(id)arg1 toDirectory:(id)arg2 withProgressionBlock:(CDUnknownBlockType)arg3;

@end
