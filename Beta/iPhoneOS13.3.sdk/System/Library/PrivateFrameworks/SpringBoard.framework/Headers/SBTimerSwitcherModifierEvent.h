/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSString;

@interface SBTimerSwitcherModifierEvent : SBSwitcherModifierEvent

{
    NSString *_reason;
}

@property (nonatomic, readonly) NSString *reason;

- (long long)type;
- (id)initWithReason:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
