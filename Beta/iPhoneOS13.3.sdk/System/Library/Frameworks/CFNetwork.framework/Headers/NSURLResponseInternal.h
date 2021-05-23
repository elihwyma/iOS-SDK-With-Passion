/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface NSURLResponseInternal : NSObject

{
    struct URLResponse _response;
}

@property (readonly) struct URLResponse *_inner;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;

@end
