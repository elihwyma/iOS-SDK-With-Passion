/*
 Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

#import <Foundation/NSObject.h>

@interface TSADEVValue : NSObject

{
    double _observationInterval;
    double _adev;
}

@property (nonatomic, readonly) double observationInterval;
@property (nonatomic, readonly) double adev;

- (id)description;
- (id)initWithObservationInterval:(double)arg1 andADEV:(double)arg2;

@end
