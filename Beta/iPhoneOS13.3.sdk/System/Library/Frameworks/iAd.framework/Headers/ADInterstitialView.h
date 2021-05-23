/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <UIView.h>

@class ADDimmerView, ADInterstitialAd, ADPrivacyMarker, NSString;

@interface ADInterstitialView : UIView

{
    ADInterstitialAd *_interstitialAd;
    ADPrivacyMarker *_privacyMarker;
    ADDimmerView *_dimmerView;
    struct CGRect _dismissButtonRect;
}

@property (weak, nonatomic) ADInterstitialAd *interstitialAd;
@property (retain, nonatomic) ADPrivacyMarker *privacyMarker;
@property (retain, nonatomic) ADDimmerView *dimmerView;
@property (nonatomic) struct CGRect dismissButtonRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)requiresConstraintBasedLayout;

- (void)dealloc;
- (void)setBounds:(struct CGRect)arg1;
- (void)setTransform:(struct CGAffineTransform)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)removeFromSuperview;
- (struct CGSize)intrinsicContentSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)dimmerView:(id)arg1 didReceiveTouchUpAtPoint:(struct CGPoint)arg2;
- (_Bool)enableDimmerView:(id)arg1;
- (id)initForInterstitialAd:(id)arg1;
- (void)enablePrivacyButton;
- (void)disableDimmerView;
- (void)positionAdPrivacyMark;
- (void)_privacyButtonWasTapped;

@end
