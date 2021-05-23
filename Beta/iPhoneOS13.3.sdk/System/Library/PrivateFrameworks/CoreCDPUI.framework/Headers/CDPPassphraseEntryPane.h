/*
 Image: /System/Library/PrivateFrameworks/CoreCDPUI.framework/CoreCDPUI
 */

#import <Preferences/DevicePINPane.h>

@class CDPPaneHeaderView, UIScrollView;

@interface CDPPassphraseEntryPane : DevicePINPane

{
    UIScrollView *_containerView;
    CDPPaneHeaderView *_headerView;
    double _keyboardOffset;
}

@property (nonatomic, readonly) struct CGRect availableHeaderRect;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)headerView;
- (void)_layoutContainerView;
- (void)_layoutSubviews;
- (_Bool)isSmallScreen;
- (double)desiredMinPinHeight;
- (void)startListeningForKeyboardEvents;
- (void)_keyboardLayoutChanged;
- (double)keyboardHeightOffset;
- (void)_layoutHeaderRect;
- (void)_layoutPinView;
- (void)didFinishResizingHeaderView;
- (_Bool)isVerySmallScreen;
- (void)didFinishResizingPinView;

@end
