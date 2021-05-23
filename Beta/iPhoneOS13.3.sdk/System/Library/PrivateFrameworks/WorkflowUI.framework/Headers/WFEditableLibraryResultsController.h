/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFLibraryResultsController.h>

@class NSMutableSet;

@protocol WFEditableLibraryResultsControllerDelegate;

@interface WFEditableLibraryResultsController : WFLibraryResultsController

{
    _Bool _editing;
    NSMutableSet *_selectedWorkflows;
}

@property (nonatomic, readonly) NSMutableSet *selectedWorkflows;
@property (weak, nonatomic) id <WFEditableLibraryResultsControllerDelegate> delegate;
@property (nonatomic, getter=isEditing) _Bool editing;

- (_Bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)completedBatchUpdateForSection:(unsigned long long)arg1;
- (void)updateCell:(id)arg1 withObject:(id)arg2 atIndexPath:(id)arg3;
- (id)initWithWorkflows:(id)arg1 collectionView:(id)arg2 runCoordinator:(id)arg3;
- (void)markResultAtIndexPath:(id)arg1 asSelected:(_Bool)arg2;
- (unsigned long long)numberOfSelectedResults;
- (id)selectedResults;
- (void)removeDeletedResultsFromSelection;

@end
