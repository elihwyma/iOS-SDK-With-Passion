/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLGenericAlbumJournalEntryPayload.h>

@interface PLFetchingAlbumJournalEntryPayload : PLGenericAlbumJournalEntryPayload

+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;

- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)migrateMergedPayload;
- (void)_fixHasLocationSmartAlbum;

@end
