/*
 Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

#import <Foundation/NSObject.h>

@class HUVelocitySample;

@interface HUVelocitySampler : NSObject

{
    HUVelocitySample *_currentSample;
    HUVelocitySample *_previousSample;
}

@property (retain, nonatomic) HUVelocitySample *currentSample;
@property (retain, nonatomic) HUVelocitySample *previousSample;
@property (nonatomic, readonly) struct CGVector velocity;

- (void)reset;
- (void)addTouchSample:(struct CGPoint)arg1;

@end
