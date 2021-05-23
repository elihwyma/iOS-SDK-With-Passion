/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@interface WebVideoFullscreenController : NSObject

{
    struct RefPtr<VideoFullscreenControllerContext, WTF::DumbPtrTraits<VideoFullscreenControllerContext>> _context;
    struct RefPtr<WebCore::HTMLVideoElement, WTF::DumbPtrTraits<WebCore::HTMLVideoElement>> _videoElement;
}

- (id)init;
- (id).cxx_construct;
- (void)setVideoElement:(struct HTMLVideoElement *)arg1;
- (struct HTMLVideoElement *)videoElement;
- (void)enterFullscreen:(id)arg1 mode:(unsigned int)arg2;
- (void)exitFullscreen;
- (void)requestHideAndExitFullscreen;
- (void)didFinishFullscreen:(struct VideoFullscreenControllerContext *)arg1;

@end
