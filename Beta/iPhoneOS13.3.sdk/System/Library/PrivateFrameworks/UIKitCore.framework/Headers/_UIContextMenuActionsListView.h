/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class UIFont, UIInterfaceActionGroupView, UIMenu;

@protocol _UIContextMenuActionsListViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIContextMenuActionsListView : UIView

{
    UIFont *_labelFont;
    _Bool _surfacesActionRadius;
    _Bool _showsTitle;
    _Bool _reversesActionOrder;
    id <_UIContextMenuActionsListViewDelegate> _delegate;
    UIMenu *_displayedMenu;
    UIInterfaceActionGroupView *_currentActionGroupView;
}

@property (retain, nonatomic) UIInterfaceActionGroupView *currentActionGroupView;
@property (copy, nonatomic) UIMenu *displayedMenu;
@property (weak, nonatomic) id <_UIContextMenuActionsListViewDelegate> delegate;
@property (nonatomic) _Bool surfacesActionRadius;
@property (nonatomic) _Bool showsTitle;
@property (nonatomic) _Bool reversesActionOrder;

- (void)layoutSubviews;
- (id)_labelFont;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (void)setDisplayedMenu:(id)arg1 withAnimationStyle:(unsigned long long)arg2 alongsideAnimations:(CDUnknownBlockType)arg3;
- (double)_clampedCornerRadiusForGroupView:(id)arg1;
- (id)_reversedActionGroupForActionGroup:(id)arg1;
- (id)_interfaceActionGroupForActions:(id)arg1;
- (id)_loadingInterfaceAction;
- (void)_performActionForPreviewAction:(id)arg1;
- (id)initWithMenu:(id)arg1;
- (void)kickstartActionScrubbingWithGesture:(id)arg1;
- (void)_testing_tapAnAction;

@end
