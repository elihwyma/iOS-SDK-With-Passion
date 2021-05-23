/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@protocol PVPersistenceDelegate <Swift>

@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (unsigned short)countOfFaces;
- (unsigned short)countOfClusteringEligibleFaces;
- (unsigned short)countOfUnclusteredClusteringEligibleFaces;
- (unsigned short)countOfClusteredFaces;
- (unsigned short)countOfClusteredFacesWithClusterSequenceNumbersInRange: /* Error: Ran out of types for this method. */;
- (unsigned short)facesForFaceLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)faceLocalIdentifiersInFaceGroupWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)unclusteredClusteringEligibleFaceLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)facesForClusteringWithLocalIdentifiers:faceprintVersion:excludeClustered:groupingIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:faceprintVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:withFaceprintVersion: /* Error: Ran out of types for this method. */;
- (unsigned short)facesFromAsset: /* Error: Ran out of types for this method. */;
- (unsigned short)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:canceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)persistFaces:deleteFaces:forAsset:persistedFaces:error: /* Error: Ran out of types for this method. */;
- (unsigned short)ungroupFaceClusterSequenceNumbers:batchSizeForUnclusteringFaces:canceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupUngroupedFacesWithNonZeroClusterSequenceNumbersWithCanceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)cleanupGroupedFacesWithClusterSequenceNumberSetToZeroWithCanceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)faceprintsByFaceLocalIdentifiers:version:error: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFaceprint:ofPersistedFace:error: /* Error: Ran out of types for this method. */;
- (unsigned short)persistGeneratedFaceCrops:error: /* Error: Ran out of types for this method. */;
- (unsigned short)hasDirtyFaceCrops;
- (unsigned short)dirtyFaceCropsWithLimit: /* Error: Ran out of types for this method. */;
- (unsigned short)clearDirtyStateOnFaceCrops:error: /* Error: Ran out of types for this method. */;
- (unsigned short)associateFace:withFaceCrop:error: /* Error: Ran out of types for this method. */;
- (unsigned short)faceAssociatedWithFaceCrop: /* Error: Ran out of types for this method. */;
- (unsigned short)allPersons: /* Error: Ran out of types for this method. */;
- (unsigned short)personWithFaceLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)personsForLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)facesForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectedFacesForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectedUnverifiedPersonLocalIdentifiersForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectedFaceGroupLocalIdentifiersForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:error: /* Error: Ran out of types for this method. */;
- (unsigned short)updateKeyFacesOfPersonsWithLocalIdentifiers:forceUpdate:canceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)countOfAlgorithmicFaceGroups;
- (unsigned short)allAlgorithmicFaceGroups: /* Error: Ran out of types for this method. */;
- (unsigned short)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:error: /* Error: Ran out of types for this method. */;
- (unsigned short)clusterSequenceNumberForFaceGroupWithLocalIdentifier: /* Error: Ran out of types for this method. */;
- (unsigned short)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:includeSingletons:error: /* Error: Ran out of types for this method. */;
- (unsigned short)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:includeSingletons:error: /* Error: Ran out of types for this method. */;
- (unsigned short)setKeyFaceOfAlgorithmicFaceGroupToFaceWithClusterSequenceNumbers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)persistChangesToAlgorithmicFaceGroups:faceCSNByLocalIdentifierForNewlyClusteredFaces:faceCSNsOfUnclusteredFaces:localIdentifiersOfUnclusteredFaces:persistenceCompletionBlock:canceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:error: /* Error: Ran out of types for this method. */;
- (unsigned short)resetLibraryClustersWithCanceler:error: /* Error: Ran out of types for this method. */;
- (unsigned short)deleteEmptyGroupsAndReturnError: /* Error: Ran out of types for this method. */;
- (unsigned short)recordNeedToPersonBuildOnFaceGroupContainingFace:error: /* Error: Ran out of types for this method. */;
- (unsigned short)needsPersonBuilding;
- (unsigned short)buildPersonsWithFaceClusterer:keyFaceUpdateBlock:canceler:context:extendTimeoutBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)suggestedPersonLocalIdentifierForPersonLocalIdentifier:faceClusterer:canceler:context:error: /* Error: Ran out of types for this method. */;
- (unsigned short)logPVErrorMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)logPVWarningMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)logPVInfoMessage: /* Error: Ran out of types for this method. */;
- (unsigned short)logPVDebugMessage: /* Error: Ran out of types for this method. */;

@end
