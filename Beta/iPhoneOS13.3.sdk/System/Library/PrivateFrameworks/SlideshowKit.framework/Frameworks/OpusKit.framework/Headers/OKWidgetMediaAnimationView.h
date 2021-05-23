/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSMutableArray, NSString;

@interface OKWidgetMediaAnimationView : OKWidgetView

{
    NSMutableArray *_CGImages;
    _Bool _autoplay;
    _Bool _loop;
    double _duration;
    NSString *_uuid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)animationKeyPrefix;
+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)stopAnimation;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (void)playAnimation;
- (id)settingObjectForKey:(id)arg1;
- (long long)settingContentMode;
- (void)setSettingContentMode:(long long)arg1;
- (void)setSettingUrls:(id)arg1;
- (_Bool)settingAutoplay;
- (void)setSettingAutoplay:(_Bool)arg1;
- (_Bool)settingLoop;
- (void)setSettingLoop:(_Bool)arg1;
- (double)settingDuration;
- (void)setSettingDuration:(double)arg1;

@end
