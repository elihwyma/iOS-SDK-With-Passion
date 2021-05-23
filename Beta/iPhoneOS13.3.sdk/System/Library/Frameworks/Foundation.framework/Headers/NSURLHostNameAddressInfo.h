/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSURLHostNameAddressInfo : NSObject

{
    double timestamp;
    struct addrinfo *addressInfo;
}

+ (id)addressInfoForHost:(id)arg1;
+ (void)asyncResolveWithCallbackClient:(id)arg1;

- (void)dealloc;
- (double)_timestamp;
- (id)_initWithAddressInfo:(struct addrinfo *)arg1;
- (struct addrinfo *)addrinfo;

@end
