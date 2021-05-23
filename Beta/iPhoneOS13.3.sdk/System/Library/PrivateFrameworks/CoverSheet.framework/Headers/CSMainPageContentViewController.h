/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <CoverSheet/CSPageViewController.h>

#import <CoverSheet/Swift-Protocol.h>

@class CSAppearance, CSBehavior, CSCombinedListViewController, CSLayoutStrategy, CSLockScreenSettings, CSLogoutButtonViewController, CSPresentation, CSUserPictureViewController, CSUserPresenceMonitor, NSArray, NSSet, NSString, UIColor, _UILegibilitySettings;

@protocol CSCoverSheetViewControllerProtocol, CSCoverSheetViewPresenting, CSNotificationDispatcher, CSTouchEnvironmentStatusProviding, CSUserSessionControlling, CSWallpaperColorProvider, CSWallpaperViewProviding, SBFAuthenticationStatusProvider, UICoordinateSpace;

@interface CSMainPageContentViewController : CSPageViewController <Swift>

{
    CSUserPictureViewController *_userPictureViewController;
    CSCombinedListViewController *_combinedListViewController;
    CSUserPresenceMonitor *_userPresenceMontior;
    CSLogoutButtonViewController *_logoutButtonViewController;
    id <SBFAuthenticationStatusProvider> _authenticationProvider;
    CSLockScreenSettings *_testSettings;
    long long _smoothestPermittedStrategy;
    _Bool _useFakeBlur;
    CSLayoutStrategy *_layoutStrategy;
    id <CSWallpaperColorProvider> _wallpaperColorProvider;
    CSUserPresenceMonitor *_userPresenceMonitor;
    id <CSTouchEnvironmentStatusProviding> _touchEnvironmentStatusProvider;
    id <CSUserSessionControlling> _userSessionController;
    id <CSWallpaperViewProviding> _wallpaperViewProvider;
}

@property (nonatomic) _Bool useFakeBlur;
@property (nonatomic, readonly, getter=isShowingMediaControls) _Bool showingMediaControls;
@property (nonatomic, readonly) CSCombinedListViewController *combinedListViewController;
@property (retain, nonatomic) CSUserPresenceMonitor *userPresenceMonitor;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (weak, nonatomic) id <CSTouchEnvironmentStatusProviding> touchEnvironmentStatusProvider;
@property (weak, nonatomic) id <CSUserSessionControlling> userSessionController;
@property (weak, nonatomic) id <CSWallpaperColorProvider> wallpaperColorProvider;
@property (weak, nonatomic) id <CSWallpaperViewProviding> wallpaperViewProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *coverSheetIdentifier;
@property (nonatomic, readonly) long long participantState;
@property (weak, nonatomic) id <CSNotificationDispatcher> dispatcher;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;
@property (nonatomic, readonly) long long backgroundStyle;
@property (copy, nonatomic, readonly) NSSet *components;
@property (nonatomic, readonly) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) long long scrollingStrategy;
@property (nonatomic, readonly) long long notificationBehavior;
@property (nonatomic, readonly) unsigned long long restrictedCapabilities;
@property (nonatomic, readonly) long long proximityDetectionMode;
@property (weak, nonatomic, readonly) id <UICoordinateSpace> presentationCoordinateSpace;
@property (copy, nonatomic, readonly) NSArray *presentationRegions;
@property (nonatomic, readonly) long long idleTimerDuration;
@property (nonatomic, readonly) long long idleTimerMode;
@property (nonatomic, readonly) long long idleWarnMode;
@property (nonatomic, readonly) double customIdleExpirationTimeout;
@property (nonatomic, readonly) double customIdleWarningTimeout;
@property (weak, nonatomic) id <CSCoverSheetViewPresenting> presenter;
@property (nonatomic, readonly) long long presentationStyle;
@property (nonatomic, readonly) long long presentationType;
@property (nonatomic, readonly) long long presentationTransition;
@property (nonatomic, readonly) long long presentationPriority;
@property (nonatomic, readonly) long long presentationAltitude;
@property (copy, nonatomic, readonly) CSAppearance *activeAppearance;
@property (copy, nonatomic, readonly) CSBehavior *activeBehavior;
@property (copy, nonatomic, readonly) CSPresentation *externalPresentation;
@property (weak, nonatomic) id <CSCoverSheetViewControllerProtocol> coverSheetViewController;
@property (nonatomic, getter=isTransitioning) _Bool transitioning;
@property (nonatomic, readonly) _Bool authenticated;
@property (copy, nonatomic, readonly) NSString *pageRole;

+ (Class)viewClass;
+ (unsigned long long)requiredCapabilities;
+ (_Bool)isAvailableForConfiguration;
+ (double)_phoneListWidth;

- (id)init;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (_Bool)handleEvent:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_isPortrait;
- (void)updateForPresentation:(id)arg1;
- (unsigned long long)listLayout;
- (unsigned long long)listWidthStrategy;
- (double)listInsetX;
- (double)customListWidth;
- (void)aggregateAppearance:(id)arg1;
- (void)aggregateBehavior:(id)arg1;
- (void)_updateSmoothestPermittedPagingStrategy;
- (void)_addOrRemoveViewsAsAppropriate;
- (id)_mainPageView;
- (void)postNotificationRequest:(id)arg1;
- (void)updateNotificationRequest:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1;
- (void)updateNotificationSectionSettings:(id)arg1 previousSectionSettings:(id)arg2;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (_Bool)isPresentingNotificationInLongLook;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
- (void)_addOrRemoveNotificationsListIfNecessaryAnimated:(_Bool)arg1;
- (_Bool)_pagingStyleRequiresUserPresenceDetection;
- (_Bool)_listBelowDateTime;
- (void)_addOrRemoveUserPictureViewController;
- (void)_addOrRemoveLogoutButtonViewController;
- (void)combinedListViewController:(id)arg1 hasContent:(_Bool)arg2;
- (id)notificationSectionSettingsForCombinedListViewController:(id)arg1;
- (void)userPresenceDetectedSinceWakeDidChange:(id)arg1;
- (unsigned long long)dateTimeLayout;
- (double)dateTimeInsetX;
- (double)minimumDateToListSpacing;
- (id)initWithAuthenticationProvider:(id)arg1;

@end
