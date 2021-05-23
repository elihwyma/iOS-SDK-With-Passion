/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifier.h>

@class NSArray, SBAppLayout;

@interface SBInsertionSwitcherModifier : SBSwitcherModifier

{
    SBAppLayout *_appLayout;
    _Bool _keepAppLayoutsBeforeInsertionInHierarchy;
    unsigned long long _indexToScrollToAfterInsertion;
    struct CGPoint _contentOffsetBeforeInsertion;
    NSArray *_appLayoutsVisibleBeforeInsertion;
    unsigned long long _phase;
}

@property (nonatomic, readonly) unsigned long long phase;

- (id)appLayouts;
- (id)initWithAppLayout:(id)arg1;
- (_Bool)isIndexVisible:(unsigned long long)arg1;
- (double)opacityForIndex:(unsigned long long)arg1;
- (long long)layoutUpdateMode;
- (id)appLayoutsForInsertionOrRemoval;
- (_Bool)clipsToUnobscuredMarginAtIndex:(unsigned long long)arg1;
- (struct CGPoint)scrollViewContentOffset;
- (id)handleInsertionEvent:(id)arg1;

@end
