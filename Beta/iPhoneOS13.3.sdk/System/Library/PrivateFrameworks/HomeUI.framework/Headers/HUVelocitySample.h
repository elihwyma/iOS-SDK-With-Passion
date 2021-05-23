/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@interface HUVelocitySample : NSObject

{
    double _startTime;
    double _endTime;
    struct CGPoint _start;
    struct CGPoint _end;
}

@property (nonatomic) struct CGPoint start;
@property (nonatomic) struct CGPoint end;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic, readonly) struct CGVector translation;
@property (nonatomic, readonly) double dt;
@property (nonatomic, readonly) struct CGVector velocity;

+ (id)sampleWithStart:(struct CGPoint)arg1 end:(struct CGPoint)arg2 startTime:(double)arg3 endTime:(double)arg4;

- (_Bool)isSampleDistinctFromPoint:(struct CGPoint)arg1;

@end
