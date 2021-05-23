/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <OpusKit/OKWidgetView.h>

@class NSURL, OKDocument, OKPresentationViewController;

@interface OKWidgetOpusView : OKWidgetView

{
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (id)supportedSettings;
+ (void)setupJavascriptContext:(id)arg1;

- (void)dealloc;
- (void)layoutSubviews;
- (_Bool)prepareForDisplay:(_Bool)arg1;
- (id)initWithWidget:(id)arg1;
- (_Bool)prepareForWarmup:(_Bool)arg1;
- (_Bool)prepareForUnload:(_Bool)arg1;
- (void)setSettingUrl:(id)arg1;
- (void)_loadDocumentIfNeeded;

@end
