/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFNetAddressInternal.h>

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV6 : HMFNetAddressInternal

{
    struct sockaddr_in6 *_internal;
}

@property (nonatomic, readonly) struct sockaddr_in6 *internal;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)addressString;
- (unsigned long long)addressFamily;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;

@end
