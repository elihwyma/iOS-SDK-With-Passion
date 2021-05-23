/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <CFNetwork/NSURLProtocol.h>

@interface SKUITestDataURLProtocol : NSURLProtocol

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
