/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Photos/PHPhotoLibrary.h>

@class NSString;

@interface PHPhotoLibrary (PVPhotoLibraryProtocol)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)_defaultFacePropertySets;
+ (id)_phFaceSortDescriptors;
+ (id)_defaultAssetPropertySets;
+ (id)_phPeopleSortDescriptors;

- (id)pv_persistentStorageDirectoryURL;
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (id)pv_fetchPersonsInMoment:(id)arg1;
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1;
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;
- (id)pv_fetchFacesForFaceGroup:(id)arg1;
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;
- (unsigned long long)pv_numberOfFacesWithFaceprints;
- (id)pv_fetchMoments;
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchMomentsForPerson:(id)arg1;
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;
- (id)pv_fetchAssetsInMoment:(id)arg1;
- (id)pv_fetchAssetsForPerson:(id)arg1;
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;
- (id)pv_fetchFaceGroups;
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;
- (float)pv_faceProcessingProgress;
- (id)pv_lastAssetDate;
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (id)_defaultAssetFetchOptions;
- (double)_progressFromWorkerStatesDictionary:(id)arg1;
- (id)_defaultFetchOptions;

@end
