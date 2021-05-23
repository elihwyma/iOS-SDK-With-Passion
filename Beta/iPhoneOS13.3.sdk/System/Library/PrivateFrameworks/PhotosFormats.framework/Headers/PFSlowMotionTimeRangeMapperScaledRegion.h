/*
 Image: /System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

#import <Foundation/NSObject.h>

@interface PFSlowMotionTimeRangeMapperScaledRegion : NSObject

{
    float _rate;
    float _rampInStartTime;
    float _rampInEndTime;
    float _rampOutStartTime;
    float _rampOutEndTime;
}

@property (nonatomic) float rate;
@property (nonatomic) float rampInStartTime;
@property (nonatomic) float rampInEndTime;
@property (nonatomic) float rampOutStartTime;
@property (nonatomic) float rampOutEndTime;

@end
