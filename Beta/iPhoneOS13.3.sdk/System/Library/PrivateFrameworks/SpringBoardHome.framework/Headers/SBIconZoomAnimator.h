/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <SpringBoardHome/SBIconAnimator.h>

@class NSMapTable, NSSet, NSString, SBHIconModel, SBHIconZoomSettings, SBIconListModel, SBIconListView;

@protocol SBIconZoomAnimationContaining;

@interface SBIconZoomAnimator : SBIconAnimator

{
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    NSSet *_criticalIconNodeIdentifiers;
    SBIconListModel *_iconListModel;
    SBHIconModel *_iconModel;
    double _startTime;
    SBIconListView *_iconListView;
    SBIconListView *_dockListView;
}

@property (nonatomic, readonly) id <SBIconZoomAnimationContaining> animationContainer;
@property (nonatomic, readonly) SBIconListView *iconListView;
@property (nonatomic, readonly) SBIconListView *dockListView;
@property (retain, nonatomic) NSSet *criticalIconNodeIdentifiers;
@property (nonatomic, readonly) double startTime;
@property (retain, nonatomic) SBHIconZoomSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (id)iconViewForIcon:(id)arg1;
- (void)_cleanupZoom;
- (void)_cleanupAnimation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_performAnimationToFraction:(double)arg1 withCentralAnimationSettings:(id)arg2 delay:(double)arg3 alreadyAnimating:(_Bool)arg4 sharedCompletion:(CDUnknownBlockType)arg5;
- (id)initWithAnimationContainer:(id)arg1;
- (void)_iconModelDidRelayout:(id)arg1;
- (void)_iconModelDidReload:(id)arg1;
- (void)_clearObservers;
- (void)_setIconListView:(id)arg1;
- (void)_setDockListView:(id)arg1;
- (void)_applyLabelAlphaFraction:(double)arg1;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)_invalidateAnimationForSignificantIconModelChangesForReason:(id)arg1;
- (void)node:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2;
- (void)node:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2;
- (void)nodeDidMoveContainedNodes:(id)arg1;
- (void)enumerateIconsAndIconViewsWithHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)listIconCount;
- (unsigned long long)dockIconCount;
- (void)cleanupZoom;
- (_Bool)isPastPointOfNoReturn;

@end
