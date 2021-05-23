/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransitionCATransition.h>

@interface OKTransitionRotate : OKTransitionCATransition

{
    unsigned long long _direction;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)prepareInView:(id)arg1;
- (_Bool)needsToClip;
- (void)setSettingRotationDirection:(unsigned long long)arg1;
- (unsigned long long)settingRotationDirection;

@end
