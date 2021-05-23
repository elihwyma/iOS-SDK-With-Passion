/*
 Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibraryPathManager;

@interface PLImportFileManager : NSObject

{
    PLPhotoLibraryPathManager *_pathManager;
}

+ (_Bool)isImportDirectoryFolderName:(id)arg1;
+ (_Bool)isCameraDirectoryFolderName:(id)arg1;

- (id)init;
- (id)initWithPathManager:(id)arg1;
- (_Bool)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)_dcimDirectory;
- (id)_DCIMFolderNameWithNumber:(long long)arg1;
- (id)urlForNewDCIMFolderWithFolderNumber:(long long *)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;

@end
