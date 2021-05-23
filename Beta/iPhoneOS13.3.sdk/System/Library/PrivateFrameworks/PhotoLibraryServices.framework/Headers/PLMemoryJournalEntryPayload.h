/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSSet, NSString;

@interface PLMemoryJournalEntryPayload : PLJournalEntryPayload

@property (retain, nonatomic) NSString *keyAssetUUID;
@property (retain, nonatomic) NSSet *curatedAssetUUIDs;
@property (retain, nonatomic) NSSet *extendedCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *movieCuratedAssetUUIDs;
@property (retain, nonatomic) NSSet *representativeAssetUUIDs;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;

- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertMemoryFromDataInManagedObjectContext:(id)arg1;
- (_Bool)updateAssetsInMemory:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (_Bool)hasAllAssetsAvailableInManagedObjectContext:(id)arg1 includePendingAssetChanges:(_Bool)arg2;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3;

@end
