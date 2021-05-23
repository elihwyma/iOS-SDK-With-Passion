/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <UIKit/UITableViewCell.h>

@class HKDisplayCategory, HKDisplayType, HKHorizontalFlowLayout, NSArray, NSLayoutConstraint, NSString, UICollectionView, UILabel;

@protocol WDAppSwooshTableViewCellDelegate;

__attribute__((visibility("hidden")))
@interface WDAppSwooshTableViewCell : UITableViewCell

{
    UILabel *_headerLabel;
    UICollectionView *_collectionView;
    HKHorizontalFlowLayout *_flowLayout;
    NSLayoutConstraint *_headerBaselineConstraint;
    NSLayoutConstraint *_collectionHeightConstraint;
    struct CGSize _iconSize;
    NSArray *_marginConstraints;
    unsigned long long _displayMode;
    HKDisplayCategory *_category;
    NSString *_headerText;
    id <WDAppSwooshTableViewCellDelegate> _delegate;
    NSArray *_storeItems;
    HKDisplayType *_displayType;
}

@property (copy, nonatomic) NSString *headerText;
@property (weak, nonatomic) id <WDAppSwooshTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSArray *storeItems;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
+ (id)defaultReuseIdentifier;
+ (id)_headerLabelFont;

- (void)dealloc;
- (void)updateConstraints;
- (void)layoutMarginsDidChange;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)contentSizeDidChange;
- (struct CGSize)_iconSize;
- (double)contentHeight;
- (void)_setUpAfterInit;
- (id)initWithDisplayType:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithCategory:(id)arg1 reuseIdentifier:(id)arg2;
- (void)updateStoreData:(id)arg1;
- (id)_createHeaderLabel;
- (double)_headerBaselineOffsetFromTop;
- (void)refreshMarginConstraints;
- (id)_storeDetailIdentifier;

@end
