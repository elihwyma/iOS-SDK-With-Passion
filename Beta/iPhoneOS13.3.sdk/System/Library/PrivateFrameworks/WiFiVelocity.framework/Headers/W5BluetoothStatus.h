/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface W5BluetoothStatus : NSObject

{
    _Bool _powerOn;
    _Bool _isDiscoverable;
    _Bool _isConnectable;
    _Bool _isScanning;
    NSString *_address;
    NSArray *_devices;
}

@property (nonatomic) _Bool powerOn;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) _Bool isDiscoverable;
@property (nonatomic) _Bool isConnectable;
@property (nonatomic) _Bool isScanning;
@property (copy, nonatomic) NSArray *devices;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToBluetoothStatus:(id)arg1;

@end
