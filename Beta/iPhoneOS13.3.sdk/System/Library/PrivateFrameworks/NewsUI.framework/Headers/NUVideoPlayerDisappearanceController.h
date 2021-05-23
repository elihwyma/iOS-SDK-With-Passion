/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, NUVideoAdHistoryEventTracker;

@protocol SVVideoPlaybackAdvancing, SVVideoPlaybackController, SVVideoQueueProviding, SVVideoViewControllerProviding;

@interface NUVideoPlayerDisappearanceController : NSObject <Swift>

{
    NUVideoAdHistoryEventTracker *_adHistoryEventTracker;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoPlaybackAdvancing> _playbackAdvancer;
    id <SVVideoQueueProviding> _queueProvider;
}

@property (nonatomic, readonly) NUVideoAdHistoryEventTracker *adHistoryEventTracker;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (weak, nonatomic, readonly) id <SVVideoPlaybackAdvancing> playbackAdvancer;
@property (weak, nonatomic, readonly) id <SVVideoQueueProviding> queueProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)videoPlayerDidBecomeInvisible;
- (id)initWithAdHistoryEventTracker:(id)arg1 videoViewControllerProvider:(id)arg2 playbackController:(id)arg3 playbackAdvancer:(id)arg4 queueProvider:(id)arg5;

@end
