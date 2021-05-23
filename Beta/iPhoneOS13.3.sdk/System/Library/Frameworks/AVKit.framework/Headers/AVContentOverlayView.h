/*
 Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@protocol AVContentOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface AVContentOverlayView

{
    id <AVContentOverlayViewDelegate> _delegate;
}

@property (weak, nonatomic) id <AVContentOverlayViewDelegate> delegate;

- (void)didAddSubview:(id)arg1;
- (void)_didRemoveSubview:(id)arg1;

@end
