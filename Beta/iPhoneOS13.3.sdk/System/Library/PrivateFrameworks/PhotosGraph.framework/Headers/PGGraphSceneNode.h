/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <PhotosGraph/PGGraphNode.h>

@class NSArray, NSString, PVSceneTaxonomyNode;

@interface PGGraphSceneNode : PGGraphNode

{
    PVSceneTaxonomyNode *_sceneTaxonomyNode;
}

@property (nonatomic, readonly) PVSceneTaxonomyNode *sceneTaxonomyNode;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) unsigned long long level;
@property (nonatomic, readonly) _Bool isIndexed;
@property (nonatomic, readonly) _Bool isSuitableForSuggestions;
@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) unsigned long long numberOfHighConfidenceAssets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly) NSArray *localizedSynonyms;

+ (id)suggestionWhitelistedScenes;
+ (_Bool)isSceneSuitableForSuggestionsWithLabel:(id)arg1;
+ (_Bool)isSceneSuitableForSuggestionsWithIdentifier:(unsigned int)arg1 confidence:(double)arg2;

@end
