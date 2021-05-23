/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUICore/PXGadgetCollectionViewLayout.h>

@protocol PUHorizontalAlbumListGadgetLayoutDelegate;

@interface PUHorizontalAlbumListGadgetLayout : PXGadgetCollectionViewLayout

{
    id <PUHorizontalAlbumListGadgetLayoutDelegate> _horizontalLayoutDelegate;
}

@property (weak, nonatomic) id <PUHorizontalAlbumListGadgetLayoutDelegate> horizontalLayoutDelegate;
@property (nonatomic, readonly) struct CGSize albumCellSize;

- (id)init;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)initWithHorizontalLayoutDelegate:(id)arg1;

@end
