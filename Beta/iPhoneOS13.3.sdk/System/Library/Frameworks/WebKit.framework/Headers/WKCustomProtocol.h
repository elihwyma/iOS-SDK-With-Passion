/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <CFNetwork/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol

{
    unsigned long long _customProtocolID;
    struct RetainPtr<__CFRunLoop *> _initializationRunLoop;
}

@property (nonatomic, readonly) unsigned long long customProtocolID;
@property (nonatomic, readonly) struct __CFRunLoop *initializationRunLoop;

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (id).cxx_construct;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
