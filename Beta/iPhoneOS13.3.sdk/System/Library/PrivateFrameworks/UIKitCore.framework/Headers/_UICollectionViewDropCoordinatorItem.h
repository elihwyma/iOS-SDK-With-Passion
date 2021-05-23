/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSString, UIDragItem, UIDragPreviewTarget, _UIDropAnimationHandlers;

__attribute__((visibility("hidden")))
@interface _UICollectionViewDropCoordinatorItem : NSObject <Swift>

{
    _Bool _shouldRemainInHierarchy;
    int _kind;
    NSIndexPath *_destinationIndexPath;
    UIDragItem *_dragItem;
    UIDragPreviewTarget *_target;
    _UIDropAnimationHandlers *_animationHandlers;
    CDUnknownBlockType _previewParametersProvider;
}

@property (weak, nonatomic) UIDragItem *dragItem;
@property (copy, nonatomic) UIDragPreviewTarget *target;
@property (nonatomic) int kind;
@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers;
@property (copy, nonatomic) CDUnknownBlockType previewParametersProvider;
@property (retain, nonatomic) NSIndexPath *destinationIndexPath;
@property (nonatomic) _Bool shouldRemainInHierarchy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2;
- (id)initWithDestinationIndexPath:(id)arg1 dragItem:(id)arg2 placeholderConfiguration:(id)arg3;
- (id)initWithDragItem:(id)arg1 target:(id)arg2;

@end
