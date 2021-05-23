/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSString, NSUUID, RPIdentity, SFProximityEstimator;

@interface SFBLEDevice : NSObject

{
    char _rssiHistory[8];
    unsigned char _rssiCount;
    unsigned char _rssiIndex;
    _Bool _insideBubble;
    _Bool _insideSmallBubble;
    _Bool _insideMediumBubble;
    _Bool _paired;
    _Bool _tempPaired;
    _Bool _triggered;
    int _rssiEstimate;
    unsigned int _connectedServices;
    unsigned int _productID2;
    NSData *_advertisementData;
    NSDictionary *_advertisementFields;
    NSData *_bluetoothAddress;
    NSUUID *_counterpartIdentifier;
    long long _distance;
    unsigned long long _foundTicks;
    NSUUID *_identifier;
    NSString *_name;
    long long _rssi;
    long long _rssiCeiling;
    long long _rssiFloor;
    long long _smoothedRSSI;
    SFProximityEstimator *_closeProximityEstimatorSmall;
    SFProximityEstimator *_closeProximityEstimatorMedium;
    SFProximityEstimator *_infoProximityEstimator;
    double _lastSeen;
    double _pairCheckTime;
    SFProximityEstimator *_proxPairProximityEstimator;
    SFProximityEstimator *_setupProximityEstimator;
    RPIdentity *_rpIdentity;
}

@property (copy, nonatomic) NSData *advertisementData;
@property (copy, nonatomic) NSDictionary *advertisementFields;
@property (copy, nonatomic) NSData *bluetoothAddress;
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorSmall;
@property (retain, nonatomic) SFProximityEstimator *closeProximityEstimatorMedium;
@property (nonatomic) unsigned int connectedServices;
@property (copy, nonatomic) NSUUID *counterpartIdentifier;
@property (nonatomic) long long distance;
@property (nonatomic) unsigned long long foundTicks;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) SFProximityEstimator *infoProximityEstimator;
@property (nonatomic) _Bool insideBubble;
@property (nonatomic) _Bool insideSmallBubble;
@property (nonatomic) _Bool insideMediumBubble;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double lastSeen;
@property (nonatomic) double pairCheckTime;
@property (nonatomic) _Bool paired;
@property (nonatomic) unsigned int productID2;
@property (retain, nonatomic) SFProximityEstimator *proxPairProximityEstimator;
@property (retain, nonatomic) SFProximityEstimator *setupProximityEstimator;
@property (retain, nonatomic) RPIdentity *rpIdentity;
@property (nonatomic) long long rssi;
@property (nonatomic) long long rssiCeiling;
@property (nonatomic) int rssiEstimate;
@property (nonatomic) long long rssiFloor;
@property (nonatomic) long long smoothedRSSI;
@property (nonatomic) _Bool tempPaired;
@property (nonatomic) _Bool triggered;

+ (_Bool)supportsSecureCoding;
+ (void)setRSSIEstimatorInfo:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)updateRSSI:(long long)arg1;

@end
