/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHMomentShareParticipantChangeRequest

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedMomentShareParticipant;
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

+ (id)changeRequestForMomentShareParticipant:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithEmailAddress:(id)arg1;
+ (id)creationRequestForMomentShareParticipantWithPhoneNumber:(id)arg1;
+ (void)deleteMomentShareParticipants:(id)arg1;

- (unsigned short)type;
- (void)setType:(unsigned short)arg1;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;

@end
