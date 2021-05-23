/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class NSArray, NSString, SBStarkBannerItem, SBUIBannerContext, SBUIStarkBannerViewButton, UILabel;

@protocol BSUIDateLabel, SBStarkNotificationsConfiguring;

@interface SBStarkBannerView : UIView

{
    id <SBStarkNotificationsConfiguring> _configuration;
    SBUIBannerContext *_context;
    SBStarkBannerItem *_bannerItem;
    NSArray *_iconImageViews;
    UILabel *_titleLabel;
    double _titleAscender;
    UILabel *_subTitleLabel;
    double _subTitleAscender;
    SBUIStarkBannerViewButton *_okButton;
    SBUIStarkBannerViewButton *_actionButton;
    UILabel<BSUIDateLabel> *_relevanceDateLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)_titleFont;
- (_Bool)canBecomeFirstResponder;
- (id)_subtitleFont;
- (void)dateLabelDidChange:(id)arg1;
- (_Bool)_hasSubtitle;
- (_Bool)shouldBorrowScreen;
- (id)bannerContext;
- (void)starkBannerItemDidReloadDisplayProperties:(id)arg1;
- (void)_updateButtonStates;
- (void)_setRelevanceDate:(id)arg1 allDay:(_Bool)arg2 timeZone:(id)arg3;
- (id)initWithConfiguration:(id)arg1 context:(id)arg2;
- (id)_boundedTraitCollectionForLabelFont;
- (id)_defaultRelevanceDateFont;
- (_Bool)_shouldShowOKButton;
- (void)_layoutForButton:(id)arg1 contentFrame:(struct CGRect)arg2;
- (struct UIEdgeInsets)_iconImageInsets;

@end
