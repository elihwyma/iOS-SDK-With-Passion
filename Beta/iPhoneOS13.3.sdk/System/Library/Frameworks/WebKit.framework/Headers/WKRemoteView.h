/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <WebKit/WKCompositingView.h>

__attribute__((visibility("hidden")))
@interface WKRemoteView : WKCompositingView

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect)arg1 contextID:(unsigned int)arg2;

@end
