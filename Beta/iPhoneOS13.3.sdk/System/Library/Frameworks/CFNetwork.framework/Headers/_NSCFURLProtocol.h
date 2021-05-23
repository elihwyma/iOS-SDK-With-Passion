/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFURLProtocol : NSURLProtocol

{
    struct _CFURLProtocol *_prot;
    struct NSCFURLProtocolClient *_client;
}

+ (_Bool)canInitWithTask:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (const struct InternalProtocolImplementation *)_cf_internalImpl;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;

- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
