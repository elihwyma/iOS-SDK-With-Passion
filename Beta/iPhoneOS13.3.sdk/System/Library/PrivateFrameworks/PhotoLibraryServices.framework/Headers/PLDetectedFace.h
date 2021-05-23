/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, NSSet, NSString, PLDetectedFaceGroup, PLDetectedFaceprint, PLFaceCrop, PLManagedAsset, PLPerson;

@protocol PLSyncablePerson;

@interface PLDetectedFace : PLManagedObject

@property (retain, nonatomic) NSSet *rejectedPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id localID;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) int faceAlgorithmVersion;
@property (copy, nonatomic) NSDate *adjustmentVersion;
@property (retain, nonatomic) id <PLSyncablePerson> person;
@property (retain, nonatomic) id <PLSyncablePerson> personBeingKeyFace;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic, readonly) _Bool isTrainingFace;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool hidden;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (nonatomic) int trainingType;
@property (nonatomic) int nameSource;
@property (nonatomic) int cloudNameSource;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (retain, nonatomic) PLFaceCrop *faceCrop;
@property (retain, nonatomic) PLDetectedFaceGroup *faceGroup;
@property (retain, nonatomic) PLDetectedFaceprint *faceprint;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) PLPerson *personBeingKeyFace;
@property (retain, nonatomic) NSSet *rejectedPersons;
@property (retain, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace;
@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) double size;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) double roll;
@property (nonatomic) double yaw;
@property (nonatomic) _Bool hidden;
@property (nonatomic) _Bool isInTrash;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic) _Bool isLeftEyeClosed;
@property (nonatomic) _Bool isRightEyeClosed;
@property (retain, nonatomic) NSString *masterIdentifier;
@property (nonatomic) short confirmedFaceCropGenerationState;
@property (retain, nonatomic) NSSet *rejectedPersonsNeedingFaceCrops;
@property (retain, nonatomic) NSSet *clusterRejectedPersons;
@property (nonatomic) int trainingType;
@property (retain, nonatomic) NSDate *adjustmentVersion;
@property (nonatomic) double poseYaw;
@property (nonatomic) int faceAlgorithmVersion;
@property (nonatomic) int clusterSequenceNumber;
@property (nonatomic) int qualityMeasure;
@property (nonatomic) double quality;
@property (nonatomic) short cloudLocalState;
@property (nonatomic, readonly) _Bool assetVisible;
@property (nonatomic) int effectiveNameSource;
@property (nonatomic) unsigned short ageType;
@property (nonatomic) unsigned short genderType;
@property (nonatomic) unsigned short eyesState;
@property (nonatomic) unsigned short smileType;
@property (nonatomic) unsigned short facialHairType;
@property (nonatomic) unsigned short hairColorType;
@property (nonatomic) unsigned short baldType;
@property (nonatomic) unsigned short glassesType;
@property (nonatomic) unsigned short eyeMakeupType;
@property (nonatomic) unsigned short lipMakeupType;
@property (retain, nonatomic) NSString *groupingIdentifier;

+ (id)entityName;
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)batchFetchKeyFacesByPersonUUIDWithPersonUUIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)predicatesToExcludeNonVisibleFaces;
+ (id)predicatesForFacesNeedingFaceCropGeneration;
+ (id)predicateForArchival;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3;
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (id)syncableFacesPredicate;
+ (id)_syncableFacesToUploadInitiallyPredicate;
+ (id)_facesMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inPhotoLibrary:(id)arg3;

- (void)delete;
- (void)awakeFromInsert;
- (void)willSave;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (id)debugLogDescription;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)isValidForPersistence;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (void)_touchPersonForPersistenceIfNeeded;
- (void)_updateFaceGroupIfNeeded;
- (void)_verifyAssetRelationship;
- (void)removeFaceprint;
- (id)namingDescription;
- (void)addRejectedPerson:(id)arg1;
- (void)addRejectedPersonNeedingFaceCrops:(id)arg1;
- (void)addClusterRejectedPerson:(id)arg1;
- (id)momentShare;
- (id)cplFullRecord;
- (id)syncDescription;
- (long long)photosFaceRepresentationSourceWidth;
- (long long)photosFaceRepresentationSourceHeight;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationCenterY;
- (double)photosFaceRepresentationSize;
- (double)photosFaceRepresentationBlurScore;
- (_Bool)photosFaceRepresentationHasSmile;
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;
- (_Bool)photosFaceRepresentationIsRightEyeClosed;
- (long long)photosFaceRepresentationQualityMeasure;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (id)photosFaceRepresentationLocalIdentifier;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationQuality;

@end
