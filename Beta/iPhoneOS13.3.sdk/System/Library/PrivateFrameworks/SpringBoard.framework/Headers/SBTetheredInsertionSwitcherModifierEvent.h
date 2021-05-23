/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredInsertionSwitcherModifierEvent : SBSwitcherModifierEvent

{
    NSUUID *_tetheredInsertionID;
    unsigned long long _phase;
}

@property (nonatomic, readonly) NSUUID *tetheredInsertionID;
@property (nonatomic, readonly) unsigned long long phase;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithTetheredInsertionID:(id)arg1 phase:(unsigned long long)arg2;

@end
