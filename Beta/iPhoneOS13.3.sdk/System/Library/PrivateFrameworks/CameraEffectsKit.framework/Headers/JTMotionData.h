/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class CMAttitude, CMMotionManager, NSOperationQueue;

@interface JTMotionData : NSObject

{
    _Bool _started;
    CMMotionManager *_motionManager;
    NSOperationQueue *_motionQueue;
    CMAttitude *_refAttitude;
    double _yawRadians;
    double _rollRadians;
    double _pitchRadians;
    CDStruct_91d2e2b9 _currentAttitude;
}

@property (retain, nonatomic) CMMotionManager *motionManager;
@property (retain, nonatomic) NSOperationQueue *motionQueue;
@property (retain, nonatomic) CMAttitude *refAttitude;
@property (nonatomic) CDStruct_91d2e2b9 currentAttitude;
@property (nonatomic) double yawRadians;
@property (nonatomic) double rollRadians;
@property (nonatomic) double pitchRadians;
@property _Bool started;

+ (id)sharedInstance;

- (id)init;
- (CDStruct_91d2e2b9)currentOrientation;
- (void)startMotion;
- (void)stopMotion;
- (CDStruct_91d2e2b9)getOrientation:(CDStruct_91d2e2b9)arg1;
- (CDStruct_91d2e2b9)syntheticOrientation;

@end
