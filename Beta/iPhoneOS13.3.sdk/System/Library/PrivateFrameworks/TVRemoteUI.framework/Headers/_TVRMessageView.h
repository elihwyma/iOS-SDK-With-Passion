/*
 Image: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
 */

#import <UIKit/UIView.h>

@class UIButton;

@protocol TVRUIStyleProvider;

@interface _TVRMessageView : UIView

{
    _Bool _wifiConnectInProgress;
    unsigned long long _messageType;
    id <TVRUIStyleProvider> _styleProvider;
    UIView *_currentView;
    UIButton *_turnOnWiFiButton;
}

@property (retain, nonatomic) UIView *currentView;
@property (nonatomic) unsigned long long messageType;
@property (retain, nonatomic) UIButton *turnOnWiFiButton;
@property (nonatomic, getter=isWifiConnectInProgress) _Bool wifiConnectInProgress;
@property (retain, nonatomic) id <TVRUIStyleProvider> styleProvider;

- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)clearContent;
- (void)showNoWIFIConnectionMessage;
- (void)showMessageWithTitle:(id)arg1 message:(id)arg2;
- (void)showMessageWithError:(id)arg1 andDevice:(id)arg2;
- (void)showMessageWithError:(id)arg1 device:(id)arg2;
- (void)showNoAssociatedNetworkMessage;
- (void)showLoadingSpinner;
- (void)showSearchingSpinner;
- (id)_deviceTypeString;
- (_Bool)_largeAccessibilityFontSizesEnabled;
- (void)_turnOnWireless:(id)arg1;
- (id)_loadingViewWithTitle:(id)arg1 forSize:(struct CGSize)arg2;

@end
