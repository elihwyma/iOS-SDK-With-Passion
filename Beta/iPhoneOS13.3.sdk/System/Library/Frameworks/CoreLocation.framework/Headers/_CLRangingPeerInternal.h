/*
 Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface _CLRangingPeerInternal : NSObject

{
    unsigned long long _macAddress;
    NSData *_secureRangingKeyID;
}

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMacAddressAsUInt:(unsigned long long)arg1 secureRangingKeyID:(id)arg2;

@end
