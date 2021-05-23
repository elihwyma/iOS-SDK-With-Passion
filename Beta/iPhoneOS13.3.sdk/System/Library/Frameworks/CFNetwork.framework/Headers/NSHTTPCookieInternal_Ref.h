/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSHTTPCookieInternal.h>

@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal

{
    struct CompactHTTPCookieReference *_fromRef;
}

- (id)init;
- (void)dealloc;
- (struct HTTPCookie *)_inner;
- (id)_initWithReference:(const struct CompactCookieArray *)arg1 index:(long long)arg2;

@end
