/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <WebUI/WBSTouchIconCache.h>

__attribute__((visibility("hidden")))
@interface _SFTouchIconCache : WBSTouchIconCache

+ (id)defaultBackgroundColor;
+ (id)_generateDefaultFavoritesIcon;
+ (id)_monogramConfiguration;

- (_Bool)canHandleRequest:(id)arg1;
- (id)_operationWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
