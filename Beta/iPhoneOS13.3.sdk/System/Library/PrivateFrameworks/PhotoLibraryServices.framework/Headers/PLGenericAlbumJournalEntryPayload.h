/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSData, NSDate, NSNumber, NSString;

@interface PLGenericAlbumJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic, readonly) NSString *cloudGUID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSNumber *kind;
@property (nonatomic, readonly) _Bool isPinned;
@property (nonatomic, readonly) _Bool isInTrash;
@property (nonatomic, readonly) _Bool customSortAscending;
@property (nonatomic, readonly) int customSortKey;
@property (nonatomic, readonly) NSString *customKeyAssetUUID;
@property (nonatomic, readonly) NSString *importSessionID;
@property (retain, nonatomic) NSData *userQueryData;
@property (nonatomic, readonly) NSDate *creationDate;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;

- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumFromDataInManagedObjectContext:(id)arg1;
- (void)updateAlbum:(id)arg1 includePendingChanges:(_Bool)arg2;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;

@end
