/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@interface PLFrequentLocationProcessor : NSObject

+ (id)processFrequentLocationsWithItems:(id)arg1 locationsOfInterest:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
+ (id)_createFrequentLocationsForItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)_dateIntervalForItems:(id)arg1;
+ (id)_centroidItemForClusterItems:(id)arg1 withDistanceBlock:(CDUnknownBlockType)arg2;
+ (id)_clustersFromLocationsOfInterest:(id)arg1 forItems:(id)arg2 remainingItemsToCluster:(out id *)arg3 progressBlock:(CDUnknownBlockType)arg4;

@end
