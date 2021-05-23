/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, NSUUID;

@interface SBTetheredInsertionSwitcherModifier : SBSwitcherModifier

{
    NSUUID *_tetheredInsertionID;
    _Bool _isFloating;
    unsigned long long _phase;
    NSArray *_appLayoutsVisibleBeforeInsertion;
    unsigned long long _indexToScrollAfterInsertion;
}

- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (id)handleTetheredInsertionEvent:(id)arg1;
- (id)initWithTetheredInsertionID:(id)arg1 floating:(_Bool)arg2;

@end
