/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent

{
    SBAppLayout *_appLayout;
    double _progress;
}

@property (nonatomic, readonly) SBAppLayout *appLayout;
@property (nonatomic, readonly) double progress;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithAppLayout:(id)arg1 progress:(double)arg2;

@end
