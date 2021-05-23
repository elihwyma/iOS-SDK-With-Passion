/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@class NSString, PHObjectPlaceholder, PLQuery;

@interface PHSmartAlbumChangeRequest

{
    PLQuery *_userQuery;
}

@property (copy, nonatomic) PLQuery *userQuery;
@property (retain, nonatomic) NSString *title;
@property (nonatomic, readonly) PHObjectPlaceholder *placeholderForCreatedSmartAlbum;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) _Bool customSortAscending;

+ (id)validateSmartAlbumTitle:(id)arg1 error:(id *)arg2;
+ (id)_changeRequestForSmartAlbum:(id)arg1 userQuery:(id)arg2;
+ (id)changeRequestForSmartAlbum:(id)arg1;
+ (id)creationRequestForSmartAlbumWithTitle:(id)arg1 userQuery:(id)arg2;
+ (id)creationRequestForSmartAlbumCopyFromSmartAlbum:(id)arg1;
+ (void)deleteSmartAlbumsFromAssetCollection:(id)arg1;
+ (void)expungeSmartAlbumsFromAssetCollection:(id)arg1;
+ (void)undeleteSmartAlbumsFromAssetCollection:(id)arg1;
+ (void)_deleteSmartAlbums:(id)arg1 withOperation:(long long)arg2 topLevelSelector:(SEL)arg3;

- (id)description;
- (_Bool)allowMutationToManagedObject:(id)arg1 propertyKey:(id)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;
- (id)initWithUUID:(id)arg1 objectID:(id)arg2;
- (void)encodeToXPCDict:(id)arg1;
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;
- (_Bool)prepareForServicePreflightCheck:(id *)arg1;
- (_Bool)prepareForPhotoLibraryCheck:(id)arg1 error:(id *)arg2;
- (id)managedEntityName;
- (id)initForNewObject;
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;

@end
