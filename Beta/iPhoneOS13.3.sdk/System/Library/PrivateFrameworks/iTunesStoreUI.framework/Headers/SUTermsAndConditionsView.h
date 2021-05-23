/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <UIKit/UIView.h>

@class SUClientInterface, SULinkControl, SUSubtitledButton;

@protocol SUTermsAndConditionsViewDelegate;

@interface SUTermsAndConditionsView : UIView

{
    SUSubtitledButton *_button;
    SUClientInterface *_clientInterface;
    id <SUTermsAndConditionsViewDelegate> _delegate;
    _Bool _hideAccountButton;
    double _rightMargin;
    long long _style;
    SULinkControl *_termsAndConditionsControl;
}

@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (weak, nonatomic) id <SUTermsAndConditionsViewDelegate> delegate;
@property (nonatomic) _Bool hideAccountButton;
@property (nonatomic) double rightMargin;
@property (nonatomic) long long style;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)sizeToFit;
- (id)_button;
- (void)_updateButton;
- (void)_buttonAction:(id)arg1;
- (void)_accountsChangedNotification:(id)arg1;
- (void)_destroyButton;
- (long long)_linkStyleForStyle:(long long)arg1;
- (double)_buttonHeightForStyle:(long long)arg1;
- (id)_termsAndConditionsControl;
- (void)_clearButtonSelection:(id)arg1;
- (void)_termsAndConditionsAction:(id)arg1;

@end
