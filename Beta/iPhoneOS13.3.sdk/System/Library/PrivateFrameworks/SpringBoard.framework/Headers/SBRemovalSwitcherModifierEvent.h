/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent

{
    SBAppLayout *_appLayout;
    long long _reason;
    unsigned long long _phase;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) long long reason;
@property (nonatomic, readonly) unsigned long long phase;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 reason:(long long)arg2 phase:(unsigned long long)arg3;

@end
