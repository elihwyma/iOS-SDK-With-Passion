/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSArray, NSString, NSURL, NUAdBannerView, SVKeyValueObserver, SXVideoAdStateManager;

@protocol NUAdContextProvider, NUAdProvider, NUVideoAdEventTracker, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding, SVVideoMetadata, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;

@interface NUVideoAdProvider : NSObject <Swift>

{
    _Bool _appeared;
    NSString *_identifier;
    NSArray *_contextProviders;
    id <NUAdContextProvider> _contextProviderForVideoBefore;
    id <NUAdContextProvider> _contextProviderForVideoAfter;
    NUAdBannerView *_bannerView;
    unsigned long long _skipThreshold;
    NSURL *_URL;
    SVKeyValueObserver *_playbackStartedObserver;
    id <NUVideoAdEventTracker> _eventTracker;
    id <SVVideoMetadata> _metadata;
    SXVideoAdStateManager *_stateManager;
    id <NUAdProvider> _adProvider;
    id <SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
    id <NUVideoPlaybackCounter> _playbackCounter;
    id <SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property (copy, nonatomic) NSArray *contextProviders;
@property (retain, nonatomic) id <NUAdContextProvider> contextProviderForVideoBefore;
@property (retain, nonatomic) id <NUAdContextProvider> contextProviderForVideoAfter;
@property (retain, nonatomic) NUAdBannerView *bannerView;
@property (nonatomic) unsigned long long skipThreshold;
@property (copy, nonatomic) NSURL *URL;
@property (retain, nonatomic) SVKeyValueObserver *playbackStartedObserver;
@property (retain, nonatomic) id <NUVideoAdEventTracker> eventTracker;
@property (retain, nonatomic) id <SVVideoMetadata> metadata;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (nonatomic, readonly) id <NUAdProvider> adProvider;
@property (weak, nonatomic, readonly) id <SVVisibilityMonitoring> videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;
@property (nonatomic, readonly) id <NUVideoPlaybackCounter> playbackCounter;
@property (nonatomic, readonly) id <SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;
@property (nonatomic) _Bool appeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned long long videoType;
@property (nonatomic, readonly) _Bool allowsCallToActionBar;
@property (nonatomic, readonly) double threshold;
@property (nonatomic, readonly) _Bool hasAction;

- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didAppear;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)didDisappear;
- (void)playbackFailedWithError:(id)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)tappedAdvance;
- (void)presentPrivacyStatement;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (void)tappedToToggleControls;
- (void)playbackInitiated;
- (void)skipped;
- (void)presentAction;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)initWithContextProviders:(id)arg1 adProvider:(id)arg2 contextProviderForVideoBefore:(id)arg3 contextProviderForVideoAfter:(id)arg4 eventTracker:(id)arg5 videoPlayerVisibilityMonitor:(id)arg6 analyticsEventInfoFactory:(id)arg7 playbackCounter:(id)arg8 modalPresentationViewControllerProvider:(id)arg9;
- (id)metadataForCurrentState;

@end
