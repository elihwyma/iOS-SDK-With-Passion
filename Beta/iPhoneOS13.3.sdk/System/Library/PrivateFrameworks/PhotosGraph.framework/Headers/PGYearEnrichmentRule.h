/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGManager;

@interface PGYearEnrichmentRule : NSObject

{
    PGManager *_manager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) PGManager *manager;

- (id)initWithManager:(id)arg1;
- (double)promotionScoreForHighlightItemList:(id)arg1;
- (id)keyAssetForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (id)curatedAssetsForHighlightItemList:(id)arg1 contextualKeyAssetByHighlighItemUUID:(id)arg2;
- (void)enumerateChildVisibilityStateForHighlightItemList:(id)arg1 withBlock:(CDUnknownBlockType)arg2;

@end
