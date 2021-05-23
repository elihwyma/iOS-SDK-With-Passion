/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSLayoutConstraint, NSMutableArray, NSString, SVAdPrivacyButton, SVLearnMoreButton, SVVideoAdSkipButton;

@protocol SVCustomControlsViewProviding, SVVideoAdActionAvailabilityObserver, SVVideoAdActionAvailabilityObserverFactory, SVVideoLoadingStateObserverFactory, SVVideoLoadingStateObserving, SVVideoSkipLockObserverFactory, SVVideoSkipLockObserving, SVVideoViewControllerSizeObserving;

@interface SVVideoAdButtonManager : NSObject

{
    _Bool _transportControlsHidden;
    id <SVCustomControlsViewProviding> _customControlsViewProvider;
    id <SVVideoLoadingStateObserverFactory> _loadingStateObserverFactory;
    id <SVVideoLoadingStateObserving> _loadingStateObserver;
    id <SVVideoAdActionAvailabilityObserverFactory> _adActionAvailabilityObserverFactory;
    id <SVVideoAdActionAvailabilityObserver> _adActionAvailabilityObserver;
    id <SVVideoSkipLockObserverFactory> _skipLockObserverFactory;
    id <SVVideoSkipLockObserving> _skipLockObserver;
    SVAdPrivacyButton *_privacyButton;
    SVLearnMoreButton *_learnMoreButton;
    SVVideoAdSkipButton *_skipButton;
    long long _constraintsMode;
    NSLayoutConstraint *_learnMorePrimaryTopConstraint;
    NSLayoutConstraint *_learnMorePrimaryLeadingConstraint;
    NSLayoutConstraint *_learnMoreSecondaryTopConstraint;
    NSLayoutConstraint *_learnMoreSecondaryLeadingConstraint;
    NSLayoutConstraint *_privacyAboveTransportControlsConstraint;
    NSLayoutConstraint *_privacyAboveAccessoryBarConstraint;
    NSMutableArray *_alwaysActiveConstraints;
    id <SVVideoViewControllerSizeObserving> _sizeObserver;
}

@property (nonatomic, readonly) id <SVCustomControlsViewProviding> customControlsViewProvider;
@property (nonatomic, getter=areTransportControlsHidden) _Bool transportControlsHidden;
@property (nonatomic, readonly) id <SVVideoLoadingStateObserverFactory> loadingStateObserverFactory;
@property (retain, nonatomic) id <SVVideoLoadingStateObserving> loadingStateObserver;
@property (nonatomic, readonly) id <SVVideoAdActionAvailabilityObserverFactory> adActionAvailabilityObserverFactory;
@property (retain, nonatomic) id <SVVideoAdActionAvailabilityObserver> adActionAvailabilityObserver;
@property (nonatomic, readonly) id <SVVideoSkipLockObserverFactory> skipLockObserverFactory;
@property (retain, nonatomic) id <SVVideoSkipLockObserving> skipLockObserver;
@property (nonatomic, readonly) SVAdPrivacyButton *privacyButton;
@property (nonatomic, readonly) SVLearnMoreButton *learnMoreButton;
@property (nonatomic, readonly) SVVideoAdSkipButton *skipButton;
@property (nonatomic) long long constraintsMode;
@property (retain, nonatomic) NSLayoutConstraint *learnMorePrimaryTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *learnMorePrimaryLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *learnMoreSecondaryTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *learnMoreSecondaryLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyAboveTransportControlsConstraint;
@property (retain, nonatomic) NSLayoutConstraint *privacyAboveAccessoryBarConstraint;
@property (retain, nonatomic) NSMutableArray *alwaysActiveConstraints;
@property (nonatomic, readonly) id <SVVideoViewControllerSizeObserving> sizeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool hideable;

- (_Bool)isVisible;
- (void)contentSizeCategoryDidChange;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithCustomControlsViewProvider:(id)arg1 loadingStateObserverFactory:(id)arg2 adActionAvailabilityObserverFactory:(id)arg3 skipLockObserverFactory:(id)arg4 adPrivacyButton:(id)arg5 learnMoreButton:(id)arg6 skipButton:(id)arg7 sizeObserver:(id)arg8;
- (void)hide:(_Bool)arg1 withAnimationCoordinator:(id)arg2;
- (void)addButtonsToCustomControlsView:(id)arg1 withAdActionAvailable:(_Bool)arg2;
- (void)installConstraintsForButtonsInControlsView:(id)arg1 withLayoutGuides:(id)arg2;
- (void)updateConstraints:(id)arg1;
- (void)videoPlayerSizeDidChange;
- (struct CGSize)accessoryBarSize;
- (_Bool)isAccessoryBarAboveControlsView:(id)arg1;
- (void)activateConstraintsMode:(long long)arg1;
- (double)verticalOffsetForFloatAboveAccessoryBar;
- (void)embedButtonsInViewControllerWithAdActionAvailable:(_Bool)arg1;
- (void)removeButtonsFromViewController;
- (void)removeObservers;
- (void)setupObserversForVideo:(id)arg1;
- (_Bool)supportsAutoAppearance;

@end
