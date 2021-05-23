/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface SBTouchHistory : NSObject

{
    unsigned long long _depth;
    NSMutableArray *_locations;
    NSMutableArray *_timestamps;
    double _peakSpeed;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)reset;
- (id)initWithDepth:(unsigned long long)arg1;
- (double)peakSpeed;
- (struct CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (void)updateWithLocation:(struct CGPoint)arg1 timestamp:(double)arg2;
- (int)touchHistoryDepthForTimeDuration:(double)arg1 forComputingDerivative:(_Bool)arg2;

@end
