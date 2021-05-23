/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class HMFNetAddressInternal, NSString;

@interface HMFNetAddress

{
    HMFNetAddressInternal *_internal;
}

@property (nonatomic, readonly) HMFNetAddressInternal *internal;
@property (nonatomic, readonly) unsigned long long addressFamily;
@property (copy, nonatomic, readonly) NSString *addressString;

+ (id)localAddress;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)dataUsingEncoding:(unsigned long long)arg1;
- (id)initWithHostname:(id)arg1;
- (id)attributeDescriptions;
- (id)initWithSocketAddress:(const struct sockaddr *)arg1;

@end
