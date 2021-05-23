/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/Swift-Protocol.h>

@class PGManager;

@protocol PGHighlightItemEnrichmentRule <Swift>

@property (nonatomic, readonly) PGManager *manager;

- (unsigned short)promotionScoreForHighlightItemList: /* Error: Ran out of types for this method. */;
- (unsigned short)keyAssetForHighlightItemList:contextualKeyAssetByHighlighItemUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)curatedAssetsForHighlightItemList:contextualKeyAssetByHighlighItemUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)enumerateChildVisibilityStateForHighlightItemList:withBlock: /* Error: Ran out of types for this method. */;

@end
