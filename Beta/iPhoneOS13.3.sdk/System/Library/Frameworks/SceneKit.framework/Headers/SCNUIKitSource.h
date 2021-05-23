/*
 Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

#import <SceneKit/SCNImageSource.h>

@class UIView, UIWindow;

__attribute__((visibility("hidden")))
@interface SCNUIKitSource : SCNImageSource

{
    id _uiView;
    id _uiWindow;
}

@property (retain, nonatomic) UIView *uiView;
@property (retain, nonatomic) UIWindow *uiWindow;

- (id)init;
- (void)dealloc;
- (_Bool)isOpaque;
- (id)textureSource;
- (_Bool)supportsMetal;
- (id)prepareWindowIfNeeded;

@end
