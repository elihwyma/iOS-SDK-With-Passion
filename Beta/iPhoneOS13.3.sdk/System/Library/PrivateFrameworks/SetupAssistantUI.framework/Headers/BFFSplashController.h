/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <UIKit/UIViewController.h>

@class BFFPaneHeaderView, NSMutableArray, NSString, UIColor, UIImage, UIScrollView, UIView, UIVisualEffectView;

@interface BFFSplashController : UIViewController

{
    BFFPaneHeaderView *_headerView;
    UIScrollView *_scrollView;
    NSMutableArray *_buttons;
    UIColor *_tint;
    UIView *_bleedView;
    _Bool _disableIconTint;
    _Bool _scrollingDisabled;
    _Bool _fullWidthContent;
    _Bool _usesTwoButtonLayout;
    NSString *_detailText;
    UIView *_contentView;
    long long _contentViewPosition;
    UIView *_buttonTray;
    UIColor *_bleedColor;
    UIVisualEffectView *_effectView;
    struct UIEdgeInsets _additionalInsets;
}

@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) UIImage *icon;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long contentViewPosition;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic) struct UIEdgeInsets additionalInsets;
@property (retain, nonatomic) UIColor *tint;
@property (nonatomic) _Bool disableIconTint;
@property (nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled;
@property (nonatomic) _Bool fullWidthContent;
@property (retain, nonatomic) UIColor *bleedColor;
@property (nonatomic, readonly) BFFPaneHeaderView *headerView;
@property (nonatomic) _Bool usesTwoButtonLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)setTitle:(id)arg1;
- (void)loadView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (id)contentScrollView;
- (void)_buttonPressed:(id)arg1;
- (void)_updateTrayVisibility;
- (id)_createButtonWithTitle:(id)arg1 style:(long long)arg2;
- (void)addButtonWithTitle:(id)arg1 style:(long long)arg2 action:(CDUnknownBlockType)arg3;
- (void)_updateButtonFonts;
- (void)updateBleedColor;
- (void)removeAllButtons;
- (void)setTitle:(id)arg1 forButtonAtIndex:(unsigned long long)arg2 action:(CDUnknownBlockType)arg3;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (void)setLinkText:(id)arg1 action:(CDUnknownBlockType)arg2;
- (void)setButtonsEnabled:(_Bool)arg1;
- (void)updateBleedViewLayout;

@end
