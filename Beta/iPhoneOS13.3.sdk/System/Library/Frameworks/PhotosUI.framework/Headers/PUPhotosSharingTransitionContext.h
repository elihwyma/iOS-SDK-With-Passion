/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath;

@protocol PHAssetCollectionDataSource;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingTransitionContext : NSObject

{
    id <PHAssetCollectionDataSource> _assetCollectionsDataSource;
    NSIndexPath *_keyAssetIndexPath;
}

@property (retain, nonatomic) id <PHAssetCollectionDataSource> assetCollectionsDataSource;
@property (retain, nonatomic) NSIndexPath *keyAssetIndexPath;

@end
