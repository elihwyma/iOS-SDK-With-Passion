/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSDictionary, NSString;

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic, readonly) NSString *fullName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *personUri;
@property (nonatomic, readonly) unsigned int manualOrder;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) int verifiedType;
@property (nonatomic, readonly) int cloudVerifiedType;
@property (nonatomic, readonly) short keyFacePickSource;
@property (nonatomic, readonly) NSDictionary *contactMatchingDictionary;
@property (nonatomic, readonly) NSString *mergeTargetPersonUUID;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;

- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;

@end
