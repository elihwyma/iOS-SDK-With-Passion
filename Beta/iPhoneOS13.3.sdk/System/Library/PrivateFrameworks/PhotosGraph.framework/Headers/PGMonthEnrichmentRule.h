/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGManager;

@protocol PGHighlightItemModelReader;

@interface PGMonthEnrichmentRule : NSObject

{
    PGManager *_manager;
    id <PGHighlightItemModelReader> _modelReader;
}

@property (nonatomic, readonly) id <PGHighlightItemModelReader> modelReader;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PGManager *manager;

- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2 maximumNumberOfVisibleItems:(unsigned long long)arg3 maximumNumberOfVisibleRegularItems:(unsigned long long)arg4;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithManager:(id)arg1 modelReader:(id)arg2;
- (id)firstKeyAssetWithHighlightItemList:(id)arg1;
- (id)fallbackKeyAssetWithHighlightItemList:(id)arg1;
- (id)_sampleAssets:(id)arg1 withSize:(unsigned long long)arg2;
- (id)bestItemsFromSortedItemsByWeekOfMonth:(id)arg1 previouslySelectedItemsCountByWeek:(id)arg2 maximumNumberOfItems:(unsigned long long)arg3 sortDescriptors:(id)arg4;
- (id)sortedItemsByWeekOfMonthFromItems:(id)arg1 sortDescriptors:(id)arg2;

@end
