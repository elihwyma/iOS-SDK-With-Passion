/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/WFDatabaseResult.h>

@class NSFetchedResultsController, NSString;

@interface WFCoreDataDatabaseResult : WFDatabaseResult

{
    NSFetchedResultsController *_resultsController;
}

@property (nonatomic, readonly) NSFetchedResultsController *resultsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)initWithBackingStore:(id)arg1 fetchRequest:(id)arg2 managedObjectContext:(id)arg3;

@end
