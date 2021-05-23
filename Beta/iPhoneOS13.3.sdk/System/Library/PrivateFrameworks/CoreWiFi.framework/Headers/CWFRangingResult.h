/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CWFRangingResult : NSObject

{
    int _status;
    NSString *_MACAddress;
    double _distance;
    double _standardDeviation;
    unsigned long long _numberOfValidMeasurements;
    NSArray *_measurements;
}

@property (copy, nonatomic) NSString *MACAddress;
@property (nonatomic) double distance;
@property (nonatomic) double standardDeviation;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long numberOfValidMeasurements;
@property (copy, nonatomic) NSArray *measurements;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRangingResult:(id)arg1;

@end
