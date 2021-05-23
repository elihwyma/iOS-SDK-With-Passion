/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSData, NSString, PLDetectedFace, PLManagedAsset, PLPerson;

@interface PLFaceCrop : PLManagedObject <Swift>

{
    _Bool _needsPersistenceUpdate;
}

@property (nonatomic) _Bool needsPersistenceUpdate;
@property (nonatomic) short cloudLocalState;
@property (nonatomic) short cloudDeleteState;
@property (nonatomic) short type;
@property (nonatomic) unsigned short cloudType;
@property (nonatomic) short state;
@property (copy, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSData *resourceData;
@property (retain, nonatomic) PLPerson *person;
@property (retain, nonatomic) PLDetectedFace *face;
@property (retain, nonatomic) NSString *invalidMergeCandidatePersonUUID;
@property (retain, nonatomic) PLManagedAsset *asset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic, readonly) id localID;
@property (readonly) long long cloudDeletionType;
@property (copy, readonly) NSString *cloudUUIDForDeletion;

+ (id)entityName;
+ (long long)cloudDeletionTypeForTombstone:(id)arg1;
+ (id)cloudUUIDKeyForDeletion;
+ (id)listOfSyncedProperties;
+ (void)resetCloudStateInPhotoLibrary:(id)arg1 hardReset:(_Bool)arg2;
+ (long long)_cloudTypeToPushFromLocalType:(short)arg1 cachedCloudType:(unsigned short)arg2;
+ (int)_trainingFaceTypeForFaceFromFaceCrop:(id)arg1;
+ (int)_nameSourceForFaceFromFaceCrop:(id)arg1;
+ (id)insertIntoPhotoLibrary:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)insertIntoManagedObjectContext:(id)arg1 withUUID:(id)arg2 resourceData:(id)arg3 type:(short)arg4;
+ (id)_faceCropsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inManagedObjectContext:(id)arg3;
+ (id)allFaceCropsInPhotoLibrary:(id)arg1;
+ (id)faceCropsWithUUIDs:(id)arg1 inPhotoLibrary:(id)arg2;
+ (id)faceCropsWithUUIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)faceCropsToUploadInPhotoLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (short)_localTypeFromCloudType:(long long)arg1;
+ (id)insertOrUpdateWithCPLFaceCrop:(id)arg1 inPhotoLibrary:(id)arg2;

- (void)prepareForDeletion;
- (void)willSave;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (id)momentShare;
- (id)cplFullRecord;
- (void)applyPropertiesToTrainingFace;
- (id)cplFaceCropChange;

@end
