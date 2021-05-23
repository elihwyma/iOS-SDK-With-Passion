/*
 Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFWikipediaProtocol : NSURLProtocol

{
    const void *_instance;
    const struct CFURLProtocolInstanceCallbacks *_callbacks;
}

+ (_Bool)canInitWithRequest:(id)arg1;
+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;

- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;
- (void)scheduleOnRunloop:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;
- (void)unscheduleOnRunloop:(struct __CFRunLoop *)arg1 mode:(struct __CFString *)arg2;

@end
