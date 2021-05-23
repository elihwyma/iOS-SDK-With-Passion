/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString;

@interface PLDetectedFaceJournalEntryPayload : PLJournalEntryPayload

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) double centerX;
@property (nonatomic, readonly) double centerY;
@property (nonatomic, readonly) double size;
@property (nonatomic, readonly, getter=isHidden) _Bool hidden;
@property (nonatomic, readonly, getter=isManual) _Bool manual;
@property (nonatomic, readonly, getter=isRepresentative) _Bool representative;
@property (nonatomic, readonly) int nameSource;
@property (nonatomic, readonly) int cloudNameSource;
@property (nonatomic, readonly, getter=isClusterRejected) _Bool clusterRejected;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;

- (id)assetID;
- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)_insertDeferredRebuildFaceForPersonUUID:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_insertDetectedFaceFromDataInManagedObjectContext:(id)arg1;
- (id)_insertDeferredRebuildFacesFromDataInManagedObjectContext:(id)arg1;
- (_Bool)insertFaceFromDataInManagedObjectContext:(id)arg1 allowDeferred:(_Bool *)arg2;
- (long long)assetIdentifierType;
- (id)personUUID;
- (_Bool)isKeyFace;

@end
