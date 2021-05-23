/*
 Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

#import <CoreMotion/CMLogItem.h>

@interface CMActivity : CMLogItem

{
    struct CLMotionActivity fActivity;
}

@property (nonatomic, readonly) int confidence;
@property (nonatomic, readonly) _Bool isMoving;
@property (nonatomic, readonly) _Bool isWalking;
@property (nonatomic, readonly) _Bool isRunning;
@property (nonatomic, readonly) _Bool isDriving;
@property (nonatomic, readonly) _Bool maybeExitingVehicle;
@property (nonatomic, readonly) _Bool hasExitedVehicle;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CLMotionActivity)activity;
- (id)initWithMotionActivity:(struct CLMotionActivity)arg1;

@end
