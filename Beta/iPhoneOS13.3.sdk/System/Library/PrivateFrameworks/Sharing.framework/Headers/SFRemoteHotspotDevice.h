/*
 Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

#import <Foundation/NSObject.h>

@class NSData, NSNumber, NSString;

@interface SFRemoteHotspotDevice : NSObject

{
    unsigned char _networkType;
    _Bool _osSupportsAutoHotspot;
    _Bool _supportsCompanionLink;
    _Bool _hasDuplicates;
    NSString *_deviceName;
    NSString *_deviceIdentifier;
    NSNumber *_batteryLife;
    NSNumber *_signalStrength;
    NSString *_model;
    long long _group;
    NSData *_advertisementData;
}

@property (nonatomic) _Bool supportsCompanionLink;
@property _Bool hasDuplicates;
@property (copy, nonatomic, readonly) NSData *advertisementData;
@property (copy) NSString *deviceName;
@property (copy) NSString *deviceIdentifier;
@property (retain) NSNumber *batteryLife;
@property unsigned char networkType;
@property (retain) NSNumber *signalStrength;
@property (retain) NSString *model;
@property _Bool osSupportsAutoHotspot;
@property long long group;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)networkTypeForIncomingType:(unsigned char)arg1;
- (id)batteryLifeFromInfo:(unsigned int)arg1;
- (unsigned char)networkTypeFromInfo:(unsigned int)arg1;
- (id)signalStrengthFromInfo:(unsigned int)arg1;
- (id)initWithName:(id)arg1 identifier:(id)arg2 advertisement:(CDStruct_56cc8428)arg3;
- (_Bool)componentsAreEqualTo:(id)arg1;
- (void)updateWithHotspotInfo:(unsigned int)arg1;

@end
