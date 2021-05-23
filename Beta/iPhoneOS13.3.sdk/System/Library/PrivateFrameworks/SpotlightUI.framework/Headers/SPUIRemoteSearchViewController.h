/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <SpotlightUI/SPUISpotlightRemoteViewController.h>

@class UIView;

@protocol SPUIRemoteSearchViewDelegate;

@interface SPUIRemoteSearchViewController : SPUISpotlightRemoteViewController

{
    double _revealProgress;
    unsigned long long _source;
    id <SPUIRemoteSearchViewDelegate> _delegate;
    double _distanceToTopOfIcons;
    UIView *_dummyTransitionView;
    CDUnknownBlockType _willStartPresetingSpotlightHandler;
    CDUnknownBlockType _finishedPresentingSpotlightHandler;
    CDUnknownBlockType _willBeginDismissingSpotlightHandler;
    CDUnknownBlockType _didFinishDismissingSpotlightHandler;
}

@property (nonatomic) double distanceToTopOfIcons;
@property (retain, nonatomic) UIView *dummyTransitionView;
@property (copy, nonatomic) CDUnknownBlockType willStartPresetingSpotlightHandler;
@property (copy, nonatomic) CDUnknownBlockType finishedPresentingSpotlightHandler;
@property (copy, nonatomic) CDUnknownBlockType willBeginDismissingSpotlightHandler;
@property (copy, nonatomic) CDUnknownBlockType didFinishDismissingSpotlightHandler;
@property (nonatomic) double revealProgress;
@property (nonatomic) unsigned long long source;
@property (weak, nonatomic) id <SPUIRemoteSearchViewDelegate> delegate;

- (id)init;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)updateSceneSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)beginTodayViewAnimationWithSourceLayerRenderId:(unsigned long long)arg1 sourceContextId:(unsigned int)arg2;
- (void)didInvalidateSceneWhenForeground;
- (void)updateIntent:(unsigned long long)arg1;
- (void)startMatchMoveIfNeeded;
- (id)sceneSpecification;

@end
