/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <Foundation/NSObject.h>

@class CMMotionTimeRange, NSString;

@interface CMVehicleStateData : NSObject

{
    CMMotionTimeRange *fTimeRange;
    NSString *fDeviceId;
}

@property (nonatomic, readonly) CMMotionTimeRange *timeRange;
@property (nonatomic, readonly) NSString *deviceId;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeRange:(id)arg1 deviceId:(id)arg2;

@end
