/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

#import <AVKit/Swift-Protocol.h>

@class MISSING_TYPE, UIWindow;

@protocol AVPictureInPictureContentSource <Swift>

@property (nonatomic, readonly) struct CGRect avkit_videoRectInWindow;
@property (nonatomic, readonly) _Bool avkit_isVisible;
@property (nonatomic, readonly) UIWindow *avkit_window;

- (MISSING_TYPE *)avkit_makePlayerControllerIfNeeded: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)avkit_pictureInPictureViewController;
- (MISSING_TYPE *)avkit_startRoutingVideoToPictureInPictureViewController: /* Error: Ran out of types for this method. */;
- (MISSING_TYPE *)avkit_stopRoutingVideoToPictureInPictureViewController: /* Error: Ran out of types for this method. */;

@end
