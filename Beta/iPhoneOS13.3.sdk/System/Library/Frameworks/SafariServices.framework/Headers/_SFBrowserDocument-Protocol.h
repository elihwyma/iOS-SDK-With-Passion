/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <SafariServices/Swift-Protocol.h>

@class NSURL, _SFReloadOptionsController, _SFWebView;

@protocol SFReaderContext;

@protocol _SFBrowserDocument <Swift>

@property (nonatomic, readonly) _SFWebView *webView;
@property (nonatomic, readonly) _SFReloadOptionsController *reloadOptionsController;
@property (nonatomic, readonly) id <SFReaderContext> readerContext;
@property (nonatomic, readonly) NSURL *URLForPerSitePreferences;
@property (nonatomic, readonly) _Bool wasLoadedWithContentBlockersEnabled;
@property (nonatomic, readonly) _Bool canHideToolbar;

- (unsigned short)reloadEnablingContentBlockers: /* Error: Ran out of types for this method. */;
- (unsigned short)perSiteSettingsUIPresentSettings;

@end
