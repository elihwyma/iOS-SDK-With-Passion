/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIBlurEffect, UIVisualEffectView, _UIButtonBar, _UIButtonBarButtonVisualProvider;

@interface _UIGroupedBar : UIView

{
    _UIButtonBar *_leftBar;
    _UIButtonBar *_centerBar;
    _UIButtonBar *_rightBar;
    UIVisualEffectView *_backgroundView;
    NSLayoutConstraint *_centeringConstraint;
    NSLayoutConstraint *_leadingLimitConstraint;
    NSLayoutConstraint *_trailingLimitConstraint;
    _Bool _independentGroupSizes;
    double _margin;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    double _leadingBarSizeLimit;
    double _trailingBarSizeLimit;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    UIBlurEffect *_backgroundEffect;
}

@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (copy, nonatomic) NSArray *centerBarButtonGroups;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;
@property (nonatomic) _Bool independentGroupSizes;
@property (nonatomic) double margin;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic) double minimumInterGroupSpace;
@property (nonatomic) double leadingBarSizeLimit;
@property (nonatomic) double trailingBarSizeLimit;
@property (copy, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutMarginsDidChange;
- (void)didMoveToSuperview;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)_debug;
- (void)buttonBarWillUpdateLayout:(id)arg1;
- (void)_updateBarMargins;
- (void)_updateVisualProvider;
- (void)validateAllItems;
- (void)_setButtonAlpha:(double)arg1;

@end
