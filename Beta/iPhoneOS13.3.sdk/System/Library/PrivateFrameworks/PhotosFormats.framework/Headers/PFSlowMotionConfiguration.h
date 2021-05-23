/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@class PFSlowMotionRampConfiguration;

@interface PFSlowMotionConfiguration : NSObject

{
    float _volumeDuringSlowMotion;
    float _volumeDuringRampToSlowMotion;
    PFSlowMotionRampConfiguration *_rampDown;
    PFSlowMotionRampConfiguration *_rampUp;
}

@property (nonatomic, readonly) float volumeDuringSlowMotion;
@property (nonatomic, readonly) float volumeDuringRampToSlowMotion;
@property (retain, nonatomic, readonly) PFSlowMotionRampConfiguration *rampDown;
@property (retain, nonatomic, readonly) PFSlowMotionRampConfiguration *rampUp;

- (id)init;

@end
