//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, UICollectionView, WFActionDrawerCategoriesMetrics;
@protocol WFActionDrawerCategoriesCollectionViewManagerDelegate;

@interface WFActionDrawerCategoriesCollectionViewManager : NSObject <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource, UICollectionViewDelegate>
{
    BOOL _shouldUseVerticalStacking;
    NSArray *_contentTypeCategories;
    id <WFActionDrawerCategoriesCollectionViewManagerDelegate> _delegate;
    UICollectionView *_collectionView;
    double _itemWidth;
    WFActionDrawerCategoriesMetrics *_metrics;
}

@property(retain, nonatomic) WFActionDrawerCategoriesMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WFActionDrawerCategoriesCollectionViewManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL shouldUseVerticalStacking; // @synthesize shouldUseVerticalStacking=_shouldUseVerticalStacking;
@property(readonly, copy, nonatomic) NSArray *contentTypeCategories; // @synthesize contentTypeCategories=_contentTypeCategories;
// - (void).cxx_destruct;
- (id)localizedTitleForCategory:(id)arg1;
- (id)scriptingSectionTitle;
- (id)favoritesSectionTitle;
- (id)appsSectionTitle;
- (void)_configureCell:(id)arg1 withContentTypeCategory:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithCollectionView:(id)arg1 contentTypeCategories:(id)arg2 metrics:(id)arg3;

@end

