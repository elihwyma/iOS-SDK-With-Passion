/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSFileManager.h>

@interface NSFileManager (PhotoLibraryAdditions)

- (_Bool)directoryExistsAtPath:(id)arg1;
- (_Bool)createDirectoryIfNeededAtPath:(id)arg1 error:(id *)arg2;
- (id)tmpFileForVideoTranscodeToPhotoDataDirectory:(_Bool)arg1 withExtension:(id)arg2;
- (_Bool)removeDirectoryAtPathIfEmpty:(id)arg1 ancestors:(int)arg2;

@end
