/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UICollectionView, UITableView, UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout;

__attribute__((visibility("hidden")))
@interface UITableViewIndexOverlaySelectionView : UIView <Swift>

{
    UICollectionView *_collectionView;
    UITableViewIndexOverlaySelectionViewCollectionViewFlowLayout *_flowLayout;
    UITableView *_table;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (void)reloadData;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithTable:(id)arg1;
- (void)_cellTapped:(id)arg1;
- (void)_doneTapped;
- (void)_setIndexColor:(id)arg1;

@end
