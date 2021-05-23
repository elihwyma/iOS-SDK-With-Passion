/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGKeyCurator.h>

@class PHPhotoLibrary;

@interface PGKeyCurator_PHAsset : PGKeyCurator

{
    PHPhotoLibrary *_photoLibrary;
}

- (id)initWithPhotoLibrary:(id)arg1;
- (id)keyAssetWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;

@end
