/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Silex/SXMediaComponentView.h>

@class SXDragManager;

@interface SXGalleryComponentView : SXMediaComponentView

{
    SXDragManager *_dragManager;
}

@property (retain, nonatomic) SXDragManager *dragManager;

- (id)hostingView;
- (id)imageViewForLocation:(struct CGPoint)arg1;
- (id)viewForDragManager:(id)arg1;
- (id)dragManager:(id)arg1 dragableAtLocation:(struct CGPoint)arg2;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 mediaSharingPolicyProvider:(id)arg7;
- (void)forceImageViewFullscreen:(id)arg1;

@end
