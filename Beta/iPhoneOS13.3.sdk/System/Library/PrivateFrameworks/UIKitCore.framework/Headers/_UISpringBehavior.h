/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UISpringBehavior : UIDynamicBehavior

{
    UIAttachmentBehavior *_topLeft;
    UIAttachmentBehavior *_topRight;
    UIAttachmentBehavior *_bottomRight;
    UIAttachmentBehavior *_bottomLeft;
    double _damping;
    double _frequency;
    struct CGPoint _anchorPoint;
}

@property (nonatomic) struct CGPoint anchorPoint;
@property (nonatomic) double damping;
@property (nonatomic) double frequency;

- (id)init;
- (id)initWithItem:(id)arg1 anchorPoint:(struct CGPoint)arg2;

@end
