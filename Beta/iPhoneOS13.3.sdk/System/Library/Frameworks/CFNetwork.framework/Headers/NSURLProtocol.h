/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSCachedURLResponse, NSURLProtocolInternal, NSURLRequest;

@protocol NSURLProtocolClient;

@interface NSURLProtocol : NSObject

{
    NSURLProtocolInternal *_internal;
}

@property (retain, readonly) id <NSURLProtocolClient> client;
@property (copy, readonly) NSURLRequest *request;
@property (copy, readonly) NSCachedURLResponse *cachedResponse;

+ (Class)_protocolClassForRequest:(id)arg1;
+ (_Bool)canInitWithTask:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1 task:(id)arg2;
+ (_Bool)registerClass:(Class)arg1;
+ (void)unregisterClass:(Class)arg1;
+ (id)propertyForKey:(id)arg1 inRequest:(id)arg2;
+ (void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3;
+ (void)removePropertyForKey:(id)arg1 inRequest:(id)arg2;
+ (Class)_protocolClassForRequest:(id)arg1 skipAppSSO:(_Bool)arg2;
+ (id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithTask:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end
