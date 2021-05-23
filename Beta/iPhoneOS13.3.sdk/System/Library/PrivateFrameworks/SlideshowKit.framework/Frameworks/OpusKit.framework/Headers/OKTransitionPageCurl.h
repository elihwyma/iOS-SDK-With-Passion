/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKTransitionCATransition.h>

@interface OKTransitionPageCurl : OKTransitionCATransition

{
    unsigned long long _direction;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (id)init;
- (id)initWithSettings:(id)arg1;
- (void)setSettingDirection:(unsigned long long)arg1;
- (void)prepareInView:(id)arg1;
- (unsigned long long)settingDirection;
- (_Bool)needsToBeFront;

@end
