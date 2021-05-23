/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIWindow.h>

__attribute__((visibility("hidden")))
@interface UISoftwareDimmingWindow : UIWindow

{
    float _overlayLevel;
}

@property (nonatomic) float overlayLevel;

- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)_ignoresHitTest;
- (void)updateOverlayColor;

@end
