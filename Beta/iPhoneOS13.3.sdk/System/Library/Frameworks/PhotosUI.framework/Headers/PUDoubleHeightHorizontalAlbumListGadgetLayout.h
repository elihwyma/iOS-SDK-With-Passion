/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUHorizontalAlbumListGadgetLayout.h>

@class NSMutableDictionary;

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout

{
    NSMutableDictionary *_layoutAttributesByIndexPath;
}

@property (nonatomic, readonly) NSMutableDictionary *layoutAttributesByIndexPath;

- (void)invalidateLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (_Bool)pagingEnabled;
- (id)initWithHorizontalLayoutDelegate:(id)arg1;
- (void)_adjustLayoutAttributes:(id)arg1;

@end
