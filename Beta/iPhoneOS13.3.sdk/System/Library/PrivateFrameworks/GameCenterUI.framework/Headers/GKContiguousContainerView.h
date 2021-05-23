/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <UIKit/UIView.h>

@class NSArray;

@interface GKContiguousContainerView : UIView

{
    _Bool _vertical;
    _Bool _applyOrthogonalConstraints;
    UIView *_baselineView;
    double _overlap;
    NSArray *_replaceableConstraints;
    struct UIEdgeInsets _insets;
}

@property (nonatomic) _Bool vertical;
@property (nonatomic) _Bool applyOrthogonalConstraints;
@property (retain, nonatomic) NSArray *replaceableConstraints;
@property (nonatomic) UIView *baselineView;
@property (nonatomic) double overlap;
@property (nonatomic) struct UIEdgeInsets insets;

+ (id)containerForViewsFontsLeadings:(id)arg1 options:(long long)arg2;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3;
+ (id)containerViewForViews:(id)arg1 overlap:(double)arg2 vertical:(_Bool)arg3 applyOrthogonalConstraints:(_Bool)arg4;

- (void)dealloc;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForBaselineLayout;
- (void)replaceSubviews:(id)arg1;
- (void)_addContiguousSubviews:(id)arg1;

@end
