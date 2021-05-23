/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class BSProcessHandle, FBSDisplayConfiguration, FBSDisplayIdentity, NSSet, NSString, NSUUID, SBLayoutStateTransitionCoordinator, SBWorkspace, SBWorkspaceApplicationSceneTransitionContext, SBWorkspaceTransientOverlayTransitionContext;

@interface SBWorkspaceTransitionRequest : NSObject <Swift>

{
    FBSDisplayConfiguration *_displayConfiguration;
    SBWorkspace *_workspace;
    NSUUID *_uniqueID;
    NSString *_eventLabel;
    SBLayoutStateTransitionCoordinator *_layoutStateTransitionCoordinator;
    _Bool _finalized;
    long long _interfaceOrientation;
    SBWorkspaceApplicationSceneTransitionContext *_applicationContext;
    BSProcessHandle *_originatingProcess;
    SBWorkspaceTransientOverlayTransitionContext *_transientOverlayContext;
}

@property (nonatomic, readonly) _Bool isMainWorkspaceTransitionRequest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSSet *toApplicationSceneEntities;
@property (copy, nonatomic, readonly) NSSet *fromApplicationSceneEntities;
@property (nonatomic, readonly) SBWorkspace *workspace;
@property (nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) BSProcessHandle *originatingProcess;
@property (copy, nonatomic) NSString *eventLabel;
@property (copy, nonatomic, readonly) NSUUID *uniqueID;
@property (nonatomic, readonly, getter=isFinalized) _Bool finalized;
@property (retain, nonatomic) SBWorkspaceApplicationSceneTransitionContext *applicationContext;
@property (retain, nonatomic) SBWorkspaceTransientOverlayTransitionContext *transientOverlayContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)finalize;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)modifyApplicationContext:(CDUnknownBlockType)arg1;
- (void)setEventLabelWithFormat:(id)arg1;
- (void)modifyTransientOverlayContext:(CDUnknownBlockType)arg1;
- (id)compactDescriptionBuilder;
- (void)declineWithReason:(id)arg1;
- (id)_initWithWorkspace:(id)arg1 displayConfiguration:(id)arg2;
- (id)layoutStateForApplicationTransitionContext:(id)arg1;
- (id)previousLayoutStateForApplicationTransitionContext:(id)arg1;

@end
