/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIView.h>

@class NSArray, NSMutableArray, UIBarButtonItemGroup, _UIButtonBarButtonVisualProvider;

@protocol TUIButtonBarViewProvider;

@interface TUIAssistantButtonBarGroupView : UIView

{
    NSMutableArray *_visibleButtons;
    _Bool _collapsed;
    UIBarButtonItemGroup *_barButtonItemGroup;
    double _itemSpacing;
    id <TUIButtonBarViewProvider> _buttonProvider;
    _UIButtonBarButtonVisualProvider *_visualProvider;
}

@property (weak, nonatomic) id <TUIButtonBarViewProvider> buttonProvider;
@property (retain, nonatomic) _UIButtonBarButtonVisualProvider *visualProvider;
@property (retain, nonatomic) UIBarButtonItemGroup *barButtonItemGroup;
@property (nonatomic, getter=isCollapsed) _Bool collapsed;
@property (nonatomic, readonly) NSArray *visibleButtons;
@property (nonatomic) double itemSpacing;
@property (nonatomic, readonly) _Bool containsFlexibleItems;

- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_itemCustomViewDidChange:(id)arg1 fromView:(id)arg2;
- (void)_itemStandardViewNeedsUpdate:(id)arg1;
- (void)_itemDidChangeWidth:(id)arg1;
- (void)_itemDidChangeSelectionState:(id)arg1;
- (void)_itemDidChangeHiddenState:(id)arg1;
- (void)_itemDidChangeEnabledState:(id)arg1;
- (id)_visibleItems;
- (id)initWithBarButtonItemGroup:(id)arg1 visualProvider:(id)arg2 buttonProvider:(id)arg3;
- (_Bool)_canBeCollapsed;
- (id)_visibleItemsAllowingCollapse:(_Bool)arg1;
- (struct CGSize)_preferredSizeForItems:(id)arg1 fittingWidth:(double)arg2;
- (void)_ensureVisibleButtonsForVisibleItems;
- (id)_buttonBarItemViewForBarButtonItem:(id)arg1;

@end
