/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <UIKit/UIViewController.h>

@class CCUIControlCenterPositionProvider, CCUILayoutOptions, CCUIModuleCollectionView, CCUIModuleInstanceManager, CCUIModuleSettingsManager, NSArray, NSDictionary, NSHashTable, NSObject, NSString;

@protocol CCUIModuleCollectionViewControllerDelegate, OS_dispatch_group;

@interface CCUIModuleCollectionViewController : UIViewController

{
    CCUIModuleInstanceManager *_moduleManager;
    CCUIModuleSettingsManager *_settingsManager;
    CCUIControlCenterPositionProvider *_portraitPositionProvider;
    CCUIControlCenterPositionProvider *_landscapePositionProvider;
    CCUILayoutOptions *_layoutOptions;
    NSDictionary *_moduleViewControllerByIdentifier;
    NSDictionary *_moduleContainerViewByIdentifier;
    NSHashTable *_homeGestureDismissalAllowedModules;
    NSHashTable *_currentModules;
    NSHashTable *_expandedModules;
    NSObject<OS_dispatch_group> *_moduleCloseDispatchGroup;
    _Bool _homeGestureDismissalAllowed;
    id <CCUIModuleCollectionViewControllerDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned long long expandedModuleCount;
@property (nonatomic, readonly, getter=isHomeGestureDismissalAllowed) _Bool homeGestureDismissalAllowed;
@property (retain, nonatomic) CCUIModuleCollectionView *moduleCollectionView;
@property (weak, nonatomic) id <CCUIModuleCollectionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *childViewControllersForAppearancePropagation;

- (void)loadView;
- (struct CGSize)preferredContentSize;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (long long)_interfaceOrientation;
- (void)willBecomeActive;
- (void)willResignActive;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)dismissPresentedContentAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)displayWillTurnOff;
- (id)_currentLayoutOptions;
- (void)_updateEnabledModuleIdentifiers;
- (void)_updateHomeGestureDismissalAllowed;
- (void)_refreshPositionProviders;
- (void)_populateModuleViewControllers;
- (id)_activePositionProvider;
- (id)_positionProviderForInterfaceOrientation:(long long)arg1;
- (void)_updateModuleControllers;
- (void)_beginAppearanceTransition:(_Bool)arg1 affectedModule:(id)arg2;
- (id)_moduleInstances;
- (id)_setupAndAddModuleViewControllerToHierarchy:(id)arg1;
- (void)_removeAndTearDownModuleViewControllerFromHierarchy:(id)arg1;
- (id)_sizesForModuleIdentifiers:(id)arg1 moduleInstanceByIdentifier:(id)arg2 interfaceOrientation:(long long)arg3;
- (void)moduleInstancesChangedForModuleInstanceManager:(id)arg1;
- (void)orderedEnabledModuleIdentifiersChangedForSettingsManager:(id)arg1;
- (struct CCUILayoutSize)layoutSizeForLayoutView:(id)arg1;
- (struct CCUILayoutRect)layoutView:(id)arg1 layoutRectForSubview:(id)arg2;
- (struct CGRect)compactModeFrameForContentModuleContainerViewController:(id)arg1;
- (_Bool)contentModuleContainerViewController:(id)arg1 canBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didBeginInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didFinishInteractionWithModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didOpenExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 didCloseExpandedModule:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willPresentViewController:(id)arg2;
- (void)contentModuleContainerViewController:(id)arg1 willDismissViewController:(id)arg2;
- (void)contentModuleContainerViewControllerDismissPresentedContent:(id)arg1;
- (id)initWithModuleInstanceManager:(id)arg1;
- (void)didUpdateHomeGestureDismissalAllowed:(_Bool)arg1 forModuleWithIdentifier:(id)arg2;
- (void)expandModuleWithIdentifier:(id)arg1;
- (void)dismissExpandedModuleAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isModuleExpandedForIdentifier:(id)arg1;
- (_Bool)isAtMaxHeight;
- (id)relevantSnapHeightsForOrientation:(long long)arg1;
- (id)queryAllTopLevelBlockingGestureRecognizers;

@end
