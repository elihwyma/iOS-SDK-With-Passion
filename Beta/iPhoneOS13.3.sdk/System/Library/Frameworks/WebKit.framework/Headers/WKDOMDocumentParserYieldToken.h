/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKDOMDocumentParserYieldToken : NSObject

{
    struct unique_ptr<WebCore::DocumentParserYieldToken, std::__1::default_delete<WebCore::DocumentParserYieldToken>> _token;
}

- (id).cxx_construct;
- (id)initWithDocument:(struct Document *)arg1;

@end
