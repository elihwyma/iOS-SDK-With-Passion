/*
 Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

#import <UIKit/UIView.h>

@class CNAvatarCardActionsTableView, CNQuickActionsManager, NSArray, NSIndexPath, NSString, UIGestureRecognizer, UISelectionFeedbackGenerator;

@protocol CNAvatarCardActionsViewDelegate;

__attribute__((visibility("hidden")))
@interface CNAvatarCardActionsView : UIView

{
    _Bool _actionsReversed;
    _Bool _bypassActionValidation;
    _Bool _dismissesBeforePerforming;
    _Bool _expanded;
    NSArray *_contacts;
    NSArray *_actionCategories;
    id <CNAvatarCardActionsViewDelegate> _delegate;
    CNQuickActionsManager *_actionsManager;
    NSArray *_actions;
    CNAvatarCardActionsTableView *_tableView;
    NSIndexPath *_highlightedIndexPath;
    UIGestureRecognizer *_rolloverGestureRecognizer;
    UIGestureRecognizer *_selectionGestureRecognizer;
    UISelectionFeedbackGenerator *_retargetBehavior;
    struct CGPoint _initialLocation;
    struct CGRect _actionsImageFrame;
}

@property (retain, nonatomic) CNQuickActionsManager *actionsManager;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) CNAvatarCardActionsTableView *tableView;
@property (retain, nonatomic) NSIndexPath *highlightedIndexPath;
@property (retain, nonatomic) UIGestureRecognizer *rolloverGestureRecognizer;
@property (retain, nonatomic) UIGestureRecognizer *selectionGestureRecognizer;
@property (nonatomic) struct CGPoint initialLocation;
@property (nonatomic) _Bool expanded;
@property (retain, nonatomic) UISelectionFeedbackGenerator *retargetBehavior;
@property (retain, nonatomic) NSArray *contacts;
@property (copy, nonatomic) NSArray *actionCategories;
@property (nonatomic) _Bool actionsReversed;
@property (nonatomic) _Bool bypassActionValidation;
@property (nonatomic) struct CGRect actionsImageFrame;
@property (weak, nonatomic) id <CNAvatarCardActionsViewDelegate> delegate;
@property (nonatomic) _Bool dismissesBeforePerforming;
@property (nonatomic, readonly, getter=isPerformingAction) _Bool performingAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;

- (void)reset;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadData;
- (void)willMoveToWindow:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)startTrackingRolloverWithGestureRecognizer:(id)arg1;
- (void)stopTrackingRollover;
- (void)refreshActions;
- (id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (void)_updateActionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateWithActions:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)_effectiveManagerActions;
- (id)_actionAtIndexPath:(id)arg1;
- (void)reloadDataWithBlock:(CDUnknownBlockType)arg1;
- (void)resetWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)performHighlightedAction;
- (id)_indexPathForGestureRecognizer:(id)arg1;
- (void)updateRollover:(id)arg1;
- (void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2;
- (void)_performActionAtIndexPath:(id)arg1;
- (void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(_Bool)arg5;
- (void)_configureCell:(id)arg1 forAction:(id)arg2;
- (void)_dismissCardAnimated:(_Bool)arg1;
- (void)_updateAllSeparators;
- (void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2;
- (void)_setHighlightedIndexPath:(id)arg1 isChange:(_Bool)arg2;

@end
