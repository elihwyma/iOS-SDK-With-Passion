/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, UICollectionView;

@protocol WDHealthDataTopLevelCategoryTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDHealthDataTopLevelCategoryTableViewCell : UITableViewCell

{
    NSArray *_topLevelDataCategories;
    UICollectionView *_collectionView;
    double _cachedCategoryNameFittingScaleFactor;
    id <WDHealthDataTopLevelCategoryTableViewCellDelegate> _delegate;
}

@property (weak, nonatomic) id <WDHealthDataTopLevelCategoryTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
+ (double)contentHeightWithCount:(unsigned long long)arg1;
+ (unsigned long long)collectionViewItemsPerRow;
+ (double)_contentItemHeight;
+ (double)_collectionViewWidth;
+ (double)_contentItemWidth;

- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)contentHeight;
- (void)_setupCollectionView;
- (id)initWithTopLevelDataCategories:(id)arg1;
- (struct CGSize)_contentItemSize;
- (double)_categoryNameWidth;
- (double)_categoryNameFittingScaleFactor;
- (double)categoryNameLabelFontSize;
- (struct CGRect)_collectionViewFrame;

@end
