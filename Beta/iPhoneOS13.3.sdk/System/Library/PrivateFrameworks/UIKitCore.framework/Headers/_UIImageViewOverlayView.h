/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@protocol _UIImageViewOverlayViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIImageViewOverlayView : UIView

{
    id <_UIImageViewOverlayViewDelegate> _overlayViewDelegate;
}

@property (weak, nonatomic) id <_UIImageViewOverlayViewDelegate> overlayViewDelegate;

- (void)setClipsToBounds:(_Bool)arg1;

@end
