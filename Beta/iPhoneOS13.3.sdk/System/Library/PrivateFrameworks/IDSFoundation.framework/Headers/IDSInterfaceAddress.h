/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class IDSSockAddrWrapper, NSData, NSString;

@interface IDSInterfaceAddress : NSObject

{
    IDSSockAddrWrapper *_address;
    IDSSockAddrWrapper *_external;
    IDSSockAddrWrapper *_netmask;
    IDSSockAddrWrapper *_destination;
    NSString *_name;
    unsigned int _index;
    NSString *_delegatedName;
    unsigned int _delegatedIndex;
    NSData *_bssid;
    _Bool _AWDL;
    _Bool _Cellular;
    _Bool _temporary;
    _Bool _companionLink;
    _Bool _expensive;
    _Bool _constrained;
}

@property (readonly) unsigned long long IPVersion;
@property (readonly) IDSSockAddrWrapper *address;
@property (copy) IDSSockAddrWrapper *external;
@property (readonly) IDSSockAddrWrapper *netmask;
@property (readonly) IDSSockAddrWrapper *destination;
@property (readonly) NSString *name;
@property (readonly) unsigned int index;
@property (readonly) NSString *delegatedName;
@property (readonly) unsigned int delegatedIndex;
@property (readonly) NSData *bssid;
@property (readonly, getter=isAWDL) _Bool AWDL;
@property (readonly, getter=isCellular) _Bool Cellular;
@property (readonly, getter=isTemporaryIPv6) _Bool temporary;
@property (readonly, getter=isCompanionLink) _Bool companionLink;
@property (nonatomic, readonly) _Bool expensive;
@property (nonatomic) _Bool constrained;

+ (id)BSSIDWithInterfaceName:(id)arg1;
+ (id)interfaceAddressWithTransmittedBytes:(char *)arg1 length:(long long)arg2 withLocalInterfaceName:(id)arg3;
+ (id)interfaceAddress:(struct ifaddrs *)arg1 eflags:(unsigned long long)arg2 v6flags:(int)arg3 iftype:(int)arg4;

- (id)description;
- (id)initWithInterfaceAddress:(struct ifaddrs *)arg1 bflags:(unsigned char)arg2 bssid:(char *)arg3 bssidLength:(unsigned char)arg4;
- (long long)getTransmittableBytes:(char *)arg1 withPrefixByte:(unsigned char)arg2;

@end
