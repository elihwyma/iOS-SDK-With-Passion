/*
 Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (CLSNSFileManagerExtensions)

+ (id)temporaryFilePathWithExtension:(id)arg1;

- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (_Bool)createDirectoryIfNecessary:(id)arg1;

@end
