/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSCachedURLResponse, NSURLRequest;

@protocol NSURLProtocolClient;

@interface NSURLProtocolInternal : NSObject

{
    id <NSURLProtocolClient> client;
    NSURLRequest *request;
    NSCachedURLResponse *cachedResponse;
}

- (void)dealloc;

@end
