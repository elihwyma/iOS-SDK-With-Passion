/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, PHCollection, PUPhotoDecoration, UICollectionViewTransitionLayout;

@protocol PLAssetContainer;

@interface PUAlbumListTransitionContext : NSObject

{
    _Bool _usesContentOffsetAutoAdjust;
    id <PLAssetContainer> _collection;
    PHCollection *_phCollection;
    NSIndexPath *_keyItemIndexPath;
    PUPhotoDecoration *_photoDecoration;
    UICollectionViewTransitionLayout *_transitionLayout;
}

@property (retain, nonatomic) id <PLAssetContainer> collection;
@property (retain, nonatomic) PHCollection *phCollection;
@property (retain, nonatomic) NSIndexPath *keyItemIndexPath;
@property (retain, nonatomic) PUPhotoDecoration *photoDecoration;
@property (nonatomic) _Bool usesContentOffsetAutoAdjust;
@property (retain, nonatomic) UICollectionViewTransitionLayout *transitionLayout;

@end
