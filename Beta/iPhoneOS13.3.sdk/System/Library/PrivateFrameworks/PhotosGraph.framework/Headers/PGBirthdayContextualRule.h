/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString, PGGraph;

@interface PGBirthdayContextualRule : NSObject

{
    NSArray *_availablePersons;
    NSMutableDictionary *_personNodeByLocalIdentifier;
    PGGraph *_graph;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithGraph:(id)arg1;
- (_Bool)canProvideContextualKeyAssetsWithOptions:(id)arg1;
- (void)enumerateContextualKeyAssetsForYearHighlight:(id)arg1 withOptions:(id)arg2 modelReader:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)_filterCuratedAssets:(id)arg1 forHighlightItem:(id)arg2;
- (id)_fetchCuratedAssetsForHighlightItem:(id)arg1 intersectingAssets:(id)arg2;
- (id)_bestAssetInCuratedAssets:(id)arg1 forPerson:(id)arg2 contextualScore:(out double *)arg3;
- (id)_bestBirthdayCelebrationAssetForHighlightNode:(id)arg1 assetCollection:(id)arg2;

@end
