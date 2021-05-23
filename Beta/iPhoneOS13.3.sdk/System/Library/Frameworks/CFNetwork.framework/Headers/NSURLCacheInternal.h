/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <NSObject.h>

@interface NSURLCacheInternal : NSObject

{
    unsigned long long memoryCapacity;
    unsigned long long diskCapacity;
    struct _CFURLCache *_cacheRef;
}

- (void)dealloc;

@end
