/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITabBarController.h>

@interface UITabBarController (PhotosUICore)

@property (nonatomic, readonly, getter=px_isTabBarHidden) _Bool px_tabBarHidden;
@property (nonatomic, readonly) _Bool px_hidesTabBarForRegularHorizontalSizeClass;
@property (nonatomic, readonly) _Bool px_hidesTabBarForCurrentHorizontalSizeClass;

- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (_Bool)px_canPerformAddToTabAnimationForTab:(unsigned long long)arg1;
- (struct CGRect)px_frameForTabItem:(unsigned long long)arg1 inCoordinateSpace:(id)arg2;
- (id)px_navigateToMemoryWithLocalIdentifier:(id)arg1;
- (void)px_performAddToTabAnimation:(unsigned long long)arg1 withSnapshotView:(id)arg2;
- (_Bool)canRouteToDestination:(id)arg1;
- (void)navigateToDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)px_HDRFocus;
- (double)px_imageModulationIntensity;
- (_Bool)px_isImageModulationEnabled;
- (void)_switchToBarBarItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ppt_runTabSwitchingTestWithName:(id)arg1 options:(id)arg2 delegate:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)nextExistingParticipantOnRouteToDestination:(id)arg1;
- (void)px_switchToTabForDestination:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_px_prepareNavigationFromViewController:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
