/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID, SBAppLayout;

@interface SBTransitionSwitcherModifierEvent : SBSwitcherModifierEvent

{
    _Bool _animated;
    NSUUID *_transitionID;
    unsigned long long _phase;
    SBAppLayout *_fromAppLayout;
    long long _fromEnvironmentMode;
    SBAppLayout *_toAppLayout;
    long long _toEnvironmentMode;
    long long _fromInterfaceOrientation;
    long long _toInterfaceOrientation;
}

@property (retain, nonatomic) SBAppLayout *fromAppLayout;
@property (nonatomic) long long fromEnvironmentMode;
@property (retain, nonatomic) SBAppLayout *toAppLayout;
@property (nonatomic) long long toEnvironmentMode;
@property (nonatomic) long long fromInterfaceOrientation;
@property (nonatomic) long long toInterfaceOrientation;
@property (nonatomic, readonly) NSUUID *transitionID;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly, getter=isAnimated) _Bool animated;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTransitionID:(id)arg1 phase:(unsigned long long)arg2 animated:(_Bool)arg3;
- (_Bool)isTransitionEvent;

@end
