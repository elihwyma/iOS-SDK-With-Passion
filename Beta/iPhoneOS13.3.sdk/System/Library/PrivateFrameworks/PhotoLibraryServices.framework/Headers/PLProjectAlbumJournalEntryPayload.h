/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLAlbumJournalEntryPayload.h>

@interface PLProjectAlbumJournalEntryPayload : PLAlbumJournalEntryPayload

+ (id)modelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;

- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;

@end
