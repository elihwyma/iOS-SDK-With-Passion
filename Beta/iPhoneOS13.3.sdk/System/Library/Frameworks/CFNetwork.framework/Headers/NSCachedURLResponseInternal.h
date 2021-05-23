/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@class NSData, NSDictionary, NSURLResponse;

@interface NSCachedURLResponseInternal : NSObject

{
    NSURLResponse *response;
    NSData *data;
    NSDictionary *userInfo;
    unsigned long long storagePolicy;
    struct _CFCachedURLResponse *_cachedURLResponse;
}

- (void)dealloc;

@end
