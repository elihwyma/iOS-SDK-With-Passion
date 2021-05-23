/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@protocol VNClusteringReadOnly

+ (unsigned short)getRepresentativenessForFaces:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)clustererModelFileNamesFromState:storedInPath:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)nonGroupedGroupID;

- (unsigned short)suggestionsForClusterIdsWithFlags:affinityThreshold:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getClusterState: /* Error: Ran out of types for this method. */;
- (unsigned short)getClusteredIds: /* Error: Ran out of types for this method. */;
- (unsigned short)getLevel1ClusteredIdsGroupedByLevel0ClustersForFaceId:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getDistanceBetweenLevel0ClustersWithFaceId:andFaceId:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getDistanceBetweenLevel1Clusters:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllClustersFromStateAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)getClustersForClusterIds:options:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getDistances:to:error: /* Error: Ran out of types for this method. */;
- (unsigned short)maximumFaceIdInModelAndReturnError: /* Error: Ran out of types for this method. */;

@end
