/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSCoreDataCoreSpotlightDelegate, NSDictionary, NSPersistentStoreCoordinator, NSString, NSURL;

@interface NSPersistentStore : NSObject

{
    NSPersistentStoreCoordinator *_coordinator;
    NSString *_configurationName;
    NSURL *_url;
    NSDictionary *_options;
    id *_oidFactories;
    id _defaultFaultHandler;
    struct _objectStoreFlags {
        unsigned int isReadOnly:1;
        unsigned int cleanOnRemove:1;
        unsigned int isMDDirty:1;
        unsigned int _RESERVED:29;
    } _flags;
    void *_temporaryIDClass;
    id _coreSpotlightDelegate;
    void *_reserved1;
}

@property (weak, nonatomic, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (copy, readonly) NSString *configurationName;
@property (readonly) NSDictionary *options;
@property (retain) NSURL *URL;
@property (copy) NSString *identifier;
@property (copy, readonly) NSString *type;
@property (getter=isReadOnly) _Bool readOnly;
@property (retain, nonatomic) NSDictionary *metadata;
@property (nonatomic, readonly) NSCoreDataCoreSpotlightDelegate *coreSpotlightExporter;

+ (void)initialize;
+ (_Bool)accessInstanceVariablesDirectly;
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;
+ (_Bool)doURLStuff:(id)arg1 createdStubFile:(_Bool *)arg2 readOnly:(_Bool *)arg3 error:(id *)arg4 options:(id)arg5;
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;
+ (Class)migrationManagerClass;
+ (Class)rowCacheClass;
+ (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;
+ (_Bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;
+ (_Bool)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id *)arg4;
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)load:(id *)arg1;
- (id)_persistentStoreCoordinator;
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;
- (id)faultHandler;
- (_Bool)loadMetadata:(id *)arg1;
- (id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(_Bool)arg2;
- (void)_setMetadataDirty:(_Bool)arg1;
- (_Bool)_isMetadataDirty;
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;
- (_Bool)supportsConcurrentRequestHandling;
- (id)_rawMetadata__;
- (_Bool)supportsGenerationalQuerying;
- (id)currentQueryGeneration;
- (void)freeQueryGenerationWithIdentifier:(id)arg1;
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;
- (id)ancillaryModels;
- (id)objectIDFactoryForEntity:(id)arg1;
- (id)currentChangeToken;
- (Class)_objectIDClass;
- (id)_storeInfoForEntityDescription:(id)arg1;
- (void)_didLoadMetadata;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;
- (void)doFilesystemCleanupOnRemove:(_Bool)arg1;
- (void)_setCoreSpotlightDelegate:(id)arg1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;
- (void)_setPersistentStoreCoordinator:(id)arg1;
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;
- (_Bool)_unload:(id *)arg1;
- (void)didAddToPersistentStoreCoordinator:(id)arg1;
- (Class)faultHandlerClass;
- (Class)objectIDClassForEntity:(id)arg1;
- (void)_resetObjectIDFactoriesForStoreUUIDChange;
- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;
- (id)_defaultMetadata;
- (void)_updateMetadata;
- (void)_setupObserver;
- (void)_rebuildIndiciesSynchronously:(_Bool)arg1;

@end
