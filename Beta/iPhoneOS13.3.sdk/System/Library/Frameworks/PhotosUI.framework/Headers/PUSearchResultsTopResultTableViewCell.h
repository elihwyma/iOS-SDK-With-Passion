/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSMutableDictionary, NSString, UICollectionView;

@protocol PUTopResultDelegate;

@interface PUSearchResultsTopResultTableViewCell : UITableViewCell

{
    id <PUTopResultDelegate> _delegate;
    NSArray *_localAssetIdentifiers;
    UICollectionView *_collectionView;
    NSMutableDictionary *_items;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSMutableDictionary *items;
@property (weak, nonatomic) id <PUTopResultDelegate> delegate;
@property (copy, nonatomic) NSArray *localAssetIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)layoutSubviews;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)handleTap:(id)arg1;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (void)_setupCollectionView;
- (void)_setupGestureRecognizer;
- (void)setAsset:(id)arg1 image:(id)arg2 forIndex:(unsigned long long)arg3;
- (struct CGSize)_collectionViewCellSize;
- (long long)numberOfItemsInCollectionView;

@end
