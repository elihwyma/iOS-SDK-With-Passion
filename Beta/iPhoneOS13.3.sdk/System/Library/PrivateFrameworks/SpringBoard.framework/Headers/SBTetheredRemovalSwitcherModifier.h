/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSUUID;

@interface SBTetheredRemovalSwitcherModifier : SBSwitcherModifier

{
    NSUUID *_tetheredRemovalID;
    _Bool _isFloating;
    unsigned long long _phase;
    unsigned long long _indexToScrollAfterInsertion;
}

- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (id)handleTetheredRemovalEvent:(id)arg1;
- (id)initWithTetheredRemovalID:(id)arg1 floating:(_Bool)arg2;

@end
