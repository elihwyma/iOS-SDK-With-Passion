/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <Foundation/NSObject.h>

@class WKWebView;

__attribute__((visibility("hidden")))
@interface LPFetcherConfiguration : NSObject

{
    WKWebView *_webViewForProcessSharing;
    long long _maximumResponseCount;
}

@property (retain, nonatomic) WKWebView *webViewForProcessSharing;
@property (nonatomic) long long maximumResponseCount;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
