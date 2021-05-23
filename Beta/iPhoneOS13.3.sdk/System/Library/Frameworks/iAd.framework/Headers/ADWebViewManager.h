/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class ADWebView;

@interface ADWebViewManager : NSObject

{
    ADWebView *_preallocatedWebView;
}

@property (retain, nonatomic) ADWebView *preallocatedWebView;

+ (id)sharedManager;

- (void)preallocateWebViewWithBackgroundPriority;
- (id)creativeView;
- (id)_webViewForCreative;
- (id)_webViewForCreativeForVideo;
- (id)creativeViewForVideo;

@end
