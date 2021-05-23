/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <UIKit/UIView.h>

@class CSHomeAffordanceView, NSArray, NSObject, NSString, SBUICallToActionLabel, SBUILegibilityLabel, UIButton, UILabel, _UILegibilitySettings;

@protocol OS_dispatch_source;

@interface SBDashBoardSetupView : UIView

{
    UILabel *_titleLabel;
    UILabel *_storeRestrictedLabel;
    UIView *_homeAffordanceContainer;
    CSHomeAffordanceView *_homeAffordanceView;
    UIView *_homeAffordanceCallToActionContainer;
    SBUILegibilityLabel *_homeAffordanceCallToActionLabel;
    SBUICallToActionLabel *_homeButtonCallToActionLabel;
    NSObject<OS_dispatch_source> *_homeButtonCallToActionTimer;
    NSArray *_activationInfoViewConstraints;
    UIView *_activationInfoView;
    UIView *_regulatoryInfoView;
    _UILegibilitySettings *_legibilitySettings;
    UIButton *_infoButton;
}

@property (retain, nonatomic) UIView *activationInfoView;
@property (retain, nonatomic) UIView *regulatoryInfoView;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIButton *infoButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_setupConstraints;
- (void)_updateLegibilitySettings;
- (void)_removeResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_layoutHomeAffordance;
- (void)_addTitleLabel;
- (void)setInfoButtonVisible:(_Bool)arg1 animated:(_Bool)arg2 withDelay:(double)arg3;
- (id)initWithFrame:(struct CGRect)arg1 usingHomeAffordance:(_Bool)arg2 isStoreRestricted:(_Bool)arg3;
- (void)animateComponents:(unsigned long long)arg1 toActive:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)setTitleString:(id)arg1 forLanguage:(id)arg2;
- (void)setStoreRestrictedString:(id)arg1 forLanguage:(id)arg2;
- (void)setCallToActionString:(id)arg1 forLanguage:(id)arg2;
- (void)_addInfoButton;
- (void)_addStoreRestrictedLabel;
- (void)_addHomeAffordanceCallToAction;
- (void)_addHomeAffordance;
- (void)_addHomeButtonCallToAction;
- (void)_adjustTitleVisibilityForInfoViews;
- (void)_setupActivationInfoConstraintsIfNeeded;
- (void)_animateView:(id)arg1 toActive:(_Bool)arg2 withDispatchGroup:(id)arg3;
- (void)_animateHomeButtonCallToActionToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeAffordanceCallToActionToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_animateHomeAffordanceToActive:(_Bool)arg1 withDispatchGroup:(id)arg2;
- (void)_layoutRegulatoryInfo;
- (void)_layoutActivationInfoView;
- (void)_layoutHomeButtonCallToAction;
- (void)_layoutHomeAffordanceCallToAction;
- (void)_removeNormalAnimationForKeyPath:(id)arg1 onLayer:(id)arg2;
- (void)_addResetAnimationForKeyPath:(id)arg1 onLayer:(id)arg2 dispatchGroup:(id)arg3;

@end
