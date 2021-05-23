/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIControl.h>

@class NSAttributedString, UIColor, _UIRefreshControlContentView;

@protocol _UIRefreshControlHosting;

@interface UIRefreshControl : UIControl

{
    long long _style;
    _UIRefreshControlContentView *_contentView;
    double _refreshControlHeight;
    double _visibleHeight;
    double _snappingHeight;
    double _additionalTopInset;
    _Bool _insetsApplied;
    _Bool _adjustingInsets;
    struct UIEdgeInsets _appliedInsets;
    id <_UIRefreshControlHosting> _host;
    long long _refreshControlState;
}

@property (nonatomic, readonly) long long refreshControlState;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) double _refreshControlHeight;
@property (nonatomic, readonly) double _snappingHeight;
@property (nonatomic, readonly) double _visibleHeight;
@property (nonatomic, readonly) _Bool _hostAdjustsContentOffset;
@property (nonatomic, readonly) _Bool _areInsetsBeingApplied;
@property (nonatomic, readonly, getter=_appliedInsets) struct UIEdgeInsets appliedInsets;
@property (weak, nonatomic, getter=_host, setter=_setHost:) id <_UIRefreshControlHosting> _host;
@property (nonatomic, readonly, getter=isRefreshing) _Bool refreshing;
@property (retain, nonatomic) UIColor *tintColor;
@property (retain, nonatomic) NSAttributedString *attributedTitle;

+ (id)_defaultColor;
+ (Class)_contentViewClassForStyle:(long long)arg1;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_update;
- (void)setBounds:(struct CGRect)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_contentView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)sizeToFit;
- (void)_setAttributedTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (id)_tintColor;
- (void)_didScroll;
- (id)_attributedTitle;
- (void)didMoveToSuperview;
- (void)_populateArchivedSubviews:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_scrollView;
- (void)_setTintColor:(id)arg1;
- (void)_removeInsets;
- (void)_updateSnappingHeight;
- (void)setRefreshControlState:(long long)arg1;
- (void)_resizeToFitContents;
- (void)_removeInsetHeight:(double)arg1;
- (void)_addInsetHeight:(double)arg1;
- (double)revealedFraction;
- (long long)_recomputeNewState;
- (void)_updateHiddenStateIfNeeded;
- (void)_updateConcealingMask;
- (double)_stiffnessForVelocity:(double)arg1;
- (struct CGPoint)_originForContentOffset:(struct CGPoint)arg1;
- (double)_visibleHeightForContentOffset:(struct CGPoint)arg1 origin:(struct CGPoint)arg2;
- (void)_setVisibleHeight:(double)arg1;
- (double)_impactIntensityForVelocity:(double)arg1;
- (void)_setRefreshControlState:(long long)arg1 notify:(_Bool)arg2;
- (void)_endRefreshingAnimated:(_Bool)arg1;
- (_Bool)_canTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)_addInsets;
- (_Bool)_isApplyingInsets;
- (void)beginRefreshing;
- (void)endRefreshing;
- (double)_scrollViewHeight;

@end
