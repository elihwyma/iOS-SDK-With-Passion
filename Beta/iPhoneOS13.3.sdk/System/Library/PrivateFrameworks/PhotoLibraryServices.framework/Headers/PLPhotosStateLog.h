/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PLPhotoLibrary;

@protocol OS_dispatch_group;

@interface PLPhotosStateLog : NSObject

{
    NSObject<OS_dispatch_group> *_group;
    PLPhotoLibrary *_photoLibrary;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_group> *group;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;

- (id)initWithPhotoLibrary:(id)arg1;
- (void)logMoments;
- (void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(_Bool)arg4 printAssets:(_Bool)arg5;
- (void)logAlbumLists;
- (void)logAllAlbums;
- (void)logAssetCounts;
- (void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3;
- (void)logDescription:(id)arg1;
- (_Bool)compressFileFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(_Bool)arg5;
- (void)createSnapshot;

@end
