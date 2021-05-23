/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBWorkspaceTransitionContext.h>

@class FBSDisplayIdentity, NSMutableDictionary, NSSet, NSString, SBApplicationSceneEntity, SBApplicationSceneEntityDestructionIntent, SBLayoutState, SBMainWorkspaceTransitionRequest, SBWorkspaceEntity;

@protocol SBWorkspaceApplicationSceneTransitionContextDelegate;

@interface SBWorkspaceApplicationSceneTransitionContext : SBWorkspaceTransitionContext

{
    CDUnknownBlockType _resultBlock;
    _Bool _background;
    _Bool _fencesAnimations;
    _Bool _alwaysRunsWatchdog;
    _Bool _waitsForSceneUpdates;
    _Bool _sentActivationResult;
    SBLayoutState *_layoutState;
    SBLayoutState *_previousLayoutState;
    NSMutableDictionary *_requestedWorkspaceEntityForLayoutRoleMutableDictionary;
    _Bool _suspendsInlineAppExposeCancellation;
    _Bool _prefersTouchCancellationDisabled;
    _Bool __alreadyPopulatedRequestedWorkspaceEntities;
    id <SBWorkspaceApplicationSceneTransitionContextDelegate> _delegate;
    long long _interfaceOrientation;
    long long _preferredInterfaceOrientation;
    SBWorkspaceEntity *_deactivatingEntity;
    long long _requestedSpaceConfiguration;
    long long _requestedFloatingConfiguration;
    long long _requestedUnlockedEnvironmentMode;
    long long _requestedFloatingSwitcherVisible;
    NSString *_requestedAppExposeBundleID;
    SBApplicationSceneEntityDestructionIntent *_intentForEntityRemoval;
}

@property (retain, nonatomic, setter=_setRequestedActivatingWorkspaceEntity:) SBWorkspaceEntity *requestedActivatingWorkspaceEntity;
@property (nonatomic, setter=_setAlreadyPopulatedRequestedWorkspaceEntities:) _Bool _alreadyPopulatedRequestedWorkspaceEntities;
@property (weak, nonatomic, readonly) SBMainWorkspaceTransitionRequest *request;
@property (nonatomic, getter=isBackground) _Bool background;
@property (nonatomic) _Bool fencesAnimations;
@property (nonatomic) _Bool alwaysRunsWatchdog;
@property (nonatomic) _Bool waitsForSceneUpdates;
@property (nonatomic) _Bool suspendsInlineAppExposeCancellation;
@property (copy, nonatomic) CDUnknownBlockType resultBlock;
@property (copy, nonatomic, readonly) NSSet *applicationSceneEntities;
@property (copy, nonatomic, readonly) NSSet *previousApplicationSceneEntities;
@property (nonatomic, readonly) double watchdogScaleFactor;
@property (nonatomic, readonly) SBLayoutState *previousLayoutState;
@property (weak, nonatomic) id <SBWorkspaceApplicationSceneTransitionContextDelegate> delegate;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) _Bool prefersTouchCancellationDisabled;
@property (nonatomic) long long preferredInterfaceOrientation;
@property (retain, nonatomic) SBWorkspaceEntity *activatingEntity;
@property (retain, nonatomic) SBWorkspaceEntity *deactivatingEntity;
@property (nonatomic) long long requestedSpaceConfiguration;
@property (nonatomic) long long requestedFloatingConfiguration;
@property (nonatomic) long long requestedUnlockedEnvironmentMode;
@property (nonatomic) long long requestedFloatingSwitcherVisible;
@property (copy, nonatomic) NSString *requestedAppExposeBundleID;
@property (retain, nonatomic) SBApplicationSceneEntityDestructionIntent *intentForEntityRemoval;
@property (nonatomic, readonly) SBApplicationSceneEntity *resolvedActivatingApplicationSceneEntity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) SBLayoutState *layoutState;

- (id)init;
- (void)dealloc;
- (void)finalize;
- (id)succinctDescriptionBuilder;
- (id)_displayConfiguration;
- (id)applicationSceneEntityForLayoutRole:(long long)arg1;
- (id)previousApplicationSceneEntityForLayoutRole:(long long)arg1;
- (void)setEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (void)sendActivationResultErrorCode:(long long)arg1 reason:(id)arg2;
- (id)compactDescriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)previousEntityForLayoutRole:(long long)arg1;
- (id)previousApplicationSceneEntityForBundleID:(id)arg1;
- (id)entityForLayoutRole:(long long)arg1;
- (_Bool)hasSentActivationResult;
- (long long)_lockedInterfaceOrientation;
- (void)setPreviousEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (id)applicationSceneEntityForBundleID:(id)arg1;
- (id)requestedWorkspaceEntityForLayoutRole:(long long)arg1;
- (void)_setRequestedWorkspaceEntity:(id)arg1 forLayoutRole:(long long)arg2;
- (long long)interfaceOrientationOrPreferredOrientation;
- (struct CGRect)frameForApplicationSceneEntity:(id)arg1;

@end
