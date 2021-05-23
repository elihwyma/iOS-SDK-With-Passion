/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface WebArchiveResourceFromNSAttributedString : NSObject

{
    struct RefPtr<WebCore::ArchiveResource, WTF::DumbPtrTraits<WebCore::ArchiveResource>> resource;
}

- (id)URL;
- (id).cxx_construct;
- (id)MIMEType;
- (id)initWithData:(id)arg1 URL:(id)arg2 MIMEType:(id)arg3 textEncodingName:(id)arg4 frameName:(id)arg5;

@end
