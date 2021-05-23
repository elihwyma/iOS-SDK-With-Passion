/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSMapTable, NSString, UIDropInteraction, UITableView, UITableViewDropProposal;

@protocol UIDropSession, _UITableViewDropControllerDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropController : NSObject

{
    _Bool _canOnlyHandleReordering;
    UIDropInteraction *_dropInteraction;
    UITableView<_UITableViewDropControllerDelegate> *_tableView;
    unsigned long long _defaultDropOperation;
    NSIndexPath *_targetIndexPath;
    UITableViewDropProposal *_dropProposal;
    id <UIDropSession> _dropSession;
    long long _ignoringDragsCount;
    NSMapTable *_dragItemDropAnimations;
}

@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (weak, nonatomic) UITableView<_UITableViewDropControllerDelegate> *tableView;
@property (nonatomic) unsigned long long defaultDropOperation;
@property (nonatomic, readonly, getter=isTrackingDrag) _Bool trackingDrag;
@property (retain, nonatomic) NSIndexPath *targetIndexPath;
@property (retain, nonatomic) UITableViewDropProposal *dropProposal;
@property (retain, nonatomic) id <UIDropSession> dropSession;
@property (nonatomic, readonly) _Bool shouldIgnoreDrags;
@property (nonatomic) long long ignoringDragsCount;
@property (retain, nonatomic) NSMapTable *dragItemDropAnimations;
@property (nonatomic) _Bool canOnlyHandleReordering;
@property (nonatomic, readonly, getter=isActive) _Bool active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithTableView:(id)arg1;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (void)uninstallFromTableView;
- (void)setupDragInteraction;
- (void)resetAllDragState;
- (void)resetTrackingState;
- (void)updateTargetIndexPathAndDropProposalForSession:(id)arg1;
- (id)animateDragItem:(id)arg1 toTarget:(id)arg2;
- (id)defaultAnimatorForDragItem:(id)arg1;
- (id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3;
- (_Bool)deletePlaceholder:(id)arg1;
- (_Bool)commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(CDUnknownBlockType)arg2;
- (id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(struct CGRect)arg3;
- (id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2;
- (void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(CDUnknownBlockType)arg3;
- (void)beginIgnoringDrags;
- (void)endIgnoringDrags;

@end
