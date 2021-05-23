/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSSNewsAnalyticsArticleViewingSessionTracker, NUURLHandling, NUVideoActivityViewControllerFactory, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUVideoShareInteractionHandlerFactory : NSObject

{
    id <NUVideoActivityViewControllerFactory> _activityViewControllerFactory;
    id <NSSNewsAnalyticsArticleViewingSessionTracker> _articleViewingSessionTracker;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <NUURLHandling> _URLHandler;
}

@property (nonatomic, readonly) id <NUVideoActivityViewControllerFactory> activityViewControllerFactory;
@property (nonatomic, readonly) id <NSSNewsAnalyticsArticleViewingSessionTracker> articleViewingSessionTracker;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (nonatomic, readonly) id <NUURLHandling> URLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithVideoViewControllerProvider:(id)arg1 playbackController:(id)arg2 activityViewControllerFactory:(id)arg3 articleViewingSessionTracker:(id)arg4 URLHandler:(id)arg5;

@end
