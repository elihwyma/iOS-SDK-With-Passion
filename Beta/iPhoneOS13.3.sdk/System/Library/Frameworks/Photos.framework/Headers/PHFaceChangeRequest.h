/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHFaceprint, PHObjectPlaceholder;

@interface PHFaceChangeRequest

{
    PHFaceprint *_faceprint;
    _Bool _didSetFaceprint;
    _Bool _shouldClearFaceCropGenerationState;
}

@property (nonatomic) _Bool shouldClearFaceCropGenerationState;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedFace;
@property (nonatomic) double size;
@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) long long sourceWidth;
@property (nonatomic) long long sourceHeight;
@property (nonatomic) double leftEyeX;
@property (nonatomic) double leftEyeY;
@property (nonatomic) double rightEyeX;
@property (nonatomic) double rightEyeY;
@property (nonatomic) double mouthX;
@property (nonatomic) double mouthY;
@property (nonatomic) double roll;
@property (nonatomic) double yaw;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic, getter=isInTrash) _Bool inTrash;
@property (nonatomic) _Bool manual;
@property (nonatomic) _Bool hasSmile;
@property (nonatomic) double blurScore;
@property (nonatomic, getter=isLeftEyeClosed) _Bool leftEyeClosed;
@property (nonatomic, getter=isRightEyeClosed) _Bool rightEyeClosed;
@property (copy, nonatomic) id adjustmentVersion;
@property (nonatomic) long long nameSource;
@property (nonatomic) long long faceAlgorithmVersion;
@property (nonatomic) double poseYaw;
@property (retain, nonatomic) PHFaceprint *faceprint;
@property (nonatomic) long long clusterSequenceNumber;
@property (nonatomic) long long qualityMeasure;
@property (nonatomic) double quality;
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

+ (void)deleteFaces:(id)arg1;
+ (_Bool)canGenerateUUIDWithoutEntitlements;
+ (id)creationRequestForFace;
+ (id)changeRequestForFace:(id)arg1;

- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;

@end
