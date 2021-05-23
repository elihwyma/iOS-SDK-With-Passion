/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/NSManagedObject.h>

@class NSCKRecordZoneMetadata, NSData, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface NSCKMirroredRelationship : NSManagedObject

@property (retain, nonatomic) NSString *ckRecordID;
@property (retain, nonatomic) NSData *ckRecordSystemFields;
@property (retain, nonatomic) NSString *cdEntityName;
@property (retain, nonatomic) NSString *recordName;
@property (retain, nonatomic) NSString *relatedEntityName;
@property (retain, nonatomic) NSString *relatedRecordName;
@property (retain, nonatomic) NSString *relationshipName;
@property (retain, nonatomic) NSNumber *isPending;
@property (retain, nonatomic) NSNumber *needsDelete;
@property (retain, nonatomic) NSNumber *isUploaded;
@property (retain, nonatomic) NSCKRecordZoneMetadata *recordZone;

+ (id)entityPath;
+ (id)fetchMirroredRelationshipsMatchingPredicate:(id)arg1 fromStore:(id)arg2 inManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchMirroredRelationshipsMatchingRelatingRecords:(id)arg1 andRelatingRecordIDs:(id)arg2 fromStore:(id)arg3 inManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)orderRelationships:(id)arg1;
+ (id)insertMirroredRelationshipForManyToMany:(id)arg1 inZoneWithMetadata:(id)arg2 inStore:(id)arg3 withManagedObjectContext:(id)arg4;
+ (id)mirroredRelationshipForManyToMany:(id)arg1 inStore:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (id)fetchPendingMirroredRelationshipsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)purgeMirroredRelationshipsWithRecordIDs:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)markRelationshipsForDeletedRecordIDs:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)countMirroredRelationshipsInStore:(id)arg1 matchingPredicate:(id)arg2 withManagedObjectContext:(id)arg3 error:(id *)arg4;
+ (_Bool)updateMirroredRelationshipsMatchingRecords:(id)arg1 forStore:(id)arg2 withManagedObjectContext:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;
+ (id)fetchMirroredRelationshipsForObject:(id)arg1 withRecordID:(id)arg2 relatedToObjectsByRelationship:(id)arg3 inManagedObjectContext:(id)arg4 error:(id *)arg5;
+ (id)mirroredRelationshipForObject:(id)arg1 relatedToObject:(id)arg2 relatedByRelationship:(id)arg3 error:(id *)arg4;
+ (id)countMirroredRelationshipsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;

- (id)createRecordID;
- (id)createRecordIDForRecord;
- (id)createRecordIDForRelatedRecord;
- (_Bool)updateRelationshipValueUsingImportContext:(id)arg1 andManagedObjectContext:(id)arg2 isDelete:(_Bool)arg3 error:(id *)arg4;

@end
