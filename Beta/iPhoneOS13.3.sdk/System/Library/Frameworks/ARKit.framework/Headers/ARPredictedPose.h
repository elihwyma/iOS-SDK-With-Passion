/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARPose;

@interface ARPredictedPose : NSObject

{
    unsigned long long _type;
    unsigned long long _frameNumber;
    double _predictionTime;
    ARPose *_pose;
}

@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long frameNumber;
@property (nonatomic, readonly) double predictionTime;
@property (nonatomic, readonly) ARPose *pose;

+ (id)predictedPoseAsDictionary:(id)arg1;

- (id)description;
- (id)initWithType:(unsigned long long)arg1 pose:(id)arg2 frameNumber:(unsigned long long)arg3 predictionTime:(double)arg4;

@end
