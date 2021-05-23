/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;

@interface PGTripHighlightTitleGenerator : PGTitleGenerator

{
    id <PGEventEnrichment> _collection;
}

@property (nonatomic, readonly) id <PGEventEnrichment> collection;

- (id)initWithCollection:(id)arg1;
- (id)_locationTitle;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (_Bool)_useSplitTimeTitlesIfNeeded;

@end
