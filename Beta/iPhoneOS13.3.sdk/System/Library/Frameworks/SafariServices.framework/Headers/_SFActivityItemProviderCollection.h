/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView, _SFActivityItemProvider, _SFPrintActivityItemProvider;

@interface _SFActivityItemProviderCollection : NSObject

{
    _Bool _displayingDigitalHealthLockoutView;
    _Bool _displayingStandaloneImage;
    _Bool _displayingStandaloneMedia;
    _SFActivityItemProvider *_standaloneImageProvider;
    _SFActivityItemProvider *_webArchiveProvider;
    WKWebView *_webView;
    _SFActivityItemProvider *_linkProvider;
    _SFPrintActivityItemProvider *_printProvider;
    _SFActivityItemProvider *_javaScriptExtensionProvider;
    _SFActivityItemProvider *_downloadProvider;
}

@property (nonatomic, readonly) WKWebView *webView;
@property (nonatomic, readonly) _SFActivityItemProvider *standaloneImageProvider;
@property (nonatomic, readonly) _SFActivityItemProvider *webArchiveProvider;
@property (nonatomic) _Bool displayingDigitalHealthLockoutView;
@property (nonatomic) _Bool displayingStandaloneImage;
@property (nonatomic) _Bool displayingStandaloneMedia;
@property (retain, nonatomic) _SFActivityItemProvider *linkProvider;
@property (retain, nonatomic) _SFPrintActivityItemProvider *printProvider;
@property (retain, nonatomic) _SFActivityItemProvider *javaScriptExtensionProvider;
@property (retain, nonatomic) _SFActivityItemProvider *downloadProvider;

- (id)initWithWebView:(id)arg1;
- (id)activityItemProvidersWithCustomizationController:(id)arg1;

@end
