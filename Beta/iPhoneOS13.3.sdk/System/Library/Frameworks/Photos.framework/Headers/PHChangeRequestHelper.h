/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSError, NSManagedObjectID, NSMutableDictionary, NSMutableSet, NSString, PHPerformChangesRequest;

@protocol PHChangeRequest, PLClientAuthorization;

@interface PHChangeRequestHelper : NSObject

{
    _Bool _isMutated;
    _Bool _isNewRequest;
    NSMutableDictionary *_mutations;
    NSMutableSet *_nilMutations;
    id <PLClientAuthorization> _clientAuthorization;
    id <PHChangeRequest> _changeRequest;
    PHPerformChangesRequest *_request;
    NSString *_uuid;
    NSString *_uuidSaveToken;
    NSManagedObjectID *_objectID;
    NSError *_placeholderRequestError;
}

@property (nonatomic, readonly) NSError *placeholderRequestError;
@property (weak, nonatomic) id <PHChangeRequest> changeRequest;
@property (nonatomic) PHPerformChangesRequest *request;
@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) NSString *uuidSaveToken;
@property (retain, nonatomic) NSManagedObjectID *objectID;
@property (nonatomic, readonly) NSMutableDictionary *mutations;
@property (nonatomic, readonly) NSMutableSet *nilMutations;
@property (nonatomic, getter=isNewRequest) _Bool newRequest;
@property (nonatomic, getter=isMutated) _Bool mutated;
@property (nonatomic, readonly) NSString *clientName;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;

+ (id)changeRequestForObject:(id)arg1;
+ (id)changeRequestWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;

- (id)init;
- (id)description;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2 changeRequest:(id)arg3;
- (id)initForNewObjectWithChangeRequest:(id)arg1;
- (id)initForNewObjectWithUUID:(id)arg1 changeRequest:(id)arg2;
- (id)initWithXPCDict:(id)arg1 changeRequest:(id)arg2 request:(id)arg3 clientAuthorization:(id)arg4;
- (id)placeholderForCreatedObjectWithClass:(Class)arg1 changeRequest:(id)arg2;
- (_Bool)_generateUUIDIfNecessary:(id *)arg1;
- (_Bool)_validateOrGenerateUUIDWithClientEntitled:(_Bool)arg1 request:(id)arg2 changeRequest:(id)arg3;
- (void)didMutate;
- (_Bool)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;

@end
