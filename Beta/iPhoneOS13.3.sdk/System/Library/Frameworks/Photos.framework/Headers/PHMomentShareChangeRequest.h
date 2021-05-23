/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSData, NSDate, NSManagedObjectID, NSString, PHMomentShare, PHObjectPlaceholder, PHRelationshipChangeRequestHelper;

@interface PHMomentShareChangeRequest

{
    PHMomentShare *_originalMomentShare;
    PHRelationshipChangeRequestHelper *_participantsHelper;
}

@property (retain, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *previewData;
@property (nonatomic, readonly) PHRelationshipChangeRequestHelper *participantsHelper;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (nonatomic) _Bool shouldIgnoreBudgets;
@property (nonatomic) _Bool shouldNotifyOnUploadCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;
@property (readonly) _Bool isNewRequest;
@property (nonatomic, readonly) CDUnknownBlockType concurrentWorkBlock;
@property (readonly, getter=isMutated) _Bool mutated;

+ (id)validateMomentShareCreationDate:(id)arg1 error:(id *)arg2;
+ (id)changeRequestForMomentShare:(id)arg1;
+ (id)creationRequestForMomentShareWithTitle:(id)arg1 mode:(short)arg2 creationDate:(id)arg3 createMomentShareAssetsFromAssets:(id)arg4 creationOptionsPerAsset:(id)arg5 preview:(id)arg6 originatingMomentShare:(id)arg7;
+ (void)trashMomentShares:(id)arg1;
+ (void)expungeMomentShares:(id)arg1;

- (void)setMode:(short)arg1;
- (short)mode;
- (id)thumbnailImageData;
- (void)setThumbnailImageData:(id)arg1;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (void)_setOriginalMomentShare:(id)arg1;
- (void)_prepareParticipantsWithFetchResult:(id)arg1;
- (void)_prepareParticipantsHelperIfNeeded;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)addParticipants:(id)arg1;
- (void)createMomentShareAssetsFromAssets:(id)arg1 withCreationOptionsPerAsset:(id)arg2 withPreview:(id)arg3;

@end
