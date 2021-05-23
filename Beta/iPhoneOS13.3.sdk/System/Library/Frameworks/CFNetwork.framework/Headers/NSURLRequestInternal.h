/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface NSURLRequestInternal : NSObject

{
    struct URLRequest _request;
}

@property (readonly) struct URLRequest *_inner;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id).cxx_construct;
- (id)_initWithMessage:(struct __CFHTTPMessage *)arg1 bodyParts:(struct __CFArray *)arg2 cachePolicy:(unsigned long long)arg3 timeout:(double)arg4 mainDocumentURL:(struct __CFURL *)arg5 mutable:(unsigned char)arg6;

@end
