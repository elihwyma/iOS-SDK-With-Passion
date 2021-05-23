/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class WKWebView;

@interface _SFSharingLinkExtractor : NSObject

{
    WKWebView *_webView;
}

- (id)initWithWebView:(id)arg1;
- (void)fetchSharingLinkWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
