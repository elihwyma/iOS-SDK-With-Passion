/*
 Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
 */

#import <WorkflowUI/WFLibraryViewController.h>

@class AVAudioPlayer, NSIndexPath, NSString, UIBarButtonItem, WFEditableLibraryResultsController;

@interface WFEditableLibraryViewController : WFLibraryViewController

{
    _Bool _dropping;
    UIBarButtonItem *_createButtonItem;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_duplicateButtonItem;
    AVAudioPlayer *_reorderSoundPlayer;
    NSIndexPath *_dragItemOriginIndexPath;
}

@property (retain, nonatomic) UIBarButtonItem *createButtonItem;
@property (retain, nonatomic) UIBarButtonItem *deleteButtonItem;
@property (retain, nonatomic) UIBarButtonItem *duplicateButtonItem;
@property (retain, nonatomic) AVAudioPlayer *reorderSoundPlayer;
@property (retain, nonatomic) NSIndexPath *dragItemOriginIndexPath;
@property (nonatomic, readonly) WFEditableLibraryResultsController *resultsController;
@property (nonatomic, readonly) _Bool dropping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)resultsControllerClass;

- (void)dealloc;
- (id)initWithCollection:(id)arg1;
- (void)loadView;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromItemAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 shouldSpringLoadItemAtIndexPath:(id)arg2 withContext:(id)arg3;
- (_Bool)collectionView:(id)arg1 canHandleDropSession:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnter:(id)arg2;
- (void)collectionView:(id)arg1 dropSessionDidEnd:(id)arg2;
- (void)collectionView:(id)arg1 performDropWithCoordinator:(id)arg2;
- (id)collectionView:(id)arg1 dropPreviewParametersForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 dropSessionDidUpdate:(id)arg2 withDestinationIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 dragSessionDidEnd:(id)arg2;
- (id)collectionView:(id)arg1 itemsForBeginningDragSession:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 itemsForAddingToDragSession:(id)arg2 atIndexPath:(id)arg3 point:(struct CGPoint)arg4;
- (id)collectionView:(id)arg1 dragPreviewParametersForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 dragSessionWillBegin:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didBeginMultipleSelectionInteractionAtIndexPath:(id)arg2;
- (void)updateNavigationItems;
- (void)applicationContext:(id)arg1 applicationStateDidChange:(long long)arg2;
- (void)workflowCellDidRequestRename:(id)arg1;
- (void)workflowCellDidRequestDuplicate:(id)arg1;
- (void)workflowCellDidRequestDelete:(id)arg1;
- (void)resultsController:(id)arg1 didChangeRunningStateForWorkflow:(id)arg2;
- (void)playReorderSound;
- (void)resultsController:(id)arg1 handleLegacyMoveFromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)beginEditingFromIndexPath:(id)arg1;
- (void)workflowsUpdated;
- (void)createWorkflowFromBarButtonItem;
- (void)importWorkflowAtURL:(id)arg1 withSuggestedName:(id)arg2 fromSourceApplication:(id)arg3 options:(unsigned long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)duplicateSelectedWorkflows;
- (void)deleteSelectedWorkflows;
- (void)promptToRenameWorkflow:(id)arg1;
- (void)duplicateWorkflows:(id)arg1;
- (void)deleteWorkflows:(id)arg1 withConfirmationPresentationSource:(id)arg2;
- (void)deleteWorkflowsWithoutConfirmation:(id)arg1;
- (void)moveWorkflowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)createDragItemForIndexPath:(id)arg1;
- (void)accessibilityAnnounceMovingWorkflowToIndexPath:(id)arg1;

@end
