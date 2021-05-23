/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIGestureGraphElement.h>

@class UIGestureGraphNode;

__attribute__((visibility("hidden")))
@interface UIGestureGraphEdge : UIGestureGraphElement

{
    _Bool _directed;
    UIGestureGraphNode *_sourceNode;
    UIGestureGraphNode *_targetNode;
}

@property (nonatomic, readonly) UIGestureGraphNode *sourceNode;
@property (nonatomic, readonly) UIGestureGraphNode *targetNode;
@property (nonatomic, readonly, getter=isDirected) _Bool directed;
@property (nonatomic, readonly, getter=isLoop) _Bool loop;

- (id)description;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4;
- (id)oppositeNode:(id)arg1;
- (id)commonNode:(id)arg1;

@end
