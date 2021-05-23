/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSHashTable, NSString, SBBreadcrumbActionContext, SBDeviceApplicationSceneHandle, SiriBreadcrumbSource;

@interface SBDeviceApplicationSceneStatusBarBreadcrumbProvider : NSObject

{
    SiriBreadcrumbSource *_siriSource;
    SBBreadcrumbActionContext *_currentBreadcrumbActionContext;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    NSHashTable *_observers;
}

@property (nonatomic, readonly) _Bool hasBreadcrumb;
@property (copy, nonatomic, readonly) NSString *breadcrumbTitle;
@property (copy, nonatomic, readonly) NSString *breadcrumbSecondaryTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)_shouldAddBreadcrumbToActivatingSceneEntity:(id)arg1 sceneHandle:(id)arg2 withTransitionContext:(id)arg3;
+ (id)_breadcrumbBundleIdForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (id)_breadcrumbPrimaryTitleForAppWithBundleID:(id)arg1 sceneHandle:(id)arg2 activatingSceneEntity:(id)arg3;
+ (id)_destinationContextsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
+ (id)_breadcrumbSceneIdForForAppWithBundleID:(id)arg1 activatingSceneEntity:(id)arg2 withTransitionContext:(id)arg3;

- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)prepareForReuse;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
- (id)_breadcrumbNavigationActionContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)captureContextForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (void)_handleBreadcrumbAction:(unsigned long long)arg1 analyticsSide:(unsigned long long)arg2;
- (_Bool)_hasPrimaryBreadcrumb;
- (_Bool)_hasSecondaryBreadcrumb;
- (void)noteDidUpdateDisplayProperties;
- (void)_presentAssistantFromBreadcrumb;
- (void)_presentSpotlightFromBreadcrumbWithSource:(unsigned long long)arg1;
- (void)_activateAppLink:(id)arg1 withAppLinkState:(id)arg2 wasFromSpotlight:(_Bool)arg3 previousSideBundleID:(id)arg4 previousBreadcrumb:(id)arg5;
- (void)_activateBreadcrumbApplication:(id)arg1 withSceneIdentifier:(id)arg2;
- (long long)_openStrategyForAppLinkState:(id)arg1;
- (id)initWithSceneHandle:(id)arg1;
- (id)breadcrumbActionsForActivatingSceneEntity:(id)arg1 withTransitionContext:(id)arg2;
- (_Bool)activateBreadcrumbIfPossible;
- (_Bool)activateSecondaryBreadcrumbIfPossible;

@end
