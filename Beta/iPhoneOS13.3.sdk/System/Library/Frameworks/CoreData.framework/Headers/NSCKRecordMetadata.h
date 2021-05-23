/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSCKRecordZoneMetadata, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKRecordMetadata : NSManagedObject

@property (retain, nonatomic) NSString *ckRecordName;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSNumber *entityId;
@property (retain, nonatomic) NSNumber *entityPK;
@property (retain, nonatomic) NSData *ckShare;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;
@property (nonatomic) _Bool needsUpload;
@property (nonatomic) _Bool needsLocalDelete;
@property (nonatomic) _Bool needsCloudDelete;
@property (retain, nonatomic) NSNumber *lastExportedTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportTransactionNumber;
@property (retain, nonatomic) NSNumber *pendingExportChangeTypeNumber;

+ (id)metadataForObjectIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)entityPath;
+ (id)countRecordMetadataInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)metadataForObject:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)createMapOfMetadataMatchingObjectIDs:(id)arg1 inStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)metadataForRecord:(id)arg1 inManagedObjectContext:(id)arg2 fromStore:(id)arg3 error:(id *)arg4;
+ (id)metadataForRecordIDs:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)createMapOfMetadataMatchingRecords:(id)arg1 andRecordIDs:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)insertMetadataForObject:(id)arg1 setRecordName:(_Bool)arg2 inZone:(id)arg3 recordNamePrefix:(id)arg4 error:(id *)arg5;
+ (_Bool)purgeRecordMetadataWithRecordIDs:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)countRecordMetadataInStore:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)batchUpdateMetadataMatchingEntityIdsAndPKs:(id)arg1 withUpdates:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4 error:(id *)arg5;

- (id)createRecordID;
- (id)createObjectIDForLinkedRow;

@end
