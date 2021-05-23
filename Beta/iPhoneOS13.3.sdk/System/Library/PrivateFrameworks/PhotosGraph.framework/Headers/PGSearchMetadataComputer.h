/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PGGraph;

@interface PGSearchMetadataComputer : NSObject

{
    PGGraph *_graph;
}

@property (readonly) PGGraph *graph;

- (id)initWithGraph:(id)arg1;
- (id)searchMetadataWithOptions:(id)arg1;
- (id)_mePersonUUID;
- (id)_sceneWhitelist;
- (id)_blacklistedMeaningsByMeaning;

@end
