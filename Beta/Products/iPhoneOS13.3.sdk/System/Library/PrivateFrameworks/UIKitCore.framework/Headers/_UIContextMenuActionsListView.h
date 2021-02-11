/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIContextMenuActionsListView : UIView {
    UIInterfaceActionGroupView * _currentActionGroupView;
    <_UIContextMenuActionsListViewDelegate> * _delegate;
    UIMenu * _displayedMenu;
    UIFont * _labelFont;
    bool  _reversesActionOrder;
    bool  _showsTitle;
    bool  _surfacesActionRadius;
}

@property (nonatomic, retain) UIInterfaceActionGroupView *currentActionGroupView;
@property (nonatomic) <_UIContextMenuActionsListViewDelegate> *delegate;
@property (nonatomic, copy) UIMenu *displayedMenu;
@property (nonatomic) bool reversesActionOrder;
@property (nonatomic) bool showsTitle;
@property (nonatomic) bool surfacesActionRadius;

- (void).cxx_destruct;
- (double)_clampedCornerRadiusForGroupView:(id)arg1;
- (id)_interfaceActionGroupForActions:(id)arg1;
- (id)_labelFont;
- (id)_loadingInterfaceAction;
- (void)_performActionForPreviewAction:(id)arg1;
- (id)_reversedActionGroupForActionGroup:(id)arg1;
- (void)_testing_tapAnAction;
- (id)currentActionGroupView;
- (id)delegate;
- (id)displayedMenu;
- (id)initWithMenu:(id)arg1;
- (void)kickstartActionScrubbingWithGesture:(id)arg1;
- (void)layoutSubviews;
- (bool)reversesActionOrder;
- (void)setCurrentActionGroupView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayedMenu:(id)arg1;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 alongsideAnimations:(id /* block */)arg3;
- (void)setReversesActionOrder:(bool)arg1;
- (void)setShowsTitle:(bool)arg1;
- (void)setSurfacesActionRadius:(bool)arg1;
- (bool)showsTitle;
- (bool)surfacesActionRadius;
- (struct CGSize { double x1; double x2; })systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

@end