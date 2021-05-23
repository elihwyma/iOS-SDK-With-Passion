/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSCache, WKProcessPool;

__attribute__((visibility("hidden")))
@interface MKWebViewFactory : NSObject

{
    WKProcessPool *_processPool;
    NSCache *_webViewCache;
}

+ (id)sharedWebViewFactory;

- (id)init;
- (void)requeueItem:(id)arg1;
- (id)dequeueItemWithBridgeConfiguration:(id)arg1;

@end
