/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _WKAttributedStringWebViewCache : NSObject

+ (id)cache;
+ (id)configuration;
+ (void)resetPurgeDelay;
+ (void)purgeSingleWebView;
+ (void)clearConfiguration;
+ (RetainPtr_15a4d79f)retrieveOrCreateWebView;
+ (void)cacheWebView:(id)arg1;
+ (void)purgeAllWebViews;

@end
