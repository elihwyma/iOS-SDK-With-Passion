/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <PhotoAnalysis/Swift-Protocol.h>

@protocol PVPhotoLibraryProtocol <Swift>

- (unsigned short)pv_persistentStorageDirectoryURL;
- (unsigned short)pv_performChangesAndWait:error: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchPersonsWithLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchPersonsWithType: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchPersonsInMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchCandidatePersonsForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchInvalidCandidatePersonsForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesWithLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesForPerson:inMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesForPersonLocalIdentifiers:inMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesForFaceGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_numberOfFacesWithFaceprints;
- (unsigned short)pv_fetchMoments;
- (unsigned short)pv_fetchMomentsWithLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchMomentsForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchMomentsForAssetsWithLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchAssetsWithLocalIdentifiers: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchAssetsInMoment: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchAssetsForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchAssetsForFaceGroup: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_fetchFaceGroups;
- (unsigned short)pv_fetchFaceGroupsForPerson: /* Error: Ran out of types for this method. */;
- (unsigned short)pv_faceProcessingProgress;
- (unsigned short)pv_lastAssetDate;
- (unsigned short)pv_fetchInvalidAssetIdentifiersForCommonComparison;

@end
