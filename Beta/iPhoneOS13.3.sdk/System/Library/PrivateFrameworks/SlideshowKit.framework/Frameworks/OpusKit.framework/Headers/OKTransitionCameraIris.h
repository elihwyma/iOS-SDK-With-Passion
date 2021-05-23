/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransitionCATransition.h>

@interface OKTransitionCameraIris : OKTransitionCATransition

{
    struct CGPoint _location;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (id)initWithSettings:(id)arg1;
- (void)prepareInView:(id)arg1;
- (void)setSettingLocation:(struct CGPoint)arg1;
- (struct CGPoint)settingLocation;
- (_Bool)needsToClip;

@end
