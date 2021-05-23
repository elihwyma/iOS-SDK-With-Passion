/*
 Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

#import <SpringBoardFoundation/SBFWallpaperDirectoryDataStore.h>

@interface SBFWallpaperSharedDirectoryDataStore : SBFWallpaperDirectoryDataStore

+ (id)defaultDirectoryURL;

- (id)initWithDirectoryURL:(id)arg1;
- (id)directoryCreationAttributes;
- (void)didWriteFileToURL:(id)arg1;

@end
