/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifierEvent : SBSwitcherModifierEvent

{
    NSUUID *_tetheredRemovalID;
    unsigned long long _phase;
}

@property (nonatomic, readonly) NSUUID *tetheredRemovalID;
@property (nonatomic, readonly) unsigned long long phase;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTetheredRemovalID:(id)arg1 phase:(unsigned long long)arg2;

@end
