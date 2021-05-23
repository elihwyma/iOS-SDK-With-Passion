/*
 Image: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface ADDeviceInfo : NSObject

{
    _Bool _batteryDischarging;
    _Bool _carKitConnected;
    _Bool _voiceOverRunning;
    int _orientation;
    int _interfaceIdiom;
    NSString *_deviceModel;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_buildVersion;
    NSNumber *_screenWidth;
    NSNumber *_screenHeight;
    NSArray *_keyboards;
    NSNumber *_scale;
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_postalCode;
}

@property (copy, nonatomic) NSString *locality;
@property (copy, nonatomic) NSString *administrativeArea;
@property (copy, nonatomic) NSString *subAdministrativeArea;
@property (copy, nonatomic) NSString *ISOcountryCode;
@property (copy, nonatomic) NSString *postalCode;
@property (retain, nonatomic) NSString *deviceModel;
@property (retain, nonatomic) NSString *systemName;
@property (retain, nonatomic) NSString *systemVersion;
@property (retain, nonatomic) NSString *buildVersion;
@property (retain, nonatomic) NSNumber *screenWidth;
@property (retain, nonatomic) NSNumber *screenHeight;
@property (copy, nonatomic) NSArray *keyboards;
@property (nonatomic) _Bool batteryDischarging;
@property (nonatomic) int orientation;
@property (nonatomic) int interfaceIdiom;
@property (nonatomic) _Bool carKitConnected;
@property (retain, nonatomic) NSNumber *scale;
@property (nonatomic) _Bool voiceOverRunning;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateLocality:(id)arg1 adminArea:(id)arg2 subAdmin:(id)arg3 isoCountryCode:(id)arg4 postalCode:(id)arg5;

@end
