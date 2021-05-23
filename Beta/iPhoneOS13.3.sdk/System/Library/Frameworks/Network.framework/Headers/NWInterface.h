/*
 Image: /System/Library/Frameworks/Network.framework/Network
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol OS_nw_interface;

@interface NWInterface : NSObject

{
    NSObject<OS_nw_interface> *_internalInterface;
}

@property (retain) NSObject<OS_nw_interface> *internalInterface;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) long long mtu;
@property (nonatomic, readonly) NWInterface *delegateInterface;
@property (nonatomic, readonly) NSString *typeString;
@property (copy, nonatomic, readonly) NSString *privateDescription;
@property (nonatomic, readonly) NSString *interfaceName;
@property (nonatomic, readonly) unsigned long long interfaceIndex;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) long long subtype;
@property (nonatomic, readonly, getter=isExpensive) _Bool expensive;
@property (nonatomic, readonly, getter=isConstrained) _Bool constrained;

+ (_Bool)supportsSecureCoding;
+ (id)descriptionForType:(long long)arg1;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)interfaceWithProtocolBufferData:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterface:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(_Bool)arg2;
- (id)createProtocolBufferObject;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1;
- (id)ipv4Netmask;
- (id)ipv4Broadcast;
- (_Bool)isShallowEqual:(id)arg1;
- (_Bool)isDeepEqual:(id)arg1;
- (id)initWithInterfaceIndex:(unsigned long long)arg1 interfaceName:(id)arg2;

@end
