/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@class NSString, SBAppLayout, SBApplicationSceneEntityDestructionIntent;

@interface SBMainTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent

{
    _Bool _fromAppLayoutWantsExclusiveForeground;
    _Bool _toAppLayoutWantsExclusiveForeground;
    _Bool _fromFloatingSwitcherVisible;
    _Bool _toFloatingSwitcherVisible;
    _Bool _gestureInitiated;
    _Bool _dragAndDropTransition;
    _Bool _breadcrumbTransition;
    _Bool _inlineAppExposeTransition;
    _Bool _morphToPiPTransition;
    _Bool _continuityTransition;
    SBAppLayout *_fromFloatingAppLayout;
    long long _fromFloatingConfiguration;
    SBAppLayout *_toFloatingAppLayout;
    long long _toFloatingConfiguration;
    NSString *_fromAppExposeBundleID;
    NSString *_toAppExposeBundleID;
    SBApplicationSceneEntityDestructionIntent *_intentForEntityRemoval;
    unsigned long long _fromInlineAppExposeRoles;
    unsigned long long _toInlineAppExposeRoles;
}

@property (nonatomic) _Bool fromAppLayoutWantsExclusiveForeground;
@property (nonatomic) _Bool toAppLayoutWantsExclusiveForeground;
@property (retain, nonatomic) SBAppLayout *fromFloatingAppLayout;
@property (nonatomic) long long fromFloatingConfiguration;
@property (nonatomic) _Bool fromFloatingSwitcherVisible;
@property (retain, nonatomic) SBAppLayout *toFloatingAppLayout;
@property (nonatomic) long long toFloatingConfiguration;
@property (nonatomic) _Bool toFloatingSwitcherVisible;
@property (copy, nonatomic) NSString *fromAppExposeBundleID;
@property (copy, nonatomic) NSString *toAppExposeBundleID;
@property (retain, nonatomic) SBApplicationSceneEntityDestructionIntent *intentForEntityRemoval;
@property (nonatomic) unsigned long long fromInlineAppExposeRoles;
@property (nonatomic) unsigned long long toInlineAppExposeRoles;
@property (nonatomic, getter=isGestureInitiated) _Bool gestureInitiated;
@property (nonatomic, getter=isDragAndDropTransition) _Bool dragAndDropTransition;
@property (nonatomic, getter=isBreadcrumbTransition) _Bool breadcrumbTransition;
@property (nonatomic, getter=isInlineAppExposeTransition) _Bool inlineAppExposeTransition;
@property (nonatomic, getter=isMorphToPiPTransition) _Bool morphToPiPTransition;
@property (nonatomic, getter=isContinuityTransition) _Bool continuityTransition;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
