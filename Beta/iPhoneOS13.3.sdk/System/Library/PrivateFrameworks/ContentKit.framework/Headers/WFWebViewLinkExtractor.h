/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFWebViewLinkExtractor : NSObject

+ (void)extractLinksFromWKWebView:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)extractLinksFromScriptResult:(id)arg1 withDestinationWidth:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)linkPositionRetrievalJavaScript;

@end
