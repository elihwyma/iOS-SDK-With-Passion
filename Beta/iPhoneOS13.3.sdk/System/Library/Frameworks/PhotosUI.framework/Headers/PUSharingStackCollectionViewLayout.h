/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@protocol PUSharingStackCollectionViewLayoutDelegate;

__attribute__((visibility("hidden")))
@interface PUSharingStackCollectionViewLayout : UICollectionViewLayout

{
    id <PUSharingStackCollectionViewLayoutDelegate> _delegate;
    NSArray *_stackedItemsLayoutAttributes;
}

@property (copy, nonatomic, readonly) NSArray *stackedItemsLayoutAttributes;
@property (weak, nonatomic) id <PUSharingStackCollectionViewLayoutDelegate> delegate;

- (void)prepareLayout;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)_layoutItemInputAtIndexPath:(id)arg1;

@end
