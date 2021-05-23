/*
 Image: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
 */

#import <UIKit/UIViewController.h>

#import <OnBoardingKit/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString, OBBuddyPaneHeaderView, OBPrivacyLinkController, UIColor, UIImage, UIScrollView, UIView, _UIBackdropView;

@interface OBSplashController : UIViewController <Swift>

{
    OBBuddyPaneHeaderView *_headerView;
    UIView *_trayBackdropContainer;
    _UIBackdropView *_lightTrayBackdrop;
    _UIBackdropView *_ultraLightTrayBackdrop;
    NSMutableArray *_buttons;
    UIColor *_tint;
    UIView *_bleedView;
    OBPrivacyLinkController *_privacyLink;
    _Bool _disableIconTint;
    _Bool _scrollingDisabled;
    _Bool _darkMode;
    _Bool _fullWidthContent;
    _Bool _displayPrivacyLinkCaptionText;
    _Bool _usesTwoButtonLayout;
    NSString *_detailText;
    UIView *_contentView;
    long long _contentViewPosition;
    UIView *_buttonTray;
    UIScrollView *_scrollView;
    NSArray *_onBoardingBundleIdentifiers;
    long long _privacyLinkPosition;
    UIColor *_bleedColor;
    struct UIEdgeInsets _additionalInsets;
}

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) struct CGSize iconSize;
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) long long contentViewPosition;
@property (nonatomic, readonly) UIView *buttonTray;
@property (nonatomic) struct UIEdgeInsets additionalInsets;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (nonatomic) _Bool disableIconTint;
@property (nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled;
@property (nonatomic, getter=isDarkMode) _Bool darkMode;
@property (nonatomic) _Bool fullWidthContent;
@property (copy, nonatomic) NSString *onBoardingBundleIdentifier;
@property (copy, nonatomic) NSArray *onBoardingBundleIdentifiers;
@property (nonatomic) _Bool displayPrivacyLinkCaptionText;
@property (nonatomic) long long privacyLinkPosition;
@property (retain, nonatomic) UIColor *bleedColor;
@property (nonatomic, readonly) OBBuddyPaneHeaderView *headerView;
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
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)contentScrollView;
- (long long)preferredUserInterfaceStyle;
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

@end
