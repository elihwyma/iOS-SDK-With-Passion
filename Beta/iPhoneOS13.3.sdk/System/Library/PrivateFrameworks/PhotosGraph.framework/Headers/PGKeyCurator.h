/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSAssetsBeautifier, CLSSimilarStacker;

@interface PGKeyCurator : NSObject

{
    CLSAssetsBeautifier *_beautifier;
    CLSSimilarStacker *_similarStacker;
}

- (id)init;
- (id)keyItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3;
- (id)keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (id)bestItemIdentifierWithItems:(id)arg1 options:(id)arg2 debugInfo:(out id *)arg3 criteria:(id)arg4 curationOptions:(id)arg5;
- (id)_keyItemWithFeeder:(id)arg1 options:(id)arg2 criteria:(id)arg3 debugInfo:(id)arg4 progressBlock:(CDUnknownBlockType)arg5;
- (_Bool)item:(id)arg1 passesCriteria:(id)arg2 score:(double *)arg3;
- (id)clusterWithSubclusters:(id)arg1 keyItem:(id)arg2;
- (_Bool)scoreLevelOfCluster:(id)arg1 isAboveScoreLevelOfCluster:(id)arg2;
- (_Bool)cluster:(id)arg1 scoresBetterThanCluster:(id)arg2;
- (_Bool)cluster:(id)arg1 isBetterThanCluster:(id)arg2;
- (id)bestItemInItems:(id)arg1 options:(id)arg2 criteria:(id)arg3 minimumCriteriaScore:(double)arg4;

@end
