/*
 Image: /System/Library/PrivateFrameworks/PencilPairingUI.framework/PencilPairingUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PNPDeviceState : NSObject

{
    _Bool _batteryLevelUnknown;
    NSString *_name;
    double _batteryLevel;
    unsigned long long _edge;
    unsigned long long _orientation;
}

@property (nonatomic, readonly) _Bool isLowPower;
@property (nonatomic, readonly) _Bool isOnLeftOrRightSide;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) double batteryLevel;
@property (nonatomic) unsigned long long edge;
@property (nonatomic) unsigned long long orientation;
@property (nonatomic) _Bool batteryLevelUnknown;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
