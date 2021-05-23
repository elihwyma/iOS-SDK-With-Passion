/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSDictionary, NSString, UIWebView;

@interface OKWidgetWebView : OKWidgetView

{
    NSString *_urlText;
    NSDictionary *_options;
    UIWebView *_webView;
    _Bool _scaleToFit;
    NSString *_webDidLoadActionScript;
    _Bool _isFrameLoaded;
}

@property (copy, nonatomic) NSString *urlText;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic, readonly) _Bool isFrameLoaded;
@property (copy, nonatomic) UIWebView *webView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (id)valueForUndefinedKey:(id)arg1;
- (void)layoutSubviews;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)prepareForRefresh;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (void)reloadWebView;
- (id)settingOptions;
- (void)setSettingOptions:(id)arg1;
- (id)settingUrlText;
- (void)setSettingUrlText:(id)arg1;
- (_Bool)settingScaleToFit;
- (void)setSettingScaleToFit:(_Bool)arg1;
- (void)setSettingWebDidLoadActionScript:(id)arg1;

@end
