/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SVTimeline, SXPrerollAdResponse, SXVideoAdStateManager;

@protocol SVVideoMetadata, SVVisibilityMonitoring, SXAnalyticsReporting, SXVASTAnalyticsEventInfoFactory, SXVideoAdProviderDataSource, SXVideoAdViewControllerProviding;

@interface SXVideoAdProvider : NSObject

{
    id <SXVideoAdProviderDataSource> _dataSource;
    id <SXAnalyticsReporting> _analyticsReporter;
    SXPrerollAdResponse *_response;
    id <SVVideoMetadata> _metadata;
    SVTimeline *_timeline;
    id <SXVideoAdViewControllerProviding> _fullscreenViewControllerProvider;
    SXVideoAdStateManager *_stateManager;
    id <SVVisibilityMonitoring> _videoVisibilityMonitor;
    id <SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
}

@property (retain, nonatomic) SXPrerollAdResponse *response;
@property (weak, nonatomic) id <SVVideoMetadata> metadata;
@property (nonatomic, readonly) SVTimeline *timeline;
@property (nonatomic, readonly) id <SXVideoAdViewControllerProviding> fullscreenViewControllerProvider;
@property (nonatomic, readonly) SXVideoAdStateManager *stateManager;
@property (nonatomic, readonly) id <SVVisibilityMonitoring> videoVisibilityMonitor;
@property (nonatomic, readonly) id <SVVisibilityMonitoring> videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;
@property (weak, nonatomic) id <SXVideoAdProviderDataSource> dataSource;
@property (retain, nonatomic) id <SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) _Bool hasAction;

- (double)threshold;
- (CDUnknownBlockType)loadWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)arg1;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)arg1;
- (void)muteStateChanged:(_Bool)arg1;
- (void)presentPrivacyStatement;
- (void)tappedToToggleControls;
- (void)skipped;
- (void)presentAction;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)playbackInitiatedWithButtonTapped:(_Bool)arg1;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;
- (id)initWithViewControllerProvider:(id)arg1 analyticsEventInfoFactory:(id)arg2 videoPlayerVisibilityMonitor:(id)arg3 videoVisibilityMonitor:(id)arg4;
- (void)configureTimelineForImpressionReporting;
- (void)reportEngagementEventWithType:(unsigned long long)arg1;
- (void)adVisibilityStateChanged;
- (void)nextVideoStartPlaying;

@end
