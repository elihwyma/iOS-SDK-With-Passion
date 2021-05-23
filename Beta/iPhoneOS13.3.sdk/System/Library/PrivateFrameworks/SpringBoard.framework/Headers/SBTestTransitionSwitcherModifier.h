/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@interface SBTestTransitionSwitcherModifier : SBTransitionSwitcherModifier

{
    _Bool _shouldRasterizeLiveContentUntilDelay;
    double _delay;
}

- (_Bool)shouldRasterizeLiveContentUntilDelay:(inout double *)arg1;
- (void)setShouldRasterizeLiveContentUntilDelay:(double)arg1;

@end
