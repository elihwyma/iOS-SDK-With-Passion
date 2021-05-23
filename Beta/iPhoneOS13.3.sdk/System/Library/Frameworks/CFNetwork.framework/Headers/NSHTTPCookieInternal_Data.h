/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSHTTPCookieInternal.h>

@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal

{
    struct CompactHTTPCookieWithData *_fromData;
}

- (id)init;
- (void)dealloc;
- (struct HTTPCookie *)_inner;
- (id)_initWithProperties:(id)arg1 fromString:(_Bool)arg2;
- (id)_initWithCookie:(id)arg1 partition:(id)arg2;
- (id)_initWithHeader:(const struct CompactCookieHeader *)arg1;

@end
