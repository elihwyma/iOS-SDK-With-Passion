/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSBannerView.h>

@class CPSAbridgableLabel, SBUIStarkBannerViewButton, UIImageView;

@interface CPSGuidanceBannerView : CPSBannerView

{
    SBUIStarkBannerViewButton *_actionButton;
    UIImageView *_applicationIconImageView;
    UIImageView *_guidanceImageView;
    CPSAbridgableLabel *_guidanceTextLabel;
    CPSAbridgableLabel *_guidanceDetailTextLabel;
    long long _currentInterfaceStyle;
}

@property (retain, nonatomic) SBUIStarkBannerViewButton *actionButton;
@property (retain, nonatomic) UIImageView *applicationIconImageView;
@property (retain, nonatomic) UIImageView *guidanceImageView;
@property (retain, nonatomic) CPSAbridgableLabel *guidanceTextLabel;
@property (retain, nonatomic) CPSAbridgableLabel *guidanceDetailTextLabel;
@property (nonatomic) long long currentInterfaceStyle;

- (id)initWithContext:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_setGuidanceImageViewForImageSet:(id)arg1;
- (void)updateBannerWithBannerItem:(id)arg1;

@end
