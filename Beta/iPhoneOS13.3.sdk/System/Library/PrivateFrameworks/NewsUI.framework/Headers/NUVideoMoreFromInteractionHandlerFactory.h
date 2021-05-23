/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NUURLHandling, NUVideoCallToActionURLProviding, SVVideoPlaybackController, SVVideoViewControllerProviding;

@interface NUVideoMoreFromInteractionHandlerFactory : NSObject

{
    id <NUURLHandling> _urlHandler;
    id <NUVideoCallToActionURLProviding> _callToActionURLProvider;
    id <SVVideoPlaybackController> _playbackController;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property (nonatomic, readonly) id <NUURLHandling> urlHandler;
@property (nonatomic, readonly) id <NUVideoCallToActionURLProviding> callToActionURLProvider;
@property (nonatomic, readonly) id <SVVideoPlaybackController> playbackController;
@property (nonatomic, readonly) id <SVVideoViewControllerProviding> videoViewControllerProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)createInteractionHandlerForVideo:(id)arg1;
- (id)initWithPlaybackController:(id)arg1 urlHandler:(id)arg2 callToActionURLProvider:(id)arg3 videoViewControllerProvider:(id)arg4;

@end
