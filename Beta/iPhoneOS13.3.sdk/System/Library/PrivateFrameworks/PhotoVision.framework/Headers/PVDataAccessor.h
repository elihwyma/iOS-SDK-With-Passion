/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <Foundation/NSObject.h>

@protocol PVPersistenceDelegate;

@interface PVDataAccessor : NSObject

{
    unsigned int _faceAlgorithmUmbrellaVersion;
    unsigned int _sceneAlgorithmUmbrellaVersion;
    id <PVPersistenceDelegate> _persistenceDelegate;
}

@property (retain, nonatomic) id <PVPersistenceDelegate> persistenceDelegate;
@property (nonatomic) unsigned int faceAlgorithmUmbrellaVersion;
@property (nonatomic) unsigned int sceneAlgorithmUmbrellaVersion;

- (unsigned long long)countOfFaces;
- (unsigned long long)countOfClusteringEligibleFaces;
- (unsigned long long)countOfClusteredFaces;
- (unsigned long long)countOfClusteredFacesWithClusterSequenceNumbersInRange:(struct _NSRange)arg1;
- (id)unclusteredClusteringEligibleFaceLocalIdentifiers:(id *)arg1;
- (id)facesForClusteringWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2 excludeClustered:(_Bool)arg3 groupingIdentifiers:(id)arg4;
- (id)deterministicallyOrderedFaceIdentifiersWithLocalIdentifiers:(id)arg1 faceprintVersion:(unsigned int)arg2;
- (id)unverifiedVisibleFacesFromFaceGroupContainingFacesWithClusterSequenceNumbers:(id)arg1 withFaceprintVersion:(unsigned int)arg2;
- (_Bool)resetClusterSequenceNumberOfFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)invalidFaceClusterSequenceNumbersInClusterSequenceNumbers:(id)arg1 canceler:(id)arg2 error:(id *)arg3;
- (_Bool)persistGeneratedFaceCrops:(id)arg1 error:(id *)arg2;
- (id)personWithFaceLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)personsForLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)facesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFacesForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFaceLocalIdentifiersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (id)rejectedFaceClusterSequenceNumbersForPersonWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfAlgorithmicFaceGroups;
- (id)allAlgorithmicFaceGroups:(id *)arg1;
- (id)groupedClusterSequenceNumbersOfFacesInFaceGroupsOfMinimumSize:(unsigned long long)arg1 error:(id *)arg2;
- (id)localIdentifiersOfFacesAlgorithmicallyGroupedWithFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)facesAlgorithmicallyGroupedWithFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (id)localIdentifiersOfKeyFacesFromAlgorithmicGroupsContainingFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)keyFacesFromAlgorithmicGroupsContainingFacesWithClusterSequenceNumbers:(id)arg1 includeSingletons:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeAlgorithmicallyGroupedFacesWithLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)resetLibraryClustersWithCanceler:(id)arg1 error:(id *)arg2;
- (_Bool)deleteEmptyGroupsAndReturnError:(id *)arg1;
- (id)activeFaceprintsByFaceLocalIdentifiers:(id)arg1 error:(id *)arg2;
- (id)personForLocalIdentifier:(id)arg1 error:(id *)arg2;

@end
