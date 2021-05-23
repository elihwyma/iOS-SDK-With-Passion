/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <Foundation/NSObject.h>

#import <WorkflowUI/Swift-Protocol.h>

@class NSArray, NSString, UICollectionView, WFActionDrawerCategoriesMetrics;

@protocol WFActionDrawerCategoriesCollectionViewManagerDelegate;

@interface WFActionDrawerCategoriesCollectionViewManager : NSObject <Swift>

{
    _Bool _shouldUseVerticalStacking;
    NSArray *_contentTypeCategories;
    id <WFActionDrawerCategoriesCollectionViewManagerDelegate> _delegate;
    UICollectionView *_collectionView;
    double _itemWidth;
    WFActionDrawerCategoriesMetrics *_metrics;
}

@property (retain, nonatomic) UICollectionView *collectionView;
@property (nonatomic) double itemWidth;
@property (retain, nonatomic) WFActionDrawerCategoriesMetrics *metrics;
@property (copy, nonatomic, readonly) NSArray *contentTypeCategories;
@property (nonatomic) _Bool shouldUseVerticalStacking;
@property (weak, nonatomic) id <WFActionDrawerCategoriesCollectionViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (id)initWithCollectionView:(id)arg1 contentTypeCategories:(id)arg2 metrics:(id)arg3;
- (void)_configureCell:(id)arg1 withContentTypeCategory:(id)arg2;
- (id)appsSectionTitle;
- (id)favoritesSectionTitle;
- (id)scriptingSectionTitle;
- (id)localizedTitleForCategory:(id)arg1;

@end
