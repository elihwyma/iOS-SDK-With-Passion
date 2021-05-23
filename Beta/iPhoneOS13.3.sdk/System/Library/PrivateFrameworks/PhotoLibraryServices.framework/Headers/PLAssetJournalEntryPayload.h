/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSArray, NSDictionary, NSString;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload

{
    NSDictionary *_keywordUUIDRemapping;
}

@property (nonatomic, readonly) NSArray *resources;
@property (nonatomic, readonly) short savedAssetType;
@property (nonatomic, readonly) NSString *mediaGroupUUID;

+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)modelProperties;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (_Bool)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (id)additionalEntityNames;
+ (_Bool)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
+ (id)snapshotSortDescriptors;

- (short)kind;
- (id)latitude;
- (id)longitude;
- (void)setLocation:(id)arg1;
- (_Bool)isVideo;
- (id)dateCreated;
- (_Bool)isImage;
- (_Bool)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (_Bool)hasAdjustments;
- (short)kindSubtype;
- (id)uniformTypeIdentifier;
- (void)migrateMergedPayload;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3;
- (id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2;
- (id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2;
- (id)initWithInternalResource:(id)arg1 changedKeys:(id)arg2;
- (id)initWithFileSystemBookmark:(id)arg1 changedKeys:(id)arg2;
- (id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3;
- (id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4;
- (id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2;
- (id)cloudMasterGUID;
- (id)originalResourceRelativePaths;
- (_Bool)isSlowmo;
- (id)locationData;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (void)_fixLocationData;
- (void)_fixAdjustedAssetUTI;

@end
