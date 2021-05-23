/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject

{
    long long _advertisementVersion;
    NSData *_advertisementPayload;
    NSDictionary *_options;
    SFPeerDevice *_device;
}

@property (readonly) long long advertisementVersion;
@property (copy, readonly) NSData *advertisementPayload;
@property (copy, readonly) NSDictionary *options;
@property (retain, readonly) SFPeerDevice *device;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;

@end
