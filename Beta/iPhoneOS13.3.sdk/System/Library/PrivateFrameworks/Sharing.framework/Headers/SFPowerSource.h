/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface SFPowerSource : NSObject

{
    struct OpaqueIOPSPowerSourceID *_psID;
    int _lowPowerMonitoringToken;
    double _lowWarnLevel;
    _Bool _charging;
    _Bool _lowPowerModeEnabled;
    _Bool _showChargingUI;
    _Bool _adapterSharedSource;
    _Bool _added;
    _Bool _present;
    int _powerState;
    int _role;
    unsigned int _changes;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    NSData *_batteryCaseAddress;
    double _chargeLevel;
    long long _color;
    long long _familyCode;
    NSString *_groupID;
    NSArray *_LEDs;
    double _maxCapacity;
    NSString *_name;
    NSString *_partID;
    NSString *_partName;
    long long _productID;
    long long _sourceID;
    NSString *_state;
    long long _temperature;
    NSString *_transportType;
    NSString *_type;
    long long _vendorID;
    long long _adapterErrorFlags;
    long long _adapterFamilyCode;
    NSString *_adapterName;
    long long _adapterSourceID;
    NSDictionary *_ioKitAdapterDescription;
    NSDictionary *_ioKitDescription;
}

@property (copy, nonatomic) NSDictionary *ioKitAdapterDescription;
@property (copy, nonatomic) NSDictionary *ioKitDescription;
@property (nonatomic) _Bool added;
@property (nonatomic) _Bool present;
@property (nonatomic) unsigned int changes;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (copy, nonatomic) NSData *batteryCaseAddress;
@property (nonatomic) _Bool charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) long long color;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *LEDs;
@property (nonatomic, readonly, getter=isLowPowerModeEnabled) _Bool lowPowerModeEnabled;
@property (nonatomic) double lowWarnLevel;
@property (nonatomic, readonly, getter=isInternal) _Bool internal;
@property (nonatomic) double maxCapacity;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *partID;
@property (copy, nonatomic) NSString *partName;
@property (nonatomic) int powerState;
@property (nonatomic) long long productID;
@property (nonatomic) int role;
@property (nonatomic) _Bool showChargingUI;
@property (nonatomic) long long sourceID;
@property (copy, nonatomic) NSString *state;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorID;
@property (nonatomic, readonly) _Bool wirelessCharging;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName;
@property (nonatomic) _Bool adapterSharedSource;
@property (nonatomic) long long adapterSourceID;
@property (nonatomic, readonly) long long matID;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)publish;
- (id)detailedDescription;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (void)_updateWithCoder:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;
- (void)startLowPowerMonitoringIfAppropriate;
- (void)lowPowerModeChanged:(int)arg1;

@end
