/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@interface ARCoachingAnimTime : NSObject

{
    double _absoluteTime;
    double _startTime;
    double _oscillatingTime;
    double _delta;
    double _deltaPercentage;
    double _duration;
}

@property (nonatomic) double absoluteTime;
@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic, readonly) double oscillatingTime;
@property (nonatomic, readonly) double delta;
@property (nonatomic, readonly) double deltaPercentage;

- (id)init;

@end
