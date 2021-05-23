/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, UIView;

@protocol UIInputViewSetPlacementApplicator <Swift>

@property (readonly) struct CGPoint origin;
@property (retain, readonly) NSArray *constraints;
@property (retain, readonly) UIView *draggableView;
@property (retain, readonly) UIView *twoFingerDraggableView;
@property (readonly) struct UIEdgeInsets contentInsets;
@property (readonly) struct CGRect popoverFrame;

+ (unsigned short)applicatorForOwner:withPlacement: /* Error: Ran out of types for this method. */;

- (unsigned short)invalidate;
- (unsigned short)prepare;
- (unsigned short)preBeginGesture:shouldBegin: /* Error: Ran out of types for this method. */;
- (unsigned short)isGesture:inDraggableView: /* Error: Ran out of types for this method. */;
- (unsigned short)allConstraintsActive;
- (unsigned short)applyChanges: /* Error: Ran out of types for this method. */;

@end
