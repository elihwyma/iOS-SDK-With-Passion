/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewTarget, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToTarget : _UITableViewDropAnimation

{
    _Bool _didSearchForCell;
    UIDragPreviewTarget *_target;
    UITableViewCell *_cell;
}

@property (retain, nonatomic) UIDragPreviewTarget *target;
@property (nonatomic) _Bool didSearchForCell;
@property (retain, nonatomic) UITableViewCell *cell;

- (id)initWithDragItem:(id)arg1 target:(id)arg2;
- (id)cellForTargetContainerInTableView:(id)arg1;

@end
