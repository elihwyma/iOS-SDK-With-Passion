/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSString, PGCurationContentOrAestheticScoreTrait, PGCurationIndexSetTrait, PGCurationPartOfDayTrait, PGCurationSetTrait, PGGraph;

@interface PGCurationCriteria : NSObject

{
    _Bool _filterUtilityAssets;
    double _minimumAssetsRatio;
    PGCurationIndexSetTrait *_compulsoryScenesTrait;
    PGCurationIndexSetTrait *_scenesTrait;
    PGCurationPartOfDayTrait *_partOfDayTrait;
    PGGraph *_graph;
    unsigned long long _faceFilter;
    PGCurationSetTrait *_peopleTrait;
    PGCurationContentOrAestheticScoreTrait *_contentOrAestheticScoreTrait;
    unsigned long long _client;
}

@property (nonatomic, readonly) PGGraph *graph;
@property (nonatomic) double minimumAssetsRatio;
@property (nonatomic, readonly) unsigned long long client;
@property (nonatomic) unsigned long long faceFilter;
@property (nonatomic) _Bool filterUtilityAssets;
@property (retain, nonatomic) PGCurationIndexSetTrait *scenesTrait;
@property (retain, nonatomic) PGCurationIndexSetTrait *compulsoryScenesTrait;
@property (retain, nonatomic) PGCurationSetTrait *peopleTrait;
@property (retain, nonatomic) PGCurationPartOfDayTrait *partOfDayTrait;
@property (retain, nonatomic) PGCurationContentOrAestheticScoreTrait *contentOrAestheticScoreTrait;
@property (readonly) NSString *niceDescription;

- (id)initWithGraph:(id)arg1 minimumAssetsRatio:(double)arg2 client:(unsigned long long)arg3;
- (_Bool)isPassingForAsset:(id)arg1 score:(double *)arg2;
- (_Bool)passesForItem:(id)arg1 score:(double *)arg2 reasonString:(id *)arg3;
- (double)_scoreForSceneClassifications:(id)arg1 withScenesTrait:(id)arg2 traitFailed:(_Bool *)arg3;
- (id)peopleTraitString;

@end
