/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, SBHSidebarWidgetBootstrappingAdvisor, WGWidgetDiscoveryController;

@interface SBWidgetController : NSObject

{
    WGWidgetDiscoveryController *_widgetDiscoveryController;
    SBHSidebarWidgetBootstrappingAdvisor *_sidebarWidgetBootstrappingAdvisor;
}

@property (retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController;
@property (nonatomic, readonly) SBHSidebarWidgetBootstrappingAdvisor *sidebarWidgetBootstrappingAdvisor;
@property (nonatomic) _Bool bootstrapFavoriteWidgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)sidebarWidgetLearningAdvisorDidUpdate:(id)arg1;
- (_Bool)areWidgetsPinnedForWidgetDiscoveryController:(id)arg1;
- (_Bool)didPurgeNonCAMLSnapshotsForWidgetDiscoveryController:(id)arg1;
- (_Bool)didPurgeNonASTCSnapshotsForWidgetDiscoveryController:(id)arg1;
- (id)statusBarAssertionForWidgetDiscoveryController:(id)arg1 legibilityStyle:(long long)arg2;
- (void)widgetDiscoveryController:(id)arg1 didEndUsingStatusBarAssertion:(id)arg2;
- (id)widgetDiscoveryController:(id)arg1 preferredViewControllerForPresentingFromViewController:(id)arg2;
- (void)widgetDiscoveryController:(id)arg1 requestUnlockWithCompletion:(CDUnknownBlockType)arg2;
- (void)widgetDiscoveryController:(id)arg1 updateStatusBarAssertion:(id)arg2 withLegibilityStyle:(long long)arg3;
- (void)widgetDiscoveryController:(id)arg1 widgetWithBundleIdentifier:(id)arg2 didEncounterProblematicSnapshotAtURL:(id)arg3;
- (_Bool)widgetDiscoveryController:(id)arg1 shouldPurgeArchivedSnapshotsForWidgetWithBundleIdentifier:(id)arg2;
- (_Bool)shouldShowWidgetsPinButtonForWidgetDiscoveryController:(id)arg1;
- (_Bool)shouldShowWidgetsPinningTeachingViewForWidgetDiscoveryController:(id)arg1;
- (void)widgetDiscoveryControllerDidDismissWidgetsPinningTeachingView:(id)arg1;
- (void)widgetDiscoveryController:(id)arg1 didChangeWidgetsPinning:(_Bool)arg2;
- (_Bool)widgetDiscoveryControllerShouldIncludeInternalWidgets:(id)arg1;
- (_Bool)widgetDiscoveryControllerShouldRespectFavorites:(id)arg1;
- (id)newWidgetGroupViewControllerWithSettings:(struct WGWidgetListSettings)arg1;
- (void)launchExtensionWithBundleID:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_reloadWidgetPreferences;
- (void)_updateFavoriteWidgetLearning;
- (void)_homescreenSidebarVisibilityDidChange:(id)arg1;
- (_Bool)_shouldUsePinnedWidgets;

@end
