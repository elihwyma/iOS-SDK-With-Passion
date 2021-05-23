/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface CWFLinkQualityMetric : NSObject

{
    float _CCA;
    NSDate *_updatedAt;
    long long _RSSI;
    double _txRate;
}

@property (copy, nonatomic) NSDate *updatedAt;
@property (nonatomic) long long RSSI;
@property (nonatomic) double txRate;
@property (nonatomic) float CCA;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToLinkQualityMetric:(id)arg1;

@end
