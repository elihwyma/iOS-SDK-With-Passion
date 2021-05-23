/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSSimilarStacker, PLKMeansClustering;

@protocol OS_os_log;

@interface PGDejunkerDeduper : NSObject

{
    CLSSimilarStacker *_similarStacker;
    PLKMeansClustering *_kMeanTimeClusterer;
    NSObject<OS_os_log> *_loggingConnection;
}

@property (retain, nonatomic) NSObject<OS_os_log> *loggingConnection;

- (id)init;
- (_Bool)isJunkForItem:(id)arg1;
- (id)debugPersonStringForItem:(id)arg1;
- (id)faceprintByPersonLocalIdentifierByItemIdentifierWithItems:(id)arg1;
- (id)featureWithItem:(id)arg1;
- (id)itemsSortedByScoreWithItems:(id)arg1 options:(id)arg2;
- (id)dejunkedDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)bestItemsInItems:(id)arg1 options:(id)arg2;
- (id)requiredItemsInItems:(id)arg1 options:(id)arg2 containStronglyRequiredItems:(_Bool *)arg3;
- (id)identicallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)semanticallyDedupedItemsInItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)dejunkedItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)finalItemsWithItems:(id)arg1 options:(id)arg2 debugInfo:(id)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (_Bool)shouldPerformIdenticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (double)identicalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (double)identicalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (_Bool)shouldPerformSemanticalDedupingForItemFeature:(id)arg1 options:(id)arg2;
- (double)semanticalDedupingTimeIntervalForItemFeature:(id)arg1 options:(id)arg2;
- (double)semanticalDedupingSimilarityForItemFeature:(id)arg1 options:(id)arg2;
- (id)timeGroupsOfTimeSortedItemsWithTimeSortedItems:(id)arg1 timeInterval:(double)arg2 maximumTimeGroupExtension:(double)arg3;
- (id)splitItemGroupsWithTimeSortedItems:(id)arg1 numberOfBuckets:(unsigned long long)arg2;
- (id)splitItemGroupsWithItemGroups:(id)arg1 maximumNumberOfItemsPerGroup:(unsigned long long)arg2 debugInfo:(id)arg3;
- (id)bestItemGroupsBasedOnFaceprintsWithItemGroups:(id)arg1 options:(id)arg2;
- (id)bestItemGroupsBasedOnSceneprintsWithItemGroups:(id)arg1 options:(id)arg2;
- (id)timeSortedItemsWithItems:(id)arg1;
- (id)itemsByFeatureWithItems:(id)arg1;

@end
