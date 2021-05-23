/*
 Image: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSUUID, SPEstimatedLocation;

@interface SPBeaconAdvertisement : NSObject

{
    unsigned char _rawStatus;
    NSData *_address;
    NSData *_publicKey;
    NSData *_deviceType;
    NSData *_batteryState;
    long long _rssi;
    NSDate *_scanDate;
    SPEstimatedLocation *_location;
    NSUUID *_recordIdentifier;
}

@property (copy, nonatomic) NSData *address;
@property (copy, nonatomic) NSData *publicKey;
@property (copy, nonatomic) NSData *deviceType;
@property (copy, nonatomic) NSData *batteryState;
@property (copy, nonatomic) NSDate *scanDate;
@property (copy, nonatomic) NSUUID *recordIdentifier;
@property (nonatomic) unsigned char rawStatus;
@property (nonatomic) long long rssi;
@property (copy, nonatomic) SPEstimatedLocation *location;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAddress:(id)arg1 publicKey:(id)arg2 deviceType:(id)arg3 batteryState:(id)arg4 rawStatus:(unsigned char)arg5 rssi:(long long)arg6 scanDate:(id)arg7 recordIdentifier:(id)arg8;

@end
