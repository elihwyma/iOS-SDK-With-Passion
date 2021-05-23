/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableOrderedSet, NSString, _UIButtonBarButtonVisualProvider;

@protocol TUIAssistantButtonBarViewDelegate, _UIButtonBarAppearanceDelegate;

@interface TUIAssistantButtonBarView : UIView

{
    _Bool _constrainedHorizontally;
    NSArray *_buttonGroups;
    _UIButtonBarButtonVisualProvider *_visualProvider;
    double _minimumInterItemSpace;
    double _minimumInterGroupSpace;
    long long _buttonAlignment;
    id <TUIAssistantButtonBarViewDelegate> _delegate;
    double _horizontalMargins;
    id <_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIView *_buttonContainer;
    double _effectiveInterItemSpacing;
    NSMutableOrderedSet *_groupViews;
}

@property (weak, nonatomic) id <_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIView *buttonContainer;
@property (nonatomic) double effectiveInterItemSpacing;
@property (retain, nonatomic) NSMutableOrderedSet *groupViews;
@property (retain, nonatomic) NSArray *buttonGroups;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (nonatomic) double minimumInterItemSpace;
@property (nonatomic) double minimumInterGroupSpace;
@property (nonatomic) long long buttonAlignment;
@property (nonatomic) _Bool constrainedHorizontally;
@property (weak, nonatomic) id <TUIAssistantButtonBarViewDelegate> delegate;
@property (nonatomic) double horizontalMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)configureButtonBarItemView:(id)arg1 forItem:(id)arg2 group:(id)arg3;
- (struct CGSize)preferredSizeForButtonBarItem:(id)arg1;
- (void)preferredSizeDidChangeForButtonBarItem:(id)arg1;
- (id)_groupViewForBarButtonItemGroup:(id)arg1;
- (void)_updateBarButtonItemHiddenState;
- (struct CGSize)_totalGroupSizeThatFits:(struct CGSize)arg1;
- (double)_interItemSpacingThatFits:(struct CGSize)arg1 forGroupSize:(struct CGSize)arg2;
- (struct UIEdgeInsets)_insetsForHorizontalMargin;
- (id)_visibleGroupViews;
- (id)_visibleGroups;
- (id)_uncollapsedGroupViews;
- (id)_allVisibleBarItemViews;
- (void)_collapseGroupsIfNecessaryForWidth:(double)arg1;
- (void)_uncollapseAllGroupsForNewSizeIfNecessary:(struct CGSize)arg1;
- (_Bool)_containsFlexibleGroupViews;
- (void)validateButtonGroups;
- (struct CGSize)_preferredTitleSizeForBarButtonItem:(id)arg1;
- (id)_itemViewForSender:(id)arg1;
- (void)_didTapButtonBarButton:(id)arg1 withEvent:(id)arg2;

@end
