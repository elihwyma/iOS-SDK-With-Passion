/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, PGGraph, PHFetchResult;

@interface PGSharingSuggestionInput : NSObject

{
    NSArray *_assetLocalIdentifiers;
    NSArray *_momentLocalIdentifiers;
    NSArray *_momentNodes;
    PHFetchResult *_assets;
    PHFetchResult *_moments;
    PGGraph *_graph;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic, readonly) NSArray *momentNodes;
@property (nonatomic, readonly) PHFetchResult *assets;
@property (nonatomic, readonly) PHFetchResult *moments;

- (id)description;
- (id)initWithAssetLocalIdentifiers:(id)arg1 momentLocalIdentifiers:(id)arg2 andGraph:(id)arg3;
- (id)initWithMomentNodes:(id)arg1;

@end
