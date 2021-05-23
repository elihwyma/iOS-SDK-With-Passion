/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSManagedObjectModel, NSMappingModel, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionLogMigrator : NSObject

{
    NSManagedObjectModel *_srcModel;
    NSManagedObjectModel *_dstModel;
    NSMappingModel *_mappingModel;
    NSString *_localPeerID;
    NSDictionary *_mappingsByEntityName;
    NSSet *_removedEntities;
    _Bool _throttleLogs;
}

@property (readonly) _Bool throttleLogs;

- (void)dealloc;
- (void)populateMappingsByEntityName;
- (_Bool)migrateTransactionLogFromLocation:(id)arg1 toLocation:(id)arg2 error:(id *)arg3;
- (_Bool)migrateBaselineFromLocation:(id)arg1 toLocation:(id)arg2 error:(id *)arg3;
- (id)createDestinationObjectsFromSourceObjects:(id)arg1 migrationContext:(id)arg2;
- (id)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(id)arg1;
- (id)createDestinationObjectContentFromSourceObjectContent:(id)arg1 withEntityMapping:(id)arg2 migrationContext:(id)arg3;
- (id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 mappingModel:(id)arg3 localPeerID:(id)arg4;
- (_Bool)migrateTransactionLogsForStoreName:(id)arg1 andLocalPeerID:(id)arg2 atUbiquityRootLocation:(id)arg3 error:(id *)arg4;

@end
