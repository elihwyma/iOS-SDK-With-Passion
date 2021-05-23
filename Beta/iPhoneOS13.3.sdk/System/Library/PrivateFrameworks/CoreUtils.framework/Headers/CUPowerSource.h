/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CUPowerSource : NSObject

{
    struct OpaqueIOPSPowerSourceID *_psID;
    _Bool _aggregate;
    _Bool _charging;
    _Bool _showChargingUI;
    _Bool _adapterSharedSource;
    _Bool _present;
    unsigned int _expectedComponents;
    int _powerState;
    int _role;
    NSString *_accessoryCategory;
    NSString *_accessoryID;
    double _chargeLevel;
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
    CUPowerSource *_subLeft;
    CUPowerSource *_subRight;
    CUPowerSource *_subCase;
    CUPowerSource *_subMain;
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
@property (nonatomic) _Bool present;
@property (copy, nonatomic) NSString *accessoryCategory;
@property (copy, nonatomic) NSString *accessoryID;
@property (nonatomic) _Bool aggregate;
@property (nonatomic) _Bool charging;
@property (nonatomic) double chargeLevel;
@property (nonatomic) unsigned int expectedComponents;
@property (nonatomic) long long familyCode;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSArray *LEDs;
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
@property (retain, nonatomic) CUPowerSource *subLeft;
@property (retain, nonatomic) CUPowerSource *subRight;
@property (retain, nonatomic) CUPowerSource *subCase;
@property (retain, nonatomic) CUPowerSource *subMain;
@property (nonatomic) long long temperature;
@property (copy, nonatomic) NSString *transportType;
@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long vendorID;
@property (nonatomic) long long adapterErrorFlags;
@property (nonatomic) long long adapterFamilyCode;
@property (copy, nonatomic) NSString *adapterName;
@property (nonatomic) _Bool adapterSharedSource;
@property (nonatomic) long long adapterSourceID;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)publish;
- (id)detailedDescription;
- (_Bool)isAggregateComponent;
- (unsigned int)updateWithPowerAdapterDetails:(id)arg1;
- (unsigned int)updateWithPowerSourceDescription:(id)arg1;
- (void)_updateWithCoder:(id)arg1;
- (_Bool)hasAllComponents;
- (void)handleSubComponentsUpdated;
- (void)handleSubComponentsUpdatedWithBaseSource:(id)arg1;
- (void)updateWithPowerSource:(id)arg1;

@end
