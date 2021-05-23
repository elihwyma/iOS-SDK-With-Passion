/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSCloudKitMirroringDelegateOptions, NSDictionary, NSMutableArray, NSMutableDictionary, NSSet, NSURL;

__attribute__((visibility("hidden")))
@interface PFCloudKitImportZoneContext : NSObject

{
    NSArray *_updatedRecords;
    NSDictionary *_deletedRecordTypeToRecordID;
    NSSet *_deletedObjectIDs;
    NSArray *_modifiedRecords;
    NSMutableArray *_updatedRelationships;
    NSArray *_deletedRelationships;
    NSArray *_deletedMirroredRelationshipRecordIDs;
    NSMutableDictionary *_recordTypeToRecordIDToObjectID;
    NSMutableDictionary *_recordTypeToUnresolvedRecordIDs;
    NSMutableArray *_metadatasToLink;
    NSArray *_importOperations;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSURL *_fileBackedFuturesDirectory;
}

@property (nonatomic, readonly) NSSet *deletedObjectIDs;
@property (nonatomic, readonly) NSArray *modifiedRecords;
@property (nonatomic, readonly) NSArray *deletedRelationships;
@property (nonatomic, readonly) NSArray *deletedMirroredRelationshipRecordIDs;
@property (nonatomic, readonly) NSArray *updatedRelationships;
@property (nonatomic, readonly) NSArray *importOperations;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;
@property (nonatomic, readonly) NSURL *fileBackedFuturesDirectory;

- (void)dealloc;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 andRecordID:(id)arg3;
- (void)addUnresolvedRecordID:(id)arg1 forRecordType:(id)arg2 toCache:(id)arg3;
- (id)objectIDForRecordWithID:(id)arg1 ofType:(id)arg2;
- (void)addObjectID:(id)arg1 toCache:(id)arg2 forRecordWithType:(id)arg3 andUniqueIdentifier:(id)arg4;
- (id)initWithUpdatedRecords:(id)arg1 deletedRecordTypeToRecordIDs:(id)arg2 options:(id)arg3 fileBackedFuturesDirectory:(id)arg4;
- (_Bool)initializeCachesWithManagedObjectContext:(id)arg1 andObservedStore:(id)arg2 error:(id *)arg3;
- (void)registerObject:(id)arg1 forInsertedRecord:(id)arg2 withMetadata:(id)arg3;
- (void)addMirroredRelationshipToLink:(id)arg1;
- (_Bool)populateUnresolvedIDsInStore:(id)arg1 withManagedObjectContext:(id)arg2 error:(id *)arg3;
- (_Bool)linkInsertedObjectsAndMetadataInContext:(id)arg1 error:(id *)arg2;

@end
