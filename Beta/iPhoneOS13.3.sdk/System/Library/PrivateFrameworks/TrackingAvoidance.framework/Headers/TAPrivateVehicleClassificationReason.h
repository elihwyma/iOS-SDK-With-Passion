/*
 Image: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
 */

#import <Foundation/NSObject.h>

@interface TAPrivateVehicleClassificationReason : NSObject

{
    unsigned long long _reason;
}

@property (nonatomic, readonly) unsigned long long reason;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithReason:(unsigned long long)arg1;

@end
