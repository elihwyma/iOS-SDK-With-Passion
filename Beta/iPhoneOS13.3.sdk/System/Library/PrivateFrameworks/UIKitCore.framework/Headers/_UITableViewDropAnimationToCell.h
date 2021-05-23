/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UIDragPreviewParameters, UITableViewCell;

__attribute__((visibility("hidden")))
@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation

{
    UITableViewCell *_cell;
    UIDragPreviewParameters *_previewParameters;
}

@property (weak, nonatomic) UITableViewCell *cell;
@property (retain, nonatomic) UIDragPreviewParameters *previewParameters;

- (id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3;

@end
