/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView, _WKApplicationManifest;

@interface _SFApplicationManifestFetcher : NSObject

{
    CDUnknownBlockType _completionHandler;
    _WKApplicationManifest *_manifest;
    WKWebView *_webView;
    long long _state;
}

- (id)initWithWebView:(id)arg1;
- (void)getApplicationManifestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
