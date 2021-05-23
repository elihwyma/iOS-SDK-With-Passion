/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, NUDiscoverMoreVideosInfo;

@protocol NUURLHandling, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUDiscoverMoreInteractionHandler : NSObject

{
    id <NUURLHandling> _URLHandler;
    NUDiscoverMoreVideosInfo *_discoverMoreVideosInfo;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
    id <SVVideoPlaybackController> _playbackController;
}

@property (nonatomic, readonly) id <NUURLHandling> URLHandler;
@property (copy, nonatomic, readonly) NUDiscoverMoreVideosInfo *discoverMoreVideosInfo;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)handleInteraction;
- (id)initWithURLHandler:(id)arg1 discoverMoreVideosInfo:(id)arg2 videoViewControllerProvider:(id)arg3 playbackController:(id)arg4;

@end
