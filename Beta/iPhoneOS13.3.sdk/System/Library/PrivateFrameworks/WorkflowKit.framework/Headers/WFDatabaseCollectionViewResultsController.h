/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseSectionedResultsController.h>

@class NSString;

@interface WFDatabaseCollectionViewResultsController : WFDatabaseSectionedResultsController

{
    _Bool _lastChangeIsUserDriven;
    _Bool _loaded;
}

@property (nonatomic, getter=isLoaded) _Bool loaded;
@property (nonatomic) _Bool lastChangeIsUserDriven;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)initWithCollections:(id)arg1 forSections:(id)arg2 database:(id)arg3 inCollectionView:(id)arg4;
- (void)completedBatchUpdateForSection:(unsigned long long)arg1;
- (id)collectionView:(id)arg1 cellForObject:(id)arg2 atIndexPath:(id)arg3;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (_Bool)shouldScrollToInsertionAtIndexPath:(id)arg1;

@end
