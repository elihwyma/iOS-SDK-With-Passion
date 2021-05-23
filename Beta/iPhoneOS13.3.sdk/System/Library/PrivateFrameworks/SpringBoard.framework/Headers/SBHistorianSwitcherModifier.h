/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString;

@protocol SBFluidSwitcherScrollProviding, SBFluidSwitcherScrollProvidingDelegate, SBHistorianSwitcherModifierDelegate;

@interface SBHistorianSwitcherModifier : SBSwitcherModifier <Swift>

{
    id <SBFluidSwitcherScrollProvidingDelegate> _scrollDelegate;
    id <SBHistorianSwitcherModifierDelegate> _historianDelegate;
    SBSwitcherModifier<SBFluidSwitcherScrollProviding> *_rootModifier;
}

@property (weak, nonatomic) id <SBHistorianSwitcherModifierDelegate> historianDelegate;
@property (nonatomic, readonly) SBSwitcherModifier<SBFluidSwitcherScrollProviding> *rootModifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <SBFluidSwitcherScrollProvidingDelegate> scrollDelegate;

+ (_Bool)canLogEvent:(id)arg1;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithRootModifier:(id)arg1;
- (id)_eventSnapshotFromEvent:(id)arg1;
- (id)_actionSnapshotFromAction:(id)arg1;
- (id)_modifierStackSnapshotFromModifier:(id)arg1;
- (id)_querySnapshotFromModifier:(id)arg1;
- (void)_populateIndexedQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(CDUnknownBlockType)arg4 appLayouts:(id)arg5;
- (void)_populateQueryMethodDescription:(id)arg1 fromModifier:(id)arg2 queryName:(id)arg3 descriptionProvider:(CDUnknownBlockType)arg4 appLayouts:(id)arg5;

@end
