/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSMapTable, NSString, SBDragAndDropAppActivationWorkspaceTransaction, SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, SBWindowDragInteraction, UIDropInteraction;

@protocol SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, UIDragSession;

@interface SBMainDisplaySceneLayoutDragAndDropInteractionManager : NSObject <Swift>

{
    _Bool _windowDragHandledByDruid;
    SBFluidSwitcherViewController *_mainSwitcherContentController;
    SBMainDisplaySceneLayoutViewController *_sceneLayoutViewController;
    SBFluidSwitcherViewController *_floatingSwitcherContentController;
    id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
    SBDragAndDropAppActivationWorkspaceTransaction *_activeTransaction;
    NSMapTable *_activeDropSessions;
    SBWindowDragInteraction *_windowDragInteraction;
    id <UIDragSession> _windowDragSession;
    CDUnknownBlockType _windowDragSessionPrepareCompletionBlock;
    NSString *_windowDragSceneIdentifier;
}

@property (weak, nonatomic, readonly) SBFluidSwitcherViewController *mainSwitcherContentController;
@property (weak, nonatomic, readonly) SBMainDisplaySceneLayoutViewController *sceneLayoutViewController;
@property (weak, nonatomic, readonly) SBFluidSwitcherViewController *floatingSwitcherContentController;
@property (weak, nonatomic, readonly) id <SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate> delegate;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (retain, nonatomic) SBDragAndDropAppActivationWorkspaceTransaction *activeTransaction;
@property (retain, nonatomic) NSMapTable *activeDropSessions;
@property (retain, nonatomic) SBWindowDragInteraction *windowDragInteraction;
@property (retain, nonatomic) id <UIDragSession> windowDragSession;
@property (copy, nonatomic) CDUnknownBlockType windowDragSessionPrepareCompletionBlock;
@property (retain, nonatomic) NSString *windowDragSceneIdentifier;
@property (nonatomic) _Bool windowDragHandledByDruid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)transactionDidComplete:(id)arg1;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 concludeDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
- (void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (void)_dragInteraction:(id)arg1 prepareForSession:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dragInteractionDidCancelLiftWithoutDragging:(id)arg1;
- (id)newSceneIdentityForApplication:(id)arg1;
- (id)initWithMainSwitcherContentController:(id)arg1 floatingSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 delegate:(id)arg4;
- (id)preferredSceneIdentityForApplication:(id)arg1 targetContentIdentifier:(id)arg2 preferNewScene:(_Bool)arg3;
- (id)mostRecentSceneIdentityExcludingLiveScenesForApplication:(id)arg1;
- (void)_beginTrackingDropSessionIfNeeded:(id)arg1;
- (void)_windowDragSessionDidEnd;
- (_Bool)_anyActiveAndVisibleSceneEntityMatches:(CDUnknownBlockType)arg1;
- (id)_activeAndVisibleSceneIdentifiersForApplication:(id)arg1;
- (void)_dismissInlineAppExposeIfNeeded;
- (_Bool)_workspaceWouldAllowTransitionToApplication:(id)arg1;
- (_Bool)isApplicationActiveAndVisible:(id)arg1;
- (void)dragAndDropTransaction:(id)arg1 didBeginGesture:(id)arg2;
- (void)dragAndDropTransaction:(id)arg1 didUpdateGesture:(id)arg2;
- (void)dragAndDropTransaction:(id)arg1 didEndGesture:(id)arg2;
- (_Bool)shouldBeginWindowDragGesture;
- (void)handleWindowDragGestureRecognizer:(id)arg1;

@end
