/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGGraphHelper : NSObject

+ (id)suggestedMeIdentifierWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)densityClusteringForObjects:(id)arg1 maximumDistance:(double)arg2 minimumNumberOfObjects:(unsigned long long)arg3 withDistanceBlock:(CDUnknownBlockType)arg4;
+ (id)multiLevelSocialGroupsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)socialGroupsOverTheYearsWithPersonClusterManager:(id)arg1 forPersons:(id)arg2 updateBlock:(CDUnknownBlockType)arg3;
+ (id)_createSocialGraphWithPersonClusterManager:(id)arg1 persons:(id)arg2 moments:(id)arg3 inferredMePersonIdentifier:(id *)arg4 updateBlock:(CDUnknownBlockType)arg5;
+ (id)_socialGroupsIdentifiersInGraph:(id)arg1 includeMeNode:(_Bool)arg2 includeCouples:(_Bool)arg3 includeInvalid:(_Bool)arg4;
+ (double)_confidenceForMePersonIdentifier:(id)arg1 withPersonClusters:(id)arg2 inPhotoLibrary:(id)arg3;

@end
