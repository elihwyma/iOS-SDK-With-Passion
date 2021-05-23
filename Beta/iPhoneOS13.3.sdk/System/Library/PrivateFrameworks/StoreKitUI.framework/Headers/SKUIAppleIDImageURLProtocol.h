/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <CFNetwork/NSURLProtocol.h>

@interface SKUIAppleIDImageURLProtocol : NSURLProtocol

+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;
- (void)_startLoading;

@end
