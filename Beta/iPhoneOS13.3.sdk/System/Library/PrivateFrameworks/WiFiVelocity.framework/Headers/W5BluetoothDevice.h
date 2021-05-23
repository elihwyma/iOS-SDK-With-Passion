/*
 Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface W5BluetoothDevice : NSObject

{
    _Bool _isPaired;
    _Bool _isCloudPaired;
    _Bool _isConnected;
    _Bool _isLowEnergy;
    _Bool _isAppleDevice;
    NSString *_name;
    NSString *_address;
    unsigned long long _majorClass;
    unsigned long long _minorClass;
    long long _rssi;
    NSString *_afhMap;
    long long _connectionMode;
    unsigned long long _connectionModeInterval;
    long long _manufacturer;
    unsigned long long _lmpVersion;
    unsigned long long _lmpSubversion;
    long long _role;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) _Bool isPaired;
@property (nonatomic) _Bool isCloudPaired;
@property (nonatomic) _Bool isConnected;
@property (nonatomic) unsigned long long majorClass;
@property (nonatomic) unsigned long long minorClass;
@property (nonatomic) _Bool isLowEnergy;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) NSString *afhMap;
@property (nonatomic) long long connectionMode;
@property (nonatomic) unsigned long long connectionModeInterval;
@property (nonatomic) long long manufacturer;
@property (nonatomic) unsigned long long lmpVersion;
@property (nonatomic) unsigned long long lmpSubversion;
@property (nonatomic) long long role;
@property (nonatomic) _Bool isAppleDevice;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (_Bool)conformsToProtocol:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToBluetoothDevice:(id)arg1;

@end
