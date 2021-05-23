/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@interface SBUpdateLayoutSwitcherModifierAction : SBSwitcherModifierAction

{
    unsigned long long _options;
    long long _updateMode;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) long long updateMode;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1 updateMode:(long long)arg2;

@end
