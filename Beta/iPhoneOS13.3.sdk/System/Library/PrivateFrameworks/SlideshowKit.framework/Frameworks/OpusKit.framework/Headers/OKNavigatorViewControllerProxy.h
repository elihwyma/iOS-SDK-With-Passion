/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIViewController.h>

#import <OpusKit/Swift-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSRecursiveLock, NSString, OFUIView, OKAudioPlaylist, OKNavigatorView, OKPageViewController, OKPresentationNavigator, OKPresentationViewController;

@interface OKNavigatorViewControllerProxy : OFUIViewController <Swift>

{
    NSString *_willAppearActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_didDisappearActionScript;
    _Bool _needsApplySettings;
    _Bool _hasSettingsApplied;
    OKPresentationNavigator *_navigator;
    unsigned long long _prepareMode;
    NSMutableDictionary *_pageViewControllers;
    OKPresentationViewController *_presentationViewController;
    OKPageViewController *_parentPageViewController;
    OKPageViewController *_currentPageViewController;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_navigationScript;
    NSMutableSet *_actionBindings;
    OKAudioPlaylist *_audioPlaylist;
    float _requiredDuckLevel;
    NSString *_playlistTrackID;
    _Bool _audioPlaylistEnabled;
    double _audioVolume;
    _Bool _audioPlaylistLoops;
    _Bool _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}

@property (nonatomic) OKPresentationViewController *presentationViewController;
@property (nonatomic) OKPageViewController *parentPageViewController;
@property (retain, nonatomic) OKPageViewController *currentPageViewController;
@property (nonatomic) _Bool audioPlaylistEnabled;
@property (retain, nonatomic) OKAudioPlaylist *audioPlaylist;
@property (retain, nonatomic) NSMutableDictionary *pageViewControllers;
@property (retain, nonatomic, readonly) OKNavigatorView *navigatorView;
@property (retain, nonatomic, readonly) OKPresentationNavigator *navigator;
@property (nonatomic, readonly) unsigned long long prepareMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) OFUIView *actionView;

+ (Class)viewClass;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)name;
- (id)valueForUndefinedKey:(id)arg1;
- (void)commonInit;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (_Bool)prepareForDisplay;
- (void)didReceiveMemoryWarning;
- (void)prepareForReload;
- (void)instantPause;
- (_Bool)canPerformAction:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (void)networkStatusDidChange:(long long)arg1;
- (void)setNeedsApplySettings;
- (void)applySettingsIfNeeded;
- (void)resolutionDidChange;
- (void)layoutDidChange;
- (void)applyLayoutSettings;
- (void)removeAllActionBindings;
- (_Bool)prepareForWarmup;
- (_Bool)prepareForUnload;
- (void)setNeedsPrepare;
- (void)prepareForMode:(unsigned long long)arg1;
- (void)prepareForRefresh;
- (void)instantResume;
- (void)updateWithMotionTiltRotationX:(double)arg1 tiltRotationY:(double)arg2 tiltRotationZ:(double)arg3;
- (struct CGSize)layoutFactor;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)allActionBindings;
- (id)dynamicsPushBehaviors;
- (struct CGRect)visiblePageRect;
- (void)applySettings;
- (void)navigatorWillAppear:(_Bool)arg1;
- (void)navigatorDidAppear:(_Bool)arg1;
- (void)_setAudioURLs:(id)arg1;
- (void)_playAudioPlaylist;
- (void)cancelCouchPotatoPlayback;
- (void)notifyWhenBecomesReady:(CDUnknownBlockType)arg1;
- (void)removeAllReadyNotifications;
- (id)displayedPageViewControllers;
- (id)deepestDisplayedPageViewController;
- (id)initWithNavigator:(id)arg1;
- (void)navigateToItemAtKeyPath:(id)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)sendAction:(id)arg1 toTarget:(id)arg2;
- (void)rewindAudioPlaylist;
- (void)navigateToPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isReady:(_Bool)arg1;
- (double)readyProgress:(_Bool)arg1;
- (void)setPlaybackAudioVolume:(double)arg1;
- (void)beginFadingWithDuration:(double)arg1;
- (double)requiredDuckLevel;
- (void)beginDuckingToLevel:(double)arg1 fadeDuration:(double)arg2;
- (void)endDucking;
- (_Bool)performActionScript:(id)arg1 withAction:(id)arg2;
- (_Bool)interactivityEnabled;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (void)removeActionBinding:(id)arg1;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (id)cachedPageViewControllers;
- (struct CGSize)parentLayoutFactor;
- (id)layoutSettingsKeys;
- (void)setSettingPrepareActionScript:(id)arg1;
- (id)pageViewControllerForPageWithName:(id)arg1 createIfNeeded:(_Bool)arg2;
- (void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forPageViewController:(id)arg4 andWidgetView:(id)arg5;
- (void)_stopAudioPlaylist;
- (void)gotoPageWithName:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)endFading;
- (_Bool)supportsReadiness;
- (void)readinessDidChange:(_Bool)arg1;
- (void)audioStartedPlayingWithAVAsset:(id)arg1;
- (void)audioFinishedPlayingWithAVAsset:(id)arg1;
- (void)becomeReady;
- (void)resignReady;
- (struct CGRect)settingFrame;
- (void)setSettingFrame:(struct CGRect)arg1;
- (void)setSettingCanPerformActionScript:(id)arg1;
- (void)setSettingWillAppearActionScript:(id)arg1;
- (void)setSettingDidAppearActionScript:(id)arg1;
- (void)setSettingWillDisappearActionScript:(id)arg1;
- (void)setSettingDidDisappearActionScript:(id)arg1;
- (void)setSettingNavigationScript:(id)arg1;
- (void)setSettingAudioPlaylist:(id)arg1;
- (float)settingAudioVolume;
- (void)setSettingAudioVolume:(float)arg1;
- (void)setSettingAudioRequiredDuckLevel:(float)arg1;
- (void)setSettingAudioPlaylistLoops:(_Bool)arg1;
- (id)settingBackgroundColor;
- (void)setSettingBackgroundColor:(id)arg1;
- (void)navigatorWillDisappear:(_Bool)arg1;
- (void)navigatorDidDisappear:(_Bool)arg1;
- (id)cachedPageViewControllerForPageWithNames:(id)arg1;
- (void)uncachePageViewControllerForPageWithNames:(id)arg1;
- (_Bool)isRootNavigator;

@end
