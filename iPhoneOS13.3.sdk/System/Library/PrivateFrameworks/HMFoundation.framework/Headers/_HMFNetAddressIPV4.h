//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFNetAddressInternal.h>

__attribute__((visibility("hidden")))
@interface _HMFNetAddressIPV4 : HMFNetAddressInternal
{
    struct sockaddr_in _internal;
}

@property(readonly, nonatomic) struct sockaddr_in internal; // @synthesize internal=_internal;
- (id)dataUsingEncoding:(NSUInteger)arg1;
- (id)addressString;
- (NSUInteger)addressFamily;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (void)dealloc;
- (id)initWithSocketAddress:(const struct sockaddr )arg1;
- (id)init;

@end

