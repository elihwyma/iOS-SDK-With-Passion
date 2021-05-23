/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSEntityMapping, NSMigrationManager, NSMutableDictionary, NSPropertyMapping;

__attribute__((visibility("hidden")))
@interface NSMigrationContext : NSObject

{
    NSMutableDictionary *_bySourceAssociationTable;
    NSMutableDictionary *_byDestinationAssociationTable;
    NSMutableDictionary *_byMappingBySourceAssociationTable;
    NSMutableDictionary *_byMappingByDestinationAssociationTable;
    NSMigrationManager *_migrationManager;
    NSEntityMapping *_currentMapping;
    unsigned long long _currentStep;
    NSPropertyMapping *_currentPropertyMapping;
}

@property (retain) NSEntityMapping *currentEntityMapping;
@property (retain) NSPropertyMapping *currentPropertyMapping;
@property unsigned long long currentMigrationStep;

- (void)dealloc;
- (void)associateSourceInstance:(id)arg1 withDestinationInstance:(id)arg2 forEntityMapping:(id)arg3;
- (void)clearAssociationTables;
- (void)_createAssociationsBySource:(id)arg1 withDestination:(id)arg2 forEntityMapping:(id)arg3;
- (void)_createAssociationsByDestination:(id)arg1 fromSource:(id)arg2 forEntityMapping:(id)arg3;
- (id)initWithMigrationManager:(id)arg1;
- (id)destinationInstancesForEntityMapping:(id)arg1 sourceInstance:(id)arg2;
- (id)sourceInstancesForEntityMapping:(id)arg1 destinationInstance:(id)arg2;

@end
