/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIKBCompatInputView : UIView

{
    UIView *_touchableView;
    UIView *_snapshotView;
}

@property (retain, nonatomic) UIView *touchableView;
@property (retain, nonatomic) UIView *snapshotView;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)addSubview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)_compatibleBounds;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_didChangeKeyplaneWithContext:(id)arg1;
- (_Bool)_hasAutolayoutHeightConstraint;

@end
