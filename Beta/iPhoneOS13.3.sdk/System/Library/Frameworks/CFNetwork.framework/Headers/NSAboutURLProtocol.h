/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLProtocol.h>

@interface NSAboutURLProtocol : NSURLProtocol

+ (_Bool)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)stopLoading;
- (void)startLoading;

@end
