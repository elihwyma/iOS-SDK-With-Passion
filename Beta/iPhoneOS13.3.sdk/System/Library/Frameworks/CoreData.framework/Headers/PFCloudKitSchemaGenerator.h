/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class CKRecordZone, NSCloudKitMirroringDelegateOptions, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStore, NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface PFCloudKitSchemaGenerator : NSObject

{
    NSManagedObjectModel *_model;
    CKRecordZone *_recordZone;
    NSString *_configurationName;
    NSCloudKitMirroringDelegateOptions *_mirroringOptions;
    NSPersistentStore *_store;
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectContext *_managedObjectContext;
}

@property (nonatomic, readonly) NSPersistentStoreCoordinator *coordinator;
@property (weak, nonatomic, readonly) NSPersistentStore *store;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSManagedObjectModel *model;
@property (nonatomic, readonly) CKRecordZone *recordZone;
@property (nonatomic, readonly) NSString *configurationName;
@property (nonatomic, readonly) NSCloudKitMirroringDelegateOptions *mirroringOptions;

+ (id)newRepresentativeRecordForStaticFieldsInEntity:(id)arg1 inZoneWithID:(id)arg2;
+ (id)representativeValueFor:(id)arg1;

- (id)init;
- (void)dealloc;
- (id)initWithObservedStore:(id)arg1 zone:(id)arg2 mirroringOptions:(id)arg3;
- (id)newRepresentativeRecords:(id *)arg1;
- (id)representativeObjectForEntity:(id)arg1 withManagedObjectContext:(id)arg2 cache:(id)arg3 populate:(_Bool)arg4;
- (void)populateValuesOnObject:(id)arg1;
- (void)populateRelationshipsOnObject:(id)arg1 withCache:(id)arg2;

@end
