/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator

{
    id <PGEventEnrichment> _collection;
}

@property (nonatomic, readonly) id <PGEventEnrichment> collection;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (_Bool)_useSplitTimeTitlesIfNeeded;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)arg1 curationAddressNodes:(id)arg2;

@end
