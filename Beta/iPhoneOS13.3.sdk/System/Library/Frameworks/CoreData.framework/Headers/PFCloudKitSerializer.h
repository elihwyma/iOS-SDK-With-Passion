/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKRecordZone, NSArray, NSCloudKitMirroringDelegateOptions, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, PFCloudKitMetadataCache;

@protocol PFCloudKitSerializerDelegate;

__attribute__((visibility("hidden")))
@interface PFCloudKitSerializer : NSObject

{
    CKRecordZone *_recordZone;
    NSMutableDictionary *_manyToManyRecordNameToRecord;
    NSString *_recordNamePrefix;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSObject<PFCloudKitSerializerDelegate> *_delegate;
    NSMutableArray *_writtenAssetURLs;
    PFCloudKitMetadataCache *_metadataCache;
}

@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSDictionary *manyToManyRecordNameToRecord;
@property (weak, nonatomic) NSObject<PFCloudKitSerializerDelegate> *delegate;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) NSArray *writtenAssetURLs;
@property (nonatomic, readonly) NSString *recordNamePrefix;

+ (_Bool)isPrivateAttribute:(id)arg1;
+ (id)recordTypeForEntity:(id)arg1;
+ (unsigned long long)estimateByteSizeOfRecordID:(id)arg1;
+ (id)mtmKeyForObjectWithRecordName:(id)arg1 relatedToObjectWithRecordName:(id)arg2 byRelationship:(id)arg3 withInverse:(id)arg4;
+ (id)assetStorageDirectoryURLForStore:(id)arg1;
+ (id)newSetOfRecordKeysForAttribute:(id)arg1 includeCKAssetsForFileBackedFutures:(_Bool)arg2;
+ (id)newSetOfRecordKeysForEntitiesInConfiguration:(id)arg1 inManagedObjectModel:(id)arg2 includeCKAssetsForFileBackedFutures:(_Bool)arg3;
+ (id)assetsOnRecord:(id)arg1 withOptions:(id)arg2;
+ (_Bool)isMirroredRelationshipRecordType:(id)arg1;
+ (id)newArchivedDataForSystemFieldsOfRecord:(id)arg1;
+ (id)applyCDPrefixToName:(id)arg1;
+ (_Bool)isVariableLengthAttributeType:(unsigned long long)arg1;
+ (unsigned long long)sizeOfVariableLengthAttribute:(id)arg1 withValue:(id)arg2;
+ (_Bool)shouldTrackAttribute:(id)arg1;
+ (id)ckAssetAttributeNameForAttributeName:(id)arg1;
+ (id)generateCKAssetFileURLForObjectInStore:(id)arg1;
+ (_Bool)shouldTrackRelationship:(id)arg1;
+ (id)entityNameForRecordType:(id)arg1;
+ (unsigned long long)estimatedByteSizeOfValue:(id)arg1 andKey:(id)arg2;
+ (id)newSetOfRecordKeysForEntity:(id)arg1 includeCKAssetsForFileBackedFutures:(_Bool)arg2;
+ (id)newSetOfRecordKeysForRelationship:(id)arg1;
+ (_Bool)shouldTrackProperty:(id)arg1;
+ (unsigned long long)estimateByteSizeOfRecord:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithZone:(id)arg1 mirroringOptions:(id)arg2 metadataCache:(id)arg3 recordNamePrefix:(id)arg4;
- (_Bool)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 onlyUpdatingAttributes:(id)arg5 andRelationships:(id)arg6 error:(id *)arg7;
- (id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(_Bool)arg2 includeRelationships:(_Bool)arg3 error:(id *)arg4;
- (id)getRecordMetadataForObject:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2 usingEncryption:(_Bool)arg3 onRecord:(id)arg4;
- (_Bool)shouldEncryptValueForAttribute:(id)arg1;
- (id)getValueStoreForRecord:(id)arg1;
- (id)getValueFromRecord:(id)arg1 forKey:(id)arg2 isEncrypted:(_Bool)arg3;
- (void)updateAttributes:(id)arg1 andRelationships:(id)arg2 onManagedObject:(id)arg3 fromRecord:(id)arg4 withRecordMetadata:(id)arg5 importContext:(id)arg6;
- (void)setMtmRecord:(id)arg1 toMtmRecordName:(id)arg2;
- (void)addURLToWrittenAssetURLs:(id)arg1;
- (id)newCKRecordsFromObject:(id)arg1 fullyMaterializeRecords:(_Bool)arg2 error:(id *)arg3;
- (_Bool)applyUpdatedRecords:(id)arg1 deletedRecordIDs:(id)arg2 toStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id *)arg5;

@end
