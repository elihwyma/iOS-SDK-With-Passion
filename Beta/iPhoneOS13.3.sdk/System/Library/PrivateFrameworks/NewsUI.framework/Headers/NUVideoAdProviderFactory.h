/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@protocol NUAdProvider, NUVideoAdEventTracker, NUVideoPlaybackCounter, SVModalPresentationViewControllerProviding, SVVisibilityMonitoring, SXVASTAnalyticsEventInfoFactory;

@interface NUVideoAdProviderFactory : NSObject

{
    id <NUAdProvider> _adProvider;
    NSArray *_contextProviders;
    id <NUVideoAdEventTracker> _eventTracker;
    id <SVVisibilityMonitoring> _videoPlayerVisibilityMonitor;
    id <SXVASTAnalyticsEventInfoFactory> _analyticsEventInfoFactory;
    id <NUVideoPlaybackCounter> _playbackCounter;
    id <SVModalPresentationViewControllerProviding> _modalPresentationViewControllerProvider;
}

@property (nonatomic, readonly) id <NUAdProvider> adProvider;
@property (copy, nonatomic, readonly) NSArray *contextProviders;
@property (nonatomic, readonly) id <NUVideoAdEventTracker> eventTracker;
@property (nonatomic, readonly) id <SVVisibilityMonitoring> videoPlayerVisibilityMonitor;
@property (nonatomic, readonly) id <SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;
@property (nonatomic, readonly) id <NUVideoPlaybackCounter> playbackCounter;
@property (nonatomic, readonly) id <SVModalPresentationViewControllerProviding> modalPresentationViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createVideoAdProviderWithContextProviderForVideoBefore:(id)arg1 contextProviderForVideoAfter:(id)arg2;
- (id)initWithAdProvider:(id)arg1 contextProviders:(id)arg2 eventTracker:(id)arg3 videoPlayerVisibilityMonitor:(id)arg4 analyticsEventInfoFactory:(id)arg5 playbackCounter:(id)arg6 modalPresentationViewControllerProvider:(id)arg7;

@end
