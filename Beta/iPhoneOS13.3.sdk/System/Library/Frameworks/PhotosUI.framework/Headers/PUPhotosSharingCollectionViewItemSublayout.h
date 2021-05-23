/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface PUPhotosSharingCollectionViewItemSublayout : NSObject

{
    struct CGPoint _selectionBadgeCenter;
    struct CGPoint _optionBadgeCenter;
    NSIndexPath *_indexPath;
    double _bottomBadgeInset;
    unsigned long long _badgesCorner;
    UICollectionViewLayoutAttributes *_selectionBadgeLayoutAttributes;
    UICollectionViewLayoutAttributes *_optionBadgeLayoutAttributes;
    struct UIOffset _badgesOffset;
    struct CGRect _itemFrame;
    struct CGRect _visibleItemFrame;
    struct CGRect _badgesContainerFrame;
    struct CGRect _floatingBadgesContainerFrame;
}

@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) struct CGRect itemFrame;
@property (nonatomic) struct CGRect visibleItemFrame;
@property (nonatomic) struct CGSize selectionBadgeSize;
@property (nonatomic) struct CGSize optionBadgeSize;
@property (nonatomic) double bottomBadgeInset;
@property (nonatomic) struct UIOffset badgesOffset;
@property (nonatomic) unsigned long long badgesCorner;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *selectionBadgeLayoutAttributes;
@property (nonatomic, readonly) UICollectionViewLayoutAttributes *optionBadgeLayoutAttributes;
@property (nonatomic, readonly) struct CGRect badgesContainerFrame;
@property (nonatomic, readonly) struct CGRect floatingBadgesContainerFrame;

- (id)initWithIndexPath:(id)arg1 itemFrame:(struct CGRect)arg2;
- (void)prepareSublayout;
- (void)setFloatingOffset:(struct UIOffset)arg1;

@end
