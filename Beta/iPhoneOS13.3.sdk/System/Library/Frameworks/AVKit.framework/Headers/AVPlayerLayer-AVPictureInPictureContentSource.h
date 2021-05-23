/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVPlayerLayer.h>

@class NSString, UIWindow;

@interface AVPlayerLayer (AVPictureInPictureContentSource)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect avkit_videoRectInWindow;
@property (nonatomic, readonly) _Bool avkit_isVisible;
@property (nonatomic, readonly) UIWindow *avkit_window;

- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;
- (id)avkit_pictureInPictureViewController;
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;
- (id)avkit_makePictureInPicturePlatformAdapterContentPlaceholderLayer;

@end
