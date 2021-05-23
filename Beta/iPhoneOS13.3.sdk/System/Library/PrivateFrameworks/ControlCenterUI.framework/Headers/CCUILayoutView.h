/*
 Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

#import <ControlCenterUI/CCUIScrollView.h>

@class CCUILayoutOptions;

@protocol CCUILayoutViewLayoutSource;

@interface CCUILayoutView : CCUIScrollView

{
    CCUILayoutOptions *_layoutOptions;
    id <CCUILayoutViewLayoutSource> _layoutSource;
    struct UIEdgeInsets _edgeInsets;
}

@property (nonatomic) struct UIEdgeInsets edgeInsets;
@property (weak, nonatomic) id <CCUILayoutViewLayoutSource> layoutSource;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setNeedsLayout;
- (void)layoutSubviews;
- (void)didAddSubview:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 layoutOptions:(id)arg2;
- (struct CGRect)frameForLayoutRect:(struct CCUILayoutRect)arg1;
- (struct CGRect)frameForSubview:(id)arg1;
- (void)iterateLayoutSubviewsWithBlock:(CDUnknownBlockType)arg1;
- (id)subviewsToLayout;

@end
