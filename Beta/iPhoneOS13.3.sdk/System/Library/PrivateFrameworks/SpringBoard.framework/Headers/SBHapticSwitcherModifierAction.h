/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBHapticSwitcherModifierAction : SBSwitcherModifierAction

{
    long long _hapticType;
    long long _phase;
}

@property (nonatomic, readonly) long long hapticType;
@property (nonatomic, readonly) long long phase;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithHapticType:(long long)arg1 phase:(long long)arg2;

@end
