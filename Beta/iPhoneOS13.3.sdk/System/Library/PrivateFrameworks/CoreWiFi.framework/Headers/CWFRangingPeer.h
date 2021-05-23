/*
 Image: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CWFRangingPeer : NSObject

{
    NSString *_MACAddress;
    NSData *_PMK;
    unsigned long long _numberOfMeasurements;
}

@property (copy, nonatomic) NSString *MACAddress;
@property (copy, nonatomic) NSData *PMK;
@property (nonatomic) unsigned long long numberOfMeasurements;

+ (_Bool)supportsSecureCoding;
+ (id)rangingPeerWithMACAddress:(id)arg1 PMK:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToRangingPeer:(id)arg1;

@end
