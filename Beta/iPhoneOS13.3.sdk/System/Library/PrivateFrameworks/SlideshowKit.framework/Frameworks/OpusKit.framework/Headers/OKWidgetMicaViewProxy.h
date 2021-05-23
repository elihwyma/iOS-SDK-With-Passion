/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSDictionary, NSString, OKWidgetMicaDocument;

@interface OKWidgetMicaViewProxy : OKWidgetView

{
    NSString *_resourceName;
    NSDictionary *_options;
    OKWidgetMicaDocument *_micaDocument;
    _Bool _scaleToFit;
    _Bool _autoplay;
    double _duration;
    double _seekToTime;
}

@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSDictionary *options;
@property (retain, nonatomic) OKWidgetMicaDocument *micaDocument;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)pause;
- (void)resume;
- (id)valueForUndefinedKey:(id)arg1;
- (void)layoutSubviews;
- (_Bool)isPlaying;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (void)restart;
- (id)initWithWidget:(id)arg1;
- (id)settingObjectForKey:(id)arg1;
- (_Bool)settingAutoplay;
- (void)setSettingAutoplay:(_Bool)arg1;
- (double)settingDuration;
- (void)setSettingDuration:(double)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)prepareForRefresh;
- (unsigned long long)countOfDictionaryProxy:(id)arg1;
- (id)allKeysForDictionaryProxy:(id)arg1;
- (id)dictionaryProxy:(id)arg1 objectForKey:(id)arg2;
- (id)settingOptions;
- (void)setSettingOptions:(id)arg1;
- (_Bool)settingScaleToFit;
- (void)setSettingScaleToFit:(_Bool)arg1;
- (double)settingSeekToTime;
- (void)setSettingSeekToTime:(double)arg1;
- (void)unloadMicaDocument;
- (void)updateMicaDocumentLayer;
- (void)loadMicaDocumentIfNeeded;
- (id)settingResource;
- (void)setSettingResource:(id)arg1;

@end
