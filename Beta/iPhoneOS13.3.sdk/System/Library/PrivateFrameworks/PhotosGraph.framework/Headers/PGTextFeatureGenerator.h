/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSCountedSet, NSDictionary, NSMapTable, NSMutableSet, NSSet;

@interface PGTextFeatureGenerator : NSObject

{
    NSSet *_momentNodes;
    NSMutableSet *_momentIdentifiers;
    unsigned long long _numberOfMoments;
    unsigned long long _numberOfAssets;
    NSMapTable *_numberOfAssetsBySceneNode;
    NSCountedSet *_sceneNodes;
    NSCountedSet *_personNodes;
    NSCountedSet *_roiNodes;
    NSCountedSet *_poiNodes;
    NSCountedSet *_meaningNodes;
    NSCountedSet *_districtNodes;
    NSCountedSet *_cityNodes;
    NSCountedSet *_stateNodes;
    NSCountedSet *_countryNodes;
    NSCountedSet *_areaNodes;
    NSCountedSet *_businessNodes;
    NSCountedSet *_businessCategoryNodes;
    NSCountedSet *_holidayNodes;
    NSCountedSet *_publicEventNodes;
    NSCountedSet *_publicEventPerformerNodes;
    NSCountedSet *_publicEventCategoryNodes;
    NSDictionary *_optionsByDomain;
}

@property (retain, nonatomic) NSDictionary *optionsByDomain;
@property (retain, nonatomic) NSSet *momentNodes;
@property (retain, nonatomic) NSMutableSet *momentIdentifiers;
@property (nonatomic) unsigned long long numberOfMoments;
@property (nonatomic) unsigned long long numberOfAssets;
@property (retain, nonatomic) NSMapTable *numberOfAssetsBySceneNode;
@property (retain, nonatomic) NSCountedSet *sceneNodes;
@property (retain, nonatomic) NSCountedSet *personNodes;
@property (retain, nonatomic) NSCountedSet *roiNodes;
@property (retain, nonatomic) NSCountedSet *poiNodes;
@property (retain, nonatomic) NSCountedSet *meaningNodes;
@property (retain, nonatomic) NSCountedSet *districtNodes;
@property (retain, nonatomic) NSCountedSet *cityNodes;
@property (retain, nonatomic) NSCountedSet *stateNodes;
@property (retain, nonatomic) NSCountedSet *countryNodes;
@property (retain, nonatomic) NSCountedSet *areaNodes;
@property (retain, nonatomic) NSCountedSet *businessNodes;
@property (retain, nonatomic) NSCountedSet *businessCategoryNodes;
@property (retain, nonatomic) NSCountedSet *holidayNodes;
@property (retain, nonatomic) NSCountedSet *publicEventNodes;
@property (retain, nonatomic) NSCountedSet *publicEventPerformerNodes;
@property (retain, nonatomic) NSCountedSet *publicEventCategoryNodes;

+ (id)_naturalLanguageOptionsByDomain;
+ (id)_knowledgeOptionsByDomain;

- (void)_resetProperties;
- (id)naturalLanguageFeatures;
- (id)initWithMomentNodes:(id)arg1;
- (unsigned long long)maximumNumberOfTextFeaturesPerEvent;
- (_Bool)boundTextFeaturesPerEvent;
- (id)knowledgeFeatures;
- (void)analyzeMomentNodes;
- (id)generateTextFeatures;
- (id)bestTextFeaturesFromTextFeatures:(id)arg1;
- (id)_textFeaturesForNodes:(id)arg1 type:(unsigned long long)arg2;
- (id)_textFeaturesForNode:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3;
- (id)_textFeaturesForPersonNodes:(id)arg1;
- (id)_sortedTextFeaturesUsingWeightAndTypeFromTextFeatures:(id)arg1;

@end
