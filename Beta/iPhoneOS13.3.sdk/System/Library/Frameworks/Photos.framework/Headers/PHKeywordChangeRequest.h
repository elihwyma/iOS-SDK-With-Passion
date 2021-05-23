/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString, PHObjectPlaceholder;

@interface PHKeywordChangeRequest

@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedKeyword;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortcut;
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

+ (id)creationRequestForKeyword;
+ (id)changeRequestForKeyword:(id)arg1;
+ (void)deleteKeywords:(id)arg1;

- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (_Bool)_validateMutationOfTitleToKeyword:(id)arg1 error:(id *)arg2;

@end
