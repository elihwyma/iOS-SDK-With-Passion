/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@interface OKWidgetLabelViewProxy : OKWidgetView

{
    id _label;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (id)label;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (id)layoutSettingsKeys;
- (id)settingFontName;
- (void)setSettingFontName:(id)arg1;
- (float)settingFontSize;
- (void)setSettingFontSize:(float)arg1;
- (id)settingTextColor;
- (void)setSettingTextColor:(id)arg1;
- (void)setSettingTextBackgroundColor:(id)arg1;
- (long long)settingTextAlignment;
- (void)setSettingTextAlignment:(long long)arg1;
- (id)settingText;
- (void)setSettingText:(id)arg1;

@end
