/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebAVPlayerViewControllerDelegate : NSObject

{
    struct RefPtr<WebCore::VideoFullscreenInterfaceAVKit, WTF::DumbPtrTraits<WebCore::VideoFullscreenInterfaceAVKit>> _fullscreenInterface;
}

@property struct VideoFullscreenInterfaceAVKit *fullscreenInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (_Bool)playerViewControllerShouldStartPictureInPictureFromInlineWhenEnteringBackground:(id)arg1;

@end
