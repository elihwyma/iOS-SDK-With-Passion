/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSString;

@interface SBTimerEventSwitcherModifierAction : SBSwitcherModifierAction

{
    NSString *_reason;
}

@property (nonatomic, readonly) NSString *reason;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithDelay:(double)arg1 validator:(CDUnknownBlockType)arg2 reason:(id)arg3;

@end
