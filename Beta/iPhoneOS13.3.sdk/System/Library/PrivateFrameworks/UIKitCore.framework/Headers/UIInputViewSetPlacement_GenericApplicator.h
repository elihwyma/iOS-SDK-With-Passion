/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSLayoutConstraint, NSString, UIView;

@protocol UIInputViewSetPlacementOwner;

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacement_GenericApplicator : NSObject

{
    NSLayoutConstraint *_horizontalConstraint;
    NSLayoutConstraint *_verticalConstraint;
    NSLayoutConstraint *_widthConstraint;
    id <UIInputViewSetPlacementOwner> _owner;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct CGPoint origin;
@property (retain, readonly) NSArray *constraints;
@property (retain, readonly) UIView *draggableView;
@property (retain, readonly) UIView *twoFingerDraggableView;
@property (readonly) struct UIEdgeInsets contentInsets;
@property (readonly) struct CGRect popoverFrame;

+ (id)applicatorForOwner:(id)arg1 withPlacement:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)invalidate;
- (void)prepare;
- (struct CGRect)targetRect;
- (id)initForOwner:(id)arg1 withPlacement:(id)arg2;
- (void)checkVerticalConstraint;
- (_Bool)preBeginGesture:(id)arg1 shouldBegin:(_Bool *)arg2;
- (_Bool)isGesture:(id)arg1 inDraggableView:(struct CGPoint)arg2;
- (_Bool)allConstraintsActive;
- (void)applyChanges:(id)arg1;

@end
