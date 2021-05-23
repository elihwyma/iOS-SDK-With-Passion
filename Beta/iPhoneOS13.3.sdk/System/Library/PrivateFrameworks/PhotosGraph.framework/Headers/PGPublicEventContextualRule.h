/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PGGraph;

@interface PGPublicEventContextualRule : NSObject

{
    PGGraph *_graph;
    NSArray *_publicEventNodes;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraph:(id)arg1;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)highlightNodeMatchingYearHighlight:(id)arg1 withOptions:(id)arg2;

@end
