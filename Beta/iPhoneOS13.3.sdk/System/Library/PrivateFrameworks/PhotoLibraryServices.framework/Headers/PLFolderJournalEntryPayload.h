/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLFolderJournalEntryPayload : PLGenericAlbumJournalEntryPayload

@property (nonatomic, readonly) _Bool isRootFolder;
@property (nonatomic, readonly) _Bool isProjectAlbumRootFolder;
@property (nonatomic, readonly) NSOrderedSet *childCollectionUUIDs;

+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (void)updateChildrenOrderingInFolder:(id)arg1 usingChildCollectionUUIDs:(id)arg2 includePendingChanges:(_Bool)arg3;

- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;

@end
