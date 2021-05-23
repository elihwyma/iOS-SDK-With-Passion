/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIRefreshControlContentView.h>

@class UILabel, UIView, _UIRefreshControlModernReplicatorView;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView

{
    _Bool _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    _Bool _hasFinishedRevealing;
    UILabel *_textLabel;
    _Bool _scrollViewVerticalFeedbackGeneratorEnabled;
    _Bool _areAnimationsValid;
    double _currentPopStiffness;
    double _impactIntensity;
}

@property (nonatomic) _Bool areAnimationsValid;
@property (nonatomic, readonly) UILabel *textLabel;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;

- (void)setAttributedTitle:(id)arg1;
- (id)attributedTitle;
- (long long)style;
- (void)_tick;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTintColor:(id)arg1;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)maximumSnappingHeight;
- (void)willTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (void)didTransitionFromState:(long long)arg1 toState:(long long)arg2;
- (id)_effectiveTintColor;
- (void)_removeAllAnimations;
- (void)_resetToRevealingState;
- (void)_updateTimeOffsetOfRelevantLayers;
- (void)_spin;
- (void)_snappingMagic;
- (void)_tickDueToProgrammaticRefresh;
- (void)_goAway;
- (void)_cleanUpAfterRevealing;
- (void)_setSpunAppearance;
- (id)_effectiveTintColorWithAlpha:(double)arg1;
- (struct CGAffineTransform)_bloomedSeedTransform;
- (struct CGAffineTransform)_unbloomedSeedTransform;
- (void)_setUnbloomedAppearance;
- (void)_reveal;
- (void)_setBloomedAppearance;
- (void)_unbloom;
- (void)_bloom;
- (double)_currentTimeOffset;
- (double)_percentageShowing;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;

@end
