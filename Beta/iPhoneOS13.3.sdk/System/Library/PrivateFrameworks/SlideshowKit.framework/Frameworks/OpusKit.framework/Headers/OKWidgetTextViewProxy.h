/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@interface OKWidgetTextViewProxy : OKWidgetView

{
    struct UIEdgeInsets _textEdgeInsets;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (id)layoutSettingsKeys;
- (struct CGRect)textViewFrame;
- (struct UIEdgeInsets)textEdgeInsets;
- (struct UIEdgeInsets)settingTextEdgeInsets;
- (void)setSettingTextEdgeInsets:(struct UIEdgeInsets)arg1;

@end
