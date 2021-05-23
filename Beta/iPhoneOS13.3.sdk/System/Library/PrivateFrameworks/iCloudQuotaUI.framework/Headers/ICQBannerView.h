/*
 Image: /System/Library/PrivateFrameworks/iCloudQuotaUI.framework/iCloudQuotaUI
 */

#import <UIKit/UIView.h>

@class ICQOffer, ICQUpgradeFlowManager, ICQUpgradeFlowOptions, NSArray, NSString, UIColor, UIFont, _ICQTextView;

@protocol ICQBannerViewDelegate;

@interface ICQBannerView : UIView

{
    ICQOffer *_offer;
    id <ICQBannerViewDelegate> _delegate;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _textLineSpacing;
    UIFont *_linkTextFont;
    UIColor *_linkTextColor;
    ICQUpgradeFlowOptions *_flowOptions;
    _ICQTextView *_textView;
    NSArray *_activeConstraints;
    ICQUpgradeFlowManager *_upgradeFlowManager;
    struct NSDirectionalEdgeInsets _textMargins;
}

@property (nonatomic, readonly) _ICQTextView *textView;
@property (retain, nonatomic) NSArray *activeConstraints;
@property (retain, nonatomic) ICQUpgradeFlowManager *upgradeFlowManager;
@property (retain, nonatomic) ICQOffer *offer;
@property (weak, nonatomic) id <ICQBannerViewDelegate> delegate;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct NSDirectionalEdgeInsets textMargins;
@property (nonatomic) long long textAlignment;
@property (nonatomic) double textLineSpacing;
@property (copy, nonatomic) UIFont *linkTextFont;
@property (copy, nonatomic) UIColor *linkTextColor;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldShowForOffer:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;
- (long long)userInterfaceLayoutDirection;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)attributedText;
- (long long)semanticContentAttribute;
- (void)textViewDidChangeSelection:(id)arg1;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (id)initWithOffer:(id)arg1;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (id)messageAttributes;
- (id)_initWithFrame:(struct CGRect)arg1;
- (id)textParagraphStyle;
- (id)textParagraphStyleAttributes;
- (void)_applyTextStorageAttributes;
- (void)_applyTextParagraphAttributes;
- (long long)_delegateActionForAction:(long long)arg1;
- (_Bool)_legacyDelegateMethodHandlesAction:(long long)arg1;
- (_Bool)_performLink:(id)arg1;

@end
