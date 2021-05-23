/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIStatusBarDisplayItemRelation.h>

@class _UIStatusBarDisplayItemPlacement, _UIStatusBarDisplayItemState;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDisplayItemDependencyRelation : _UIStatusBarDisplayItemRelation

{
    _Bool _requirement;
    _UIStatusBarDisplayItemState *_itemState;
    _UIStatusBarDisplayItemPlacement *_placement;
}

@property (weak, nonatomic) _UIStatusBarDisplayItemState *itemState;
@property (retain, nonatomic) _UIStatusBarDisplayItemPlacement *placement;
@property (nonatomic) _Bool requirement;

- (id)type;
- (id)_ui_descriptionBuilder;
- (_Bool)isFulfilled;
- (id)itemStates;

@end
