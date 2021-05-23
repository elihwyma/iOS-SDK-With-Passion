/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKEditCommand : NSObject

{
    struct RefPtr<WebKit::WebEditCommandProxy, WTF::DumbPtrTraits<WebKit::WebEditCommandProxy>> _command;
}

- (id).cxx_construct;
- (struct WebEditCommandProxy *)command;
- (id)initWithWebEditCommandProxy:(Ref_eaa5e81d *)arg1;

@end
