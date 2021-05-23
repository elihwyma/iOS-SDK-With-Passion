/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, UICollectionView;

@protocol NSCollectionLayoutEnvironment_Private, UITableConstants;

@interface _UICollectionViewListLayoutSectionConfiguration : NSObject

{
    long long _appearanceStyle;
    double _rowHeight;
    double _sectionHeaderHeight;
    double _sectionFooterHeight;
    double _estimatedRowHeight;
    double _estimatedSectionHeaderHeight;
    double _estimatedSectionFooterHeight;
    long long _separatorStyle;
    UICollectionView *_collectionView;
    id <NSCollectionLayoutEnvironment_Private> _layoutEnvironment;
    NSArray *_itemHeights;
    struct NSDirectionalEdgeInsets _separatorInset;
}

@property (weak, nonatomic, readonly, getter=_collectionView) UICollectionView *collectionView;
@property (nonatomic, readonly, getter=_layoutEnvironment) id <NSCollectionLayoutEnvironment_Private> layoutEnvironment;
@property (nonatomic, readonly, getter=_constants) id <UITableConstants> constants;
@property (copy, nonatomic, getter=_itemHeights, setter=_setItemHeights:) NSArray *itemHeights;
@property (nonatomic) long long appearanceStyle;
@property (nonatomic) double rowHeight;
@property (nonatomic) double sectionHeaderHeight;
@property (nonatomic) double sectionFooterHeight;
@property (nonatomic) double estimatedRowHeight;
@property (nonatomic) double estimatedSectionHeaderHeight;
@property (nonatomic) double estimatedSectionFooterHeight;
@property (nonatomic) long long separatorStyle;
@property (nonatomic) struct NSDirectionalEdgeInsets separatorInset;

- (id)init;
- (id)initWithCollectionView:(id)arg1;
- (_Bool)_shouldDrawThickSeparators;
- (double)_defaultSectionHeaderHeight;
- (double)_defaultSectionFooterHeight;
- (double)_defaultCellHeight;
- (double)_separatorHeight;
- (struct UIEdgeInsets)_defaultLayoutMargins;
- (double)_effectiveEstimatedRowHeight;
- (double)_effectiveEstimatedSectionHeaderHeight;
- (double)_effectiveEstimatedSectionFooterHeight;
- (struct NSDirectionalEdgeInsets)_effectiveSeparatorInsets;
- (_Bool)_shouldPinSupplementaries;
- (struct NSDirectionalEdgeInsets)_sectionInsetsForAppearanceStyle;
- (struct NSDirectionalEdgeInsets)_defaultDirectionalLayoutMargins;
- (id)_generateLayoutGroup:(id)arg1;
- (void)_addSupplementaryItemsToLayout:(id)arg1;

@end
