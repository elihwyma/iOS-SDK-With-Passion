/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@class NSString;

__attribute__((visibility("hidden")))
@interface HMFNetAddressInternal

{
    unsigned long long _addressFamily;
    NSString *_addressString;
}

@property (nonatomic, readonly) unsigned long long addressFamily;
@property (copy, nonatomic, readonly) NSString *addressString;

- (id)dataUsingEncoding:(unsigned long long)arg1;

@end
