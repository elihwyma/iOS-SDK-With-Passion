/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusFoundation/OFUIViewController.h>

#import <OpusKit/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OFUIView, OKNavigatorViewController, OKPresentationPage, OKPresentationViewController;

@interface OKPageViewController : OFUIViewController <Swift>

{
    _Bool _motionEnabled;
    double _perspective;
    _Bool _motionTiltXEnabled;
    _Bool _motionTiltYEnabled;
    _Bool _motionTiltZEnabled;
    struct CGSize _motionXMinMax;
    struct CGSize _motionYMinMax;
    struct CGSize _motionZMinMax;
    double _lastMotionRotationX;
    double _lastMotionRotationY;
    double _lastMotionRotationZ;
    _Bool _needsApplySettings;
    _Bool _hasSettingsApplied;
    unsigned long long _prepareMode;
    _Bool _prepareWidgetsManually;
    OKPresentationPage *_page;
    NSArray *_layoutSteps;
    OKNavigatorViewController *_subNavigatorViewController;
    OKPresentationViewController *_presentationViewController;
    OKNavigatorViewController *_navigatorViewController;
    NSArray *_musicURLs;
    NSString *_prepareActionScript;
    NSString *_canPerformActionScript;
    NSString *_willAppearActionScript;
    NSString *_appearingActionScript;
    NSString *_didAppearActionScript;
    NSString *_willDisappearActionScript;
    NSString *_disappearingActionScript;
    NSString *_didDisappearActionScript;
    NSString *_layoutChangedActionScript;
    NSMutableDictionary *_actionBindings;
    struct UIEdgeInsets _eventsInset;
    _Bool _isReady;
    NSMutableArray *_readyNotificationBlocks;
    NSRecursiveLock *_readyRecursiveLock;
}

@property (nonatomic) OKPresentationViewController *presentationViewController;
@property (nonatomic) OKNavigatorViewController *navigatorViewController;
@property (retain, nonatomic) OKNavigatorViewController *subNavigatorViewController;
@property (nonatomic) _Bool prepareWidgetsManually;
@property (nonatomic) _Bool hasSettingsApplied;
@property (nonatomic) _Bool needsApplySettings;
@property (retain, nonatomic) NSArray *layoutSteps;
@property (retain, nonatomic, readonly) NSArray *musicURLs;
@property (retain, nonatomic, readonly) OKPresentationPage *page;
@property (nonatomic, readonly) unsigned long long prepareMode;
@property (nonatomic, readonly) _Bool motionEnabled;
@property (nonatomic, readonly) struct UIEdgeInsets eventsInset;
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
- (_Bool)prepareForDisplay;
- (id)initWithPage:(id)arg1;
- (id)pageView;
- (void)prepareForReload;
- (void)pageDidDisappear:(_Bool)arg1;
- (void)instantPause;
- (_Bool)canPerformAction:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (void)setUserSettingObject:(id)arg1 forKey:(id)arg2;
- (id)visibleWidgets;
- (void)evaluateScript:(id)arg1 withInfoDictionary:(id)arg2 andCompletionBlock:(CDUnknownBlockType)arg3 forWidgetView:(id)arg4;
- (void)networkStatusDidChange:(long long)arg1;
- (void)setNeedsApplySettings;
- (void)applySettingsIfNeeded;
- (void)resolutionDidChange;
- (void)layoutDidChange;
- (void)applyLayoutSettings;
- (void)removeAllActionBindings;
- (id)mediaURLs;
- (void)updateMotion;
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
- (_Bool)hasWidgetFocused;
- (void)applySettings;
- (void)prepareWidgetsInRect:(struct CGRect)arg1;
- (void)prepareAllWidgets;
- (void)updateLayoutSteps;
- (id)currentRemoteWidgets;
- (void)cancelCouchPotatoPlayback;
- (void)notifyWhenBecomesReady:(CDUnknownBlockType)arg1;
- (void)removeAllReadyNotifications;
- (id)displayedPageViewControllers;
- (id)deepestDisplayedPageViewController;
- (_Bool)sendAction:(id)arg1 toTarget:(id)arg2;
- (_Bool)isReady:(_Bool)arg1;
- (double)readyProgress:(_Bool)arg1;
- (_Bool)performActionScript:(id)arg1 withAction:(id)arg2;
- (_Bool)interactivityEnabled;
- (void)addActionBinding:(id)arg1 scope:(unsigned long long)arg2;
- (void)removeActionBinding:(id)arg1;
- (id)actionBindingForAction:(id)arg1 isTouchCountAgnostic:(_Bool)arg2;
- (struct CGSize)parentLayoutFactor;
- (id)layoutSettingsKeys;
- (void)setSettingPrepareActionScript:(id)arg1;
- (void)pageWillAppear:(_Bool)arg1;
- (void)pageDidAppear:(_Bool)arg1;
- (void)pageWillDisappear:(_Bool)arg1;
- (_Bool)supportsReadiness;
- (void)readinessDidChange:(_Bool)arg1;
- (void)becomeReady;
- (void)resignReady;
- (void)setSettingCanPerformActionScript:(id)arg1;
- (void)setSettingWillAppearActionScript:(id)arg1;
- (void)setSettingDidAppearActionScript:(id)arg1;
- (void)setSettingWillDisappearActionScript:(id)arg1;
- (void)setSettingDidDisappearActionScript:(id)arg1;
- (id)actionBindings;
- (void)setSettingActionBindings:(id)arg1;
- (void)setSettingPerspective:(double)arg1;
- (void)setSettingMotionEnabled:(_Bool)arg1;
- (void)setSettingMotionTiltXEnabled:(_Bool)arg1;
- (void)setSettingMotionTiltYEnabled:(_Bool)arg1;
- (void)setSettingMotionTiltZEnabled:(_Bool)arg1;
- (void)setSettingMotionXMinMax:(struct CGSize)arg1;
- (void)setSettingMotionYMinMax:(struct CGSize)arg1;
- (void)setSettingMotionZMinMax:(struct CGSize)arg1;
- (void)setSettingMusic:(id)arg1;
- (void)setSettingAppearingActionScript:(id)arg1;
- (void)setSettingDisappearingActionScript:(id)arg1;
- (void)setSettingLayoutChangedActionScript:(id)arg1;
- (void)setSettingLayoutSteps:(id)arg1;
- (struct UIEdgeInsets)settingEventsInset;
- (void)setSettingEventsInset:(struct UIEdgeInsets)arg1;
- (void)pageAppearingWithProgress:(float)arg1 animated:(_Bool)arg2;
- (void)pageDisappearingWithProgress:(float)arg1 animated:(_Bool)arg2;

@end
