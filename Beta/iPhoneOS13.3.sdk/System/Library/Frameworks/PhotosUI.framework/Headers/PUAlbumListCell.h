/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewCell.h>

@class PUAlbumListCellContentView;

__attribute__((visibility("hidden")))
@interface PUAlbumListCell : UICollectionViewCell

@property (nonatomic, readonly) PUAlbumListCellContentView *albumListCellContentView;

- (id)initWithFrame:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)snapshotViewAfterScreenUpdates:(_Bool)arg1;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;

@end
