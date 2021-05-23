/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@protocol VNClustererModelQuerying

+ (unsigned short)clustererModelFileNamesFromState:storedInPath:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)nonGroupedGroupID;
+ (unsigned short)representativenessForFaces:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)distanceBetweenFacesWithFaceprint:andFaceprint:error: /* Error: Ran out of types for this method. */;
+ (unsigned short)distanceBetweenFacesWithFaceObservation:andFaceObservation:error: /* Error: Ran out of types for this method. */;

- (unsigned short)getDistances:to:error: /* Error: Ran out of types for this method. */;
- (unsigned short)maximumFaceIdInModelAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)allClusteredFaceIdsAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)clusteredFaceIdsForClusterContainingFaceId:error: /* Error: Ran out of types for this method. */;
- (unsigned short)getAllClustersAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)l1ClusteredFaceIdsGroupedByL0ClustersForClustersContainingFaceIds:error: /* Error: Ran out of types for this method. */;
- (unsigned short)distanceBetweenClustersWithFaceId:andFaceId:error: /* Error: Ran out of types for this method. */;
- (unsigned short)distanceBetweenLevel1Clusters:error: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestionsForClustersWithFaceIds:affinityThreshold:canceller:error: /* Error: Ran out of types for this method. */;

@end
