/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

#import <WebCore/Swift-Protocol.h>

@class NSString;

@protocol AVPlayerViewControllerDelegate_WebKitOnly;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewController : NSObject <Swift>

{
    struct VideoFullscreenInterfaceAVKit *_fullscreenInterface;
    struct RetainPtr<UIViewController> _presentingViewController;
    struct RetainPtr<AVPlayerViewController> _avPlayerViewController;
    id <AVPlayerViewControllerDelegate_WebKitOnly> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setDelegate:(id)arg1;
- (id).cxx_construct;
- (id)view;
- (void)removeFromParentViewController;
- (_Bool)isPictureInPictureActive;
- (_Bool)isPictureInPicturePossible;
- (void)setPlayerController:(id)arg1;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;
- (void)enterFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)exitFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startPictureInPicture;
- (void)stopPictureInPicture;
- (_Bool)pictureInPictureWasStartedWhenEnteringBackground;
- (_Bool)showsPlaybackControls;
- (void)setShowsPlaybackControls:(_Bool)arg1;
- (void)setAllowsPictureInPicturePlayback:(_Bool)arg1;
- (id)initWithFullscreenInterface:(struct VideoFullscreenInterfaceAVKit *)arg1;
- (_Bool)playerViewControllerShouldHandleDoneButtonTap:(id)arg1;
- (_Bool)pictureInPictureActive;
- (id)avPlayerViewController;

@end
