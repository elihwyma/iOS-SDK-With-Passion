/*
 Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

#import <SpriteKit/SKView.h>

@interface DTSSceneView : SKView

{
    _Bool _shouldDelayLayout;
    _Bool _didDelayLayout;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_applicationDidEnterBackground;
- (void)_updateLayout;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidBecomeActive;

@end
