/*
 Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

#import <SiriUI/SiriUIBaseTemplateView.h>

@class NSDictionary, NSLayoutConstraint, NSMutableDictionary, UILayoutGuide, UIStackView, UIView;

@protocol SiriUILabelStackTemplateModel, SiriUILabelStackTemplateViewDelegate;

@interface SiriUILabelStackTemplateView : SiriUIBaseTemplateView

{
    _Bool _constraintsUpdated;
    id <SiriUILabelStackTemplateViewDelegate> _delegate;
    long long _defaultTextAlignment;
    UIView *_topView;
    UIView *_bottomView;
    NSLayoutConstraint *_topViewConstraint;
    NSLayoutConstraint *_bottomViewConstraint;
    UIStackView *_trailingViews;
    UIStackView *_leadingViews;
    NSMutableDictionary *_componentsForViews;
    UILayoutGuide *_contentBoundsGuide;
    NSDictionary *_contentBoundsGuideConstraints;
    UILayoutGuide *_stackedComponentsBoundsGuide;
    NSMutableDictionary *_stackedComponentsGuideConstraints;
}

@property (retain, nonatomic) UIView *topView;
@property (retain, nonatomic) UIView *bottomView;
@property (nonatomic) _Bool constraintsUpdated;
@property (weak, nonatomic) NSLayoutConstraint *topViewConstraint;
@property (weak, nonatomic) NSLayoutConstraint *bottomViewConstraint;
@property (retain, nonatomic) UIStackView *trailingViews;
@property (retain, nonatomic) UIStackView *leadingViews;
@property (retain, nonatomic) NSMutableDictionary *componentsForViews;
@property (retain, nonatomic) UILayoutGuide *contentBoundsGuide;
@property (retain, nonatomic) NSDictionary *contentBoundsGuideConstraints;
@property (retain, nonatomic) UILayoutGuide *stackedComponentsBoundsGuide;
@property (retain, nonatomic) NSMutableDictionary *stackedComponentsGuideConstraints;
@property (weak, nonatomic) id <SiriUILabelStackTemplateViewDelegate> delegate;
@property (nonatomic) long long defaultTextAlignment;
@property (weak, nonatomic) id <SiriUILabelStackTemplateModel> dataSource;

- (id)initWithDataSource:(id)arg1;
- (void)updateConstraints;
- (void)reloadData;
- (long long)layoutStyle;
- (double)desiredHeight;
- (void)removeFromTemplatedSuperview;
- (void)setTemplatedSuperview:(id)arg1;
- (void)insertTrailingView:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (void)_createContentLayoutGuides;
- (void)_updateTopAndBottomViewConstraints;
- (void)populateStack;
- (void)insertLeadingView:(id)arg1 withMargins:(struct UIEdgeInsets)arg2;
- (void)insertTopView:(id)arg1;

@end
