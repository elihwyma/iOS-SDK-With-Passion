/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBInsertionSwitcherModifierEvent : SBSwitcherModifierEvent

{
    SBAppLayout *_appLayout;
    unsigned long long _index;
    unsigned long long _phase;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) unsigned long long phase;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 intoIndex:(unsigned long long)arg2 phase:(unsigned long long)arg3;

@end
