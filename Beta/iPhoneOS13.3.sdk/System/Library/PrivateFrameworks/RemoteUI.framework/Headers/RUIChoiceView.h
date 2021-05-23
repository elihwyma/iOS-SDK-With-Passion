/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <UIKit/UIView.h>

@class BFFPaneHeaderView_RemoteUI, RUIChoiceViewElement, RUIElement, RUISubHeaderElement, UIButton, UIScrollView, _UIBackdropView;

@protocol RUIHeader;

@interface RUIChoiceView : UIView

{
    BFFPaneHeaderView_RemoteUI *_headerView;
    UIButton *_bigChoice;
    UIButton *_smallChoice;
    _UIBackdropView *_trayBackdrop;
    UIView *_buttonTray;
    UIScrollView *_scrollView;
    long long _currentStyle;
    _Bool _usesTwoButtonLayout;
    RUIChoiceViewElement *_target;
    RUIElement *_header;
    RUISubHeaderElement *_subHeader;
    struct UIEdgeInsets _customSafeAreaInsets;
}

@property (nonatomic, readonly) UIButton *bigChoice;
@property (nonatomic, readonly) UIButton *smallChoice;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic) struct UIEdgeInsets customSafeAreaInsets;
@property (weak, nonatomic) RUIChoiceViewElement *target;
@property (retain, nonatomic) RUIElement *header;
@property (retain, nonatomic) RUISubHeaderElement *subHeader;
@property (nonatomic, readonly) UIView<RUIHeader> *headerView;
@property (nonatomic) _Bool usesTwoButtonLayout;

- (id)init;
- (void)setImage:(id)arg1;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setHeaderTitle:(id)arg1;
- (void)choiceTapped:(id)arg1;
- (void)_updateTrayBackdrop;
- (void)setFirstChoiceTitle:(id)arg1 withColor:(id)arg2;
- (void)setSecondChoiceTitle:(id)arg1 withColor:(id)arg2;
- (void)setHelpLinkTitle:(id)arg1;

@end
