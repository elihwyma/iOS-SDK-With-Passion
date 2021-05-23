/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

__attribute__((visibility("hidden")))
@interface PUFeedTitleCell : PUFeedCell

{
    long long _collectionViewType;
    unsigned long long _tappableArea;
    PXFeedSectionInfo *_sectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic, readonly) PXSharedAlbumHeaderView *headerView;
@property (nonatomic) struct UIEdgeInsets contentInsets;
@property (nonatomic) long long collectionViewType;
@property (nonatomic) unsigned long long tappableArea;
@property (retain, nonatomic) PXFeedSectionInfo *sectionInfo;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_handleTap:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateHeaderTextColorStyle;

@end
