/*
 Image: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
 */

#import <UIKit/UIViewController.h>

@class FBApplicationUpdateScenesTransaction, FBScene, NSMutableArray, NSString, UIView, _UILegibilitySettings;

@protocol UIScenePresentation, UIScenePresenter;

@interface SPUISpotlightRemoteViewController : UIViewController

{
    _Bool _crashedWhileForeground;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_sceneIdentifier;
    FBScene *_scene;
    FBApplicationUpdateScenesTransaction *_transaction;
    UIView<UIScenePresentation> *_hostView;
    id <UIScenePresenter> _presenter;
    long long _currentOrientation;
    NSMutableArray *_sceneEventsQueue;
}

@property (retain) FBScene *scene;
@property (retain) NSString *sceneIdentifier;
@property (retain) FBApplicationUpdateScenesTransaction *transaction;
@property (retain) UIView<UIScenePresentation> *hostView;
@property (retain) id <UIScenePresenter> presenter;
@property long long currentOrientation;
@property _Bool crashedWhileForeground;
@property (retain) NSMutableArray *sceneEventsQueue;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setForeground:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)sceneDidInvalidate:(id)arg1;
- (void)transaction:(id)arg1 didCreateScene:(id)arg2;
- (id)watchdogPolicyForProcess:(id)arg1 eventContext:(id)arg2;
- (id)watchdogTerminationRequestForProcess:(id)arg1 error:(id)arg2;
- (id)initWithSceneIdentifier:(id)arg1;
- (void)didInvalidateSceneWhenForeground;
- (void)addOrExecuteEventAsNeeded:(CDUnknownBlockType)arg1;
- (id)sceneSpecification;
- (struct CGSize)initialFittingSize;
- (_Bool)setSceneFrameOnRotation;
- (void)updateTraitCollection;
- (void)updateSafeAreasOnSettings:(id)arg1;
- (void)createSceneWithPriority:(long long)arg1;
- (struct CGRect)sceneSettingsFrameFromRect:(struct CGRect)arg1;
- (void)createSceneIfNeededWithPriority:(long long)arg1;
- (void)clearEventQueue;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;

@end
