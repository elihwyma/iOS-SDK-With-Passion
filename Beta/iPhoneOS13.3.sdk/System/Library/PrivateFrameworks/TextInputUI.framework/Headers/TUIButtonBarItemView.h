/*
 Image: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
 */

#import <UIKitCore/UIView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, _UIButtonBarButton;

@interface TUIButtonBarItemView : UIView

{
    _Bool _collapsedItem;
    UIBarButtonItem *_associatedItem;
    UIBarButtonItemGroup *_associatedGroup;
    _UIButtonBarButton *_barButtonView;
    UIView *_customView;
}

@property (nonatomic, getter=isCollapsedItem) _Bool collapsedItem;
@property (retain, nonatomic) UIBarButtonItem *associatedItem;
@property (retain, nonatomic) UIBarButtonItemGroup *associatedGroup;
@property (nonatomic, readonly) UIView *contentView;
@property (retain, nonatomic) _UIButtonBarButton *barButtonView;
@property (retain, nonatomic) UIView *customView;

- (void)layoutSubviews;

@end
