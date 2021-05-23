/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIWKAutocorrectionContext.h>

__attribute__((visibility("hidden")))
@interface WKAutocorrectionContext : UIWKAutocorrectionContext

+ (id)emptyAutocorrectionContext;
+ (id)autocorrectionContextWithWebContext:(const struct WebAutocorrectionContext *)arg1;

@end
