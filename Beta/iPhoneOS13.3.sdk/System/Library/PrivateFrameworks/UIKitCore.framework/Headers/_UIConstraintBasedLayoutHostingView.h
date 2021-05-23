/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UIConstraintBasedLayoutHostingView : UIView

{
    UIView *_hostedView;
    _Bool _hasAddedConstraints;
}

@property (retain, nonatomic) UIView *hostedView;

+ (_Bool)requiresConstraintBasedLayout;

- (void)constraintsDidChangeInEngine:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)updateConstraints;
- (void)willRemoveSubview:(id)arg1;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1;
- (CDStruct_c3b9c2ee)_baselineOffsetsAtSize:(struct CGSize)arg1;
- (struct CGSize)_layoutSizeThatFits:(struct CGSize)arg1 fixedAxes:(unsigned long long)arg2;
- (_Bool)_layoutHeightDependsOnWidth;
- (void)_setFrameWithAlignmentRect:(struct CGRect)arg1;
- (void)_layoutMetricsInvalidatedForHostedView;
- (void)_scheduleUpdateConstraintsPassAsEngineHostNeedingLayout:(_Bool)arg1;
- (id)initWithHostedView:(id)arg1;

@end
