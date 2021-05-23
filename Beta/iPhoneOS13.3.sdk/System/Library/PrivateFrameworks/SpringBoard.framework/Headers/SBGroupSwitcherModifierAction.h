/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBSwitcherModifierAction.h>

@class NSMutableArray;

@interface SBGroupSwitcherModifierAction : SBSwitcherModifierAction

{
    NSMutableArray *_actions;
}

+ (id)groupActionWithActions:(id)arg1;

- (id)init;
- (long long)type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addAction:(id)arg1;
- (void)addActions:(id)arg1;
- (id)appendAction:(id)arg1;
- (void)enumerateActionsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)leafCount;
- (void)enumerateLeafActionsUsingBlock:(CDUnknownBlockType)arg1;

@end
