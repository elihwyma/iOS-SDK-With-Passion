/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIDynamicBehavior.h>

@class UIAttachmentBehavior;

__attribute__((visibility("hidden")))
@interface _UIPlatterMenuSnapBehavior : UIDynamicBehavior

{
    UIAttachmentBehavior *_spring1;
    UIAttachmentBehavior *_spring2;
}

@property (nonatomic) double damping;
@property (nonatomic) double frequency;
@property (nonatomic) struct CGPoint anchorPoint;

- (id)initWithItem:(id)arg1 attachedToAnchor:(struct CGPoint)arg2;

@end
