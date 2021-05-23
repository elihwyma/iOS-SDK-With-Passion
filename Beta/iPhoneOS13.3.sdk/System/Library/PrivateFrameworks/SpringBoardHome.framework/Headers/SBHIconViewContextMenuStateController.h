/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSMutableArray, NSMutableSet;

@interface SBHIconViewContextMenuStateController : NSObject

{
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}

+ (id)sharedInstance;

- (id)init;
- (void)noteFolderControllerWillClose:(id)arg1;
- (void)registerIconView:(id)arg1;
- (void)unregisterIconView:(id)arg1;
- (void)dismissAppIconForceTouchControllers:(CDUnknownBlockType)arg1;
- (void)floatyFolderViewDidScrollHiddenIconViewAway:(id)arg1;
- (void)iconViewWillPresentContextMenu:(id)arg1;
- (void)iconViewWillDismissContextMenu:(id)arg1;
- (void)iconViewWillAnimateContextMenu:(id)arg1;
- (void)iconViewDidAnimateContextMenu:(id)arg1;
- (_Bool)areAnyIconViewContextMenusAnimating;
- (_Bool)areAnyIconViewContextMenusShowing;
- (void)performAfterContextMenuAnimationsHaveCompleted:(CDUnknownBlockType)arg1;
- (void)earlyTerminateAnyContextMenuAnimations;

@end
