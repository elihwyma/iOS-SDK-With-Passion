/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic, readonly) NSOrderedSet *albumUUIDs;
@property (nonatomic, readonly) short albumListType;

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
- (id)insertAlbumListFromDataInManagedObjectContext:(id)arg1;
- (void)updateAlbumList:(id)arg1;

@end
