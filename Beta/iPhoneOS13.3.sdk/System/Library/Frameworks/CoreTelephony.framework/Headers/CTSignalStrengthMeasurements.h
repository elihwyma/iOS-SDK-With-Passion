/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTSignalStrengthMeasurements : NSObject

{
    NSNumber *_rssi;
    NSNumber *_rscp;
    NSNumber *_ecn0;
    NSNumber *_rsrp;
    NSNumber *_rsrq;
    NSNumber *_snr;
    NSNumber *_ecio;
    NSNumber *_rxagc;
}

@property (retain, nonatomic) NSNumber *rssi;
@property (retain, nonatomic) NSNumber *rscp;
@property (retain, nonatomic) NSNumber *ecn0;
@property (retain, nonatomic) NSNumber *rsrp;
@property (retain, nonatomic) NSNumber *rsrq;
@property (retain, nonatomic) NSNumber *snr;
@property (retain, nonatomic) NSNumber *ecio;
@property (retain, nonatomic) NSNumber *rxagc;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
