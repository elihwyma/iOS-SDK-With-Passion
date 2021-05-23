/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSArray, NSFetchRequest, NSManagedObjectContext, NSPredicate, NSString;

@protocol NSFetchedResultsControllerDelegate;

@interface NSFetchedResultsController : NSObject

{
    NSFetchRequest *_fetchRequest;
    NSManagedObjectContext *_managedObjectContext;
    NSString *_sectionNameKeyPath;
    NSString *_sectionNameKey;
    NSString *_cacheName;
    NSPredicate *_remappedPredicate;
    NSPredicate *_originalPredicate;
    id _cachePath;
    struct _fetchResultsControllerFlags {
        unsigned int _changedResultsSinceLastSave:1;
        unsigned int _hasBatchedArrayResults:1;
        unsigned int _hasMutableFetchedResults:1;
        unsigned int _hasSections:1;
        unsigned int _includesSubentities:1;
        unsigned int _sendDidChangeContentDiffNotifications:1;
        unsigned int _sendDidChangeContentNotifications:1;
        unsigned int _sendDidChangeContentSnapshotNotifications:1;
        unsigned int _sendObjectChangeNotifications:1;
        unsigned int _sendSectionChangeNotifications:1;
        unsigned int _sendSectionIndexTitleForSectionName:1;
        unsigned int _sendWillChangeContentNotifications:1;
        unsigned int _usesNonpersistedProperties:1;
        unsigned int _reservedFlags:19;
    } _flags;
    id _delegate;
    id _sortKeys;
    id _fetchedObjects;
    id _sections;
    id _sectionsByName;
    id _sectionIndexTitles;
    id _sectionIndexTitlesSections;
}

@property (nonatomic, readonly) NSFetchRequest *fetchRequest;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSString *sectionNameKeyPath;
@property (nonatomic, readonly) NSString *cacheName;
@property (nonatomic) id <NSFetchedResultsControllerDelegate> delegate;
@property (nonatomic, readonly) NSArray *fetchedObjects;
@property (nonatomic, readonly) NSArray *sectionIndexTitles;
@property (nonatomic, readonly) NSArray *sections;

+ (void)initialize;
+ (id)_CoreDataSectionCachesPath;
+ (void)deleteCacheWithName:(id)arg1;
+ (unsigned long long)_insertIndexForObject:(id)arg1 inArray:(id)arg2 lowIdx:(long long)arg3 highIdx:(long long)arg4 sortDescriptors:(id)arg5;

- (void)dealloc;
- (id)_sections;
- (_Bool)_keyPathContainsNonPersistedProperties:(id)arg1;
- (void)_managedObjectContextDidSave:(id)arg1;
- (void)_managedObjectContextDidChange:(id)arg1;
- (void)_managedObjectContextDidChangeObjectIDs:(id)arg1;
- (void)_managedObjectContextDidMutateObjectIDs:(id)arg1;
- (_Bool)_restoreCachedSectionInfo;
- (_Bool)_computeSectionInfo:(id)arg1 error:(id *)arg2;
- (void)_core_managedObjectContextDidSave:(id)arg1;
- (void)_recursivePerformBlockAndWait:(CDUnknownBlockType)arg1 withContext:(id)arg2;
- (void)_conditionallyDispatchSnapshotToDelegate:(id)arg1;
- (id)_sectionNameForObject:(id)arg1;
- (id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;
- (_Bool)performFetch:(id *)arg1;
- (id)_fetchedObjects;
- (id)objectAtIndexPath:(id)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)sectionIndexTitleForSectionName:(id)arg1;
- (long long)sectionForSectionIndexTitle:(id)arg1 atIndex:(long long)arg2;
- (id)_sectionCachePath;
- (_Bool)_computeSectionInfoWithGroupBy:(id)arg1 error:(id *)arg2;
- (id)_resolveSectionIndexTitleForSectionName:(id)arg1;
- (void)_makeMutableFetchedObjects;
- (unsigned long long)_indexOfFetchedID:(id)arg1;
- (_Bool)_objectInResults:(id)arg1;
- (id)_createNewSectionForObject:(id)arg1;
- (void)_insertObjectInFetchedObjects:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateSectionOffsetsStartingAtSection:(id)arg1;
- (id)_indexPathForIndex:(unsigned long long)arg1;
- (unsigned long long)_sectionNumberForIndex:(unsigned long long)arg1;
- (void)_removeObjectInFetchedObjectsAtIndex:(unsigned long long)arg1;
- (_Bool)_updateFetchedObjectsWithDeleteChange:(id)arg1;
- (_Bool)_updateFetchedObjectsWithInsertChange:(id)arg1;
- (id)_fetchedObjectsArrayOfObjectIDs;
- (void)_preprocessInsertedObjects:(id)arg1 insertsInfo:(id)arg2 newSectionNames:(id)arg3;
- (void)_preprocessDeletedObjects:(id)arg1 deletesInfo:(id)arg2 sectionsWithDeletes:(id)arg3;
- (void)_preprocessUpdatedObjects:(id)arg1 insertsInfo:(id)arg2 deletesInfo:(id)arg3 updatesInfo:(id)arg4 sectionsWithDeletes:(id)arg5 newSectionNames:(id)arg6 treatAsRefreshes:(id)arg7;
- (_Bool)_updateFetchedObjectsWithInsertedObjects:(id)arg1 deletedObjects:(id)arg2 updatedObjects:(id)arg3;
- (void)_lowerMoveOperationsToUpdatesForSection:(id)arg1 withInsertedObjects:(id)arg2 deletedObjects:(id)arg3 updatedObjects:(id)arg4;
- (void)_core_managedObjectContextDidChange:(id)arg1;
- (void)_appendAffectedStoreInfoToData:(id)arg1 adjustedOffset:(long long *)arg2;
- (_Bool)_updateCachedStoreInfo;
- (_Bool)_hasFetchedObjects;
- (void)_dumpSectionInfo;

@end
