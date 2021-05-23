/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface PIVideoReframeTimedMetadata : NSObject

{
    NSArray *_subjects;
    struct CGVector _estimatedCenterMotion;
    struct CGVector _estimatedMotionBlur;
    CDStruct_1b6d18a9 _time;
    CDStruct_8e0628e6 _trajectoryHomography;
}

@property (readonly) CDStruct_1b6d18a9 time;
@property (readonly) NSArray *subjects;
@property (readonly) struct CGVector estimatedCenterMotion;
@property (readonly) struct CGVector estimatedMotionBlur;
@property (readonly) CDStruct_8e0628e6 trajectoryHomography;

- (void)setTime:(CDStruct_1b6d18a9)arg1;
- (void)setSubjects:(id)arg1;
- (void)setEstimatedCenterMotion:(struct CGVector)arg1;
- (void)setEstimatedMotionBlur:(struct CGVector)arg1;
- (void)setTrajectoryHomography:(CDStruct_8e0628e6)arg1;

@end
