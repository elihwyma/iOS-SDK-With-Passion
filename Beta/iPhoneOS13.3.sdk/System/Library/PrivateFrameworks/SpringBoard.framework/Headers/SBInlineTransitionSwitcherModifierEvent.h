/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBTransitionSwitcherModifierEvent.h>

@interface SBInlineTransitionSwitcherModifierEvent : SBTransitionSwitcherModifierEvent

{
    unsigned long long _scrollAxis;
    double _cardScale;
    struct CGSize _fixedCardSize;
}

@property (nonatomic) unsigned long long scrollAxis;
@property (nonatomic) double cardScale;
@property (nonatomic) struct CGSize fixedCardSize;

- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
