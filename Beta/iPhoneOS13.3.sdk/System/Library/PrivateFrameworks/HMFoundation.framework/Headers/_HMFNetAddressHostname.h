/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFNetAddressInternal.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _HMFNetAddressHostname : HMFNetAddressInternal

{
    NSString *_hostname;
}

@property (copy, nonatomic, readonly) NSString *hostname;

+ (id)normalizedHostname:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithHostname:(id)arg1;
- (id)addressString;

@end
