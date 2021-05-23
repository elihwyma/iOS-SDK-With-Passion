/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <CoreData/NSManagedObject.h>

@class NSString, PLPhotoLibrary, PLPhotoLibraryPathManager;

@interface PLManagedObject : NSManagedObject

@property (nonatomic, readonly) PLPhotoLibraryPathManager *pathManager;
@property (nonatomic, readonly) PLPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) _Bool isRegisteredWithUserInterfaceContext;
@property (copy, nonatomic, readonly) NSString *shortObjectIDURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
+ (id)attributeValidationRules;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)objectIDDescription;

- (void)willSave;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)arg1;
- (id)payloadForChangedKeys:(id)arg1;
- (_Bool)supportsCloudUpload;
- (_Bool)isSyncableChange;
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;
- (id)payloadsForChangedKeys:(id)arg1;
- (id)payloadIDsByPayloadClassIDToDeleteOnInsert;

@end
