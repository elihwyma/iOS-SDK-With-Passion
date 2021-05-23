/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSManagedObjectID, NSString;

@interface PHObjectDeleteRequest

{
    NSString *_uuid;
    NSManagedObjectID *_objectID;
    _Bool _clientEntitled;
    NSString *_clientName;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *managedEntityName;
@property (nonatomic, readonly) NSManagedObjectID *objectID;
@property (nonatomic, readonly, getter=isClientEntitled) _Bool clientEntitled;
@property (nonatomic, readonly) NSString *clientName;

+ (id)deleteRequestForObject:(id)arg1;
+ (id)deleteRequestsForObjects:(id)arg1 ofType:(Class)arg2 forSelector:(SEL)arg3;
+ (id)_deleteRequestsForObjects:(id)arg1;

- (id)init;
- (id)uuid;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)initForNewObject;
- (_Bool)validateForDeleteManagedObject:(id)arg1 error:(id *)arg2;
- (void)deleteManagedObject:(id)arg1 photoLibrary:(id)arg2;
- (id)initWithUUID:(id)arg1 request:(id)arg2 objectID:(id)arg3;

@end
